//-----------------------------------------------------------------------
// 
//  Copyright (C) Microsoft Corporation.  All rights reserved.
// 
// 
// THIS CODE AND INFORMATION ARE PROVIDED AS-IS WITHOUT WARRANTY OF ANY
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//-----------------------------------------------------------------------
#include "pch.h"
#include "TripOptimizer.h"
#include "TripOptimizerImpl.h"
#include "HttpRequest.h"
#include "AntSystem.h"

using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Data::Xml::Dom;
using namespace Platform;
using namespace Platform::Collections;
using namespace concurrency;
using namespace std;
using namespace TripOptimizerComponent;
using namespace TripOptimizerComponent::Details;
using namespace AntSystem;
using namespace Web;

//
// Forward declarations.

// URI encodes the provided text.
wstring UriEncode(const wstring& text);

//
// Helper functions.

// <snippet137>
// Creates a task that completes with the provided result.
template <typename Result>
task<Result> task_from_result(Result result)
{
    return create_task([result]() -> Result { return result; });
}
// </snippet137>

// <snippet117>
// Observes all exceptions that occurred in all tasks in the given range.
template<class T, class InIt>
void observe_all_exceptions(InIt first, InIt last)
{
    for_each (first, last, [](task<T> t)
    {
        t.then([](task<T> previousTask)
        {
            try
            {
                previousTask.get();
            }
            catch (Exception^)
            {
                // Swallow the exception.
            }
            catch (const exception&)
            {
                // Swallow the exception.
            }
        });
    });
}
// </snippet117>

//
// TripOptimizerImpl implementation.

// <snippet102>
// Optimizes a trip as an asynchronous process.
IAsyncOperationWithProgress<IMap<String^, IVector<String^>^>^, String^>^ 
    TripOptimizerImpl::OptimizeTripAsync(
    IVector<String^>^ waypoints, 
    String^ travelMode,
    String^ optimize,
    String^ bingMapsKey,
    double alpha, double beta, double rho,
    unsigned int iterations, bool parallel)
{
    // <snippet138>
    // Copy inputs to a OptimizeTripParams structure.
    auto params = make_shared<OptimizeTripParams>();
    for (auto waypoint : waypoints)
    {
        params->Waypoints.push_back(waypoint->Data());
    }
    params->TravelMode = wstring(travelMode->Data());
    params->Optimize = wstring(optimize->Data());
    params->BingMapsKey = UriEncode(bingMapsKey->Data());
    params->Alpha = alpha;
    params->Beta = beta;
    params->Rho = rho;
    params->Iterations = iterations;
    params->Parallel = parallel;
    // </snippet138>

    // <snippet143>
    // Perform the operation asynchronously.
    return create_async([this, params](progress_reporter<String^> reporter, 
        cancellation_token cancellationToken) -> task<IMap<String^, IVector<String^>^>^>
    {
        // Create a linked source for cancellation.
        // This enables both the caller (through the returned 
        // IAsyncOperationWithProgress object) and this class to set
        // the same cancellation token.
        m_cancellationTokenSource = 
            cancellation_token_source::create_linked_source(cancellationToken);
    // </snippet143>

        // Perform the trip optimization.
        return InternalOptimizeTripAsync(params, cancellationToken, reporter)
            .then([this](task<IMap<String^, IVector<String^>^>^> previousTask) -> IMap<String^, IVector<String^>^>^
        {
            try
            {
                return previousTask.get();
            }
            catch (const task_canceled&)
            {
                return nullptr;
            }
        });
    });
}
// </snippet102>

// Optimizes a trip given the provided parameters.
task<IMap<String^, IVector<String^>^>^> TripOptimizerImpl::InternalOptimizeTripAsync(
    shared_ptr<OptimizeTripParams> params,
    cancellation_token cancellationToken,
    progress_reporter<String^> reporter)
{
    params->TotalTime = GetTickCount64();

    // Create the graph.
    CreateGraph(params->Waypoints, params->Nodes, params->Edges);

    // <snippet109>
    //
    // Phase 1: Retrieve the location of each waypoint.
    //

    //
    params->HttpTime = GetTickCount64();

    // Report progress.
    reporter.report("Retrieving locations (0% complete)...");

    auto tasks = RetrieveLocationsAsync(params, cancellationToken, reporter);

    // Move to the next phase after all current tasks complete.
    return when_all(begin(tasks), end(tasks)).then(
        [=](task<void> t) -> task<IMap<String^, IVector<String^>^>^> 
    {
        // The PPL requires that all exceptions be caught and handled.
        // If any task in the collection errors, ensure that all errors in the entire
        // collection are observed at least one time.
        try
        {
            // Calling task.get will cause any exception that occurred 
            // during the task to be thrown.
            t.get();
        }
        catch (Exception^)
        {
            observe_all_exceptions<void>(begin(tasks), end(tasks));
            // Rethrow the original exception.
            throw;
        }
        catch (const task_canceled&)
        {
            observe_all_exceptions<void>(begin(tasks), end(tasks));
            // Rethrow the original exception.
            throw;
        }

        // Report progress.
        reporter.report("Retrieving locations (100% complete)...");

        // If there are unresolved locations, return them.
        if (params->UnresolvedLocations.size() > 0)
        {
            // Parallel arrays of input names to their possible resolved names.
            Vector<String^>^ inputNames;
            Vector<String^>^ options;

            auto locations = ref new Map<String^, IVector<String^>^>();

            // For each unresolved location, add the user input name and
            // the available options to the arrays.
            for (size_t i = 0; i < params->UnresolvedLocations.size(); ++i)
            {
                auto node = params->UnresolvedLocations[i];

                // Add options.
                options = ref new Vector<String^>();
                for (size_t j = 0; j < node->Names.size(); ++j)
                {
                    options->Append(ref new String(node->Names[j].c_str()));
                }
                locations->Insert(ref new String(node->InputName.c_str()), options);
            }

            return task_from_result<IMap<String^, IVector<String^>^>^>(locations);
        }
    // </snippet109>

    // <snippet110>
        //
        // Phase 2: Retrieve route information for each pair of locations.
        //

        // Report progress.
        reporter.report("Retrieving routes (0% complete)...");

        auto tasks = RetrieveRoutesAsync(params, cancellationToken, reporter);

        // Move to the next phase after all current tasks complete.
        return when_all(begin(tasks), end(tasks)).then(
            [=](task<void> t) -> task<IMap<String^, IVector<String^>^>^>
        {
            // The PPL requires that all exceptions be caught and handled.
            // If any task in the collection errors, ensure that all errors in the entire
            // collection are observed at least one time.
            try
            {
                // Calling task.get will cause any exception that occurred 
                // during the task to be thrown.
                t.get();
            }
            catch (Exception^)
            {
                observe_all_exceptions<void>(begin(tasks), end(tasks));
                // Rethrow the original exception.
                throw;
            }
            catch (const task_canceled&)
            {
                observe_all_exceptions<void>(begin(tasks), end(tasks));
                // Rethrow the original exception.
                throw;
            }

            // Report progress.
            reporter.report("Retrieving routes (100% complete)...");

            // Record the elapsed HTTP time.
            params->HttpTime = GetTickCount64() - params->HttpTime;
        // </snippet110>

            //
            // Phase 3: Run the optimization algorithm.
            //

            // Report progress.
            reporter.report("Optimizing route (0% complete)...");

            // Record the start time for the optimization algorithm.
            params->SimulationTime = GetTickCount64();

            // Create a callback function that occasionally reports progress.
            auto lastTime = GetTickCount64();
            const unsigned long iterations = params->Iterations;
            function<void(unsigned int)> progressCallback =
                [this, iterations, &reporter, &lastTime](unsigned int iteration)
            {
                // Post a progress message every 500 ms.
                auto now = GetTickCount64();
                if (now - lastTime >= 500) 
                {
                    wstringstream progress;
                    progress << L"Optimizing route (" 
                        << 100 - static_cast<long>(100.0 * (iterations - iteration) / iterations)
                        << L"% complete)...";
                    reporter.report(ref new String(progress.str().c_str()));
                    lastTime = now;
                }
            };

            // <snippet114>
            // Run the simulation.
            vector<size_t> routeIndices = OptimizeRoute(
                params->Nodes, params->Edges, 
                params->Alpha, params->Beta, params->Rho, 
                params->Iterations, 
                cancellationToken,
                &progressCallback, 
                params->Parallel);
            // </snippet114>

            // Return if cancellation has occurred.
            if (cancellationToken.is_canceled())
            {
                cancel_current_task();
            }

            // Record the elapsed time.
            params->SimulationTime = GetTickCount64() - params->SimulationTime;

            // <snippet115>
            // Create the final route.
            // The optimizer returns a route that has an arbitrary starting point.
            // For example, the route might look like:
            // A -> B -> C -> D -> E -> A
            // If our starting point was D, we want the route to look like:
            // D -> E -> A -> B -> C -> D
            routeIndices.pop_back();
            while (routeIndices.front() != 0)
            {
                routeIndices.push_back(routeIndices.front());
                routeIndices.erase(begin(routeIndices));
            }
            routeIndices.push_back(routeIndices.front());
            // </snippet115>

            // <snippet116>
            //
            // Prepare the return value.
            //

            // Parallel arrays that hold the optimized route locations and names.
            IVector<String^>^ optimizedRoute;             // {"47.620056,-122.349261", ...}
            IVector<String^>^ optimizedRouteDisplayNames; // {"Space Needle, WA", ...}

            optimizedRoute = ref new Vector<String^>();
            optimizedRouteDisplayNames = ref new Vector<String^>();

            // Fill the arrays.
            size_t i = 0;
            for (size_t index : routeIndices)
            {
                const auto node = params->Nodes[index];

                String^ v;

                // The location is the latitude and longitude of the waypoint.
                // For example, "47.620056,-122.349261"
                wstringstream location;
                location << node->ResolvedLocation.Latitude << L',' << node->ResolvedLocation.Longitude;

                v = ref new String(location.str().c_str());
                optimizedRoute->InsertAt(static_cast<unsigned int>(i), v);

                // The display name if the resolved name of the waypoint.
                // For example, "Space Needle, WA"
                v = ref new String(node->ResolvedName.c_str());
                optimizedRouteDisplayNames->InsertAt(static_cast<unsigned int>(i), v);

                ++i;
            }

            // The return value.
            auto finalRoute = ref new Map<String^, IVector<String^>^>();

            finalRoute->Insert("locations", optimizedRoute);
            finalRoute->Insert("displayNames", optimizedRouteDisplayNames);

            // Compute the overall elapsed time.
            params->TotalTime = GetTickCount64() - params->TotalTime;

            // Report final progress.
            // This message contains the overall elapsed time, the time spent performing 
            // HTTP requests, and the time it took to run the simulation.
            wstringstream progress;
            progress << L"Loading Map. Elapsed time: "
                << params->TotalTime << L"ms (total); "
                << params->HttpTime << L"ms (HTTP); "
                << params->SimulationTime << L"ms (simulation).";
            reporter.report(ref new String(progress.str().c_str()));

            return task_from_result<IMap<String^, IVector<String^>^>^>(finalRoute);
            // </snippet116>
        });
    });
}

// <snippet106>
// Creates the graph of objects that represents the trip topography.
void TripOptimizerImpl::CreateGraph(
    const vector<wstring>& waypoints, 
    vector<shared_ptr<Node>>& nodes,
    vector<shared_ptr<Edge>>& edges)
{
    //
    // Create a Node object for each waypoint in the array.
    // Each element of the waypoints array contains a string that represents 
    // a location (for example, "Space Needle, WA").
    //

    for (const wstring& waypoint : waypoints)
    {
        // Add a Node object to the collection.
        nodes.push_back(make_shared<Node>(waypoint));
    }

    //
    // Create edges that form a fully-connected graph.
    //

    // Connect every node to every other node.
    for (auto iter = begin(nodes); iter != end(nodes); ++iter)
    {
        auto node1 = *iter;
        for_each(iter + 1, end(nodes), [this, &node1, &edges](shared_ptr<Node> node2)
        {
            // Create edge pair.
            edges.push_back(make_shared<Edge>(node1, node2));
        });
    }
}
// </snippet106>

// <snippet107>
// Retrieves information about the locations from the Bing Maps location service.
vector<task<void>> TripOptimizerImpl::RetrieveLocationsAsync(
    shared_ptr<OptimizeTripParams> params,
    cancellation_token cancellationToken,
    progress_reporter<String^> reporter)
{
    // Holds the tasks that process the returned XML documents.
    vector<task<void>> tasks;

    // Create HTTP requests for location information.
    auto nodes = params->Nodes;
    params->RequestsPending = static_cast<long>(params->Nodes.size()); // Used to report progress.
    for (auto node : nodes)
    {
        wstringstream uri;
        uri << L"http://dev.virtualearth.net/REST/v1/Locations?q=" 
            << UriEncode(node->InputName)
            << L"&o=xml&key=" << params->BingMapsKey;

        // Create a parent task that downloads the XML document.
        auto httpRequest = make_shared<HttpRequest>();
        auto downloadTask = httpRequest->GetAsync(
            ref new Uri(ref new String(uri.str().c_str())), 
            cancellationToken);

        // Create a continuation task that fills location information after 
        // the download finishes.
        tasks.push_back(downloadTask.then([=](task<wstring> previousTask)
        {
            (void)httpRequest;

            // Get the result to force exceptions to be thrown.
            wstring response = previousTask.get();

            // <snippet142>
            try
            {
                // Create and load the XML document from the response.
                XmlDocument^ xmlDocument = ref new XmlDocument();
                auto xml = ref new String(response.c_str() + 1); // Bypass BOM.
                xmlDocument->LoadXml(xml);

                // Fill in location information.
                ProcessLocation(node, xmlDocument, params->UnresolvedLocations);
            }
            catch (Exception^)
            {
                // An error occurred. Cancel any active operations.
                m_cancellationTokenSource.cancel();
                // Rethrow the exception.
                throw;
            }
            // </snippet142>

            // Report progress.
            wstringstream progress;
            progress << L"Retrieving locations (" 
                << static_cast<long>(100.0 * (params->Nodes.size() - params->RequestsPending) / params->Nodes.size())
                << L"% complete)...";
            reporter.report(ref new String(progress.str().c_str()));
            InterlockedDecrement(&params->RequestsPending);
        }));
    }

    return tasks;
}
// </snippet107>

// Loads information for a single location from the provided XML document.
void TripOptimizerImpl::ProcessLocation(
    shared_ptr<Node> node, 
    XmlDocument^ xmlDocument,
    concurrent_vector<shared_ptr<Node>>& unresolvedLocations)
{
    String^ ns = "xmlns:d=\"http://schemas.microsoft.com/search/local/ws/rest/v1\"";
    IXmlNode^ xmlNode;
    String^ name; // Holds the name of the location.

    String^ temp; // Temporary string to hold numeric data.
    double latitude  = 0.0,  // Holds the latitude and longitude of the location.
        longitude = 0.0;

    // <snippet108>
    // Move to response code.
    // Report an error and return if the status code is 
    // not 200 (OK).
    xmlNode = xmlDocument->SelectSingleNodeNS(L"/d:Response/d:StatusCode/text()", ns);
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse status code from HTTP response");
    // </snippet108>

    temp = (String^)xmlNode->NodeValue;
    int statusCode = _wtoi(temp->Data());
    if (statusCode != 200) throw ref new FailureException("Received status code " + statusCode + " from HTTP response");

    // Read the number of total resources.
    xmlNode = xmlDocument->SelectSingleNodeNS("/d:Response/d:ResourceSets/d:ResourceSet/d:EstimatedTotal/text()", ns);
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse resource set");
    temp = (String^)xmlNode->NodeValue;
    int estimatedTotal = _wtoi(temp->Data());

    wchar_t xpath[200];
    // Populate the Node object with location information.
    for (int i = 0; i < estimatedTotal; ++i)
    {
        //
        // Read name.
        StringCbPrintfW(xpath, 200, L"/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Location[%d]/d:Name/text()", i+1); 
        xmlNode = xmlDocument->SelectSingleNodeNS(ref new String(xpath), ns);
        if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse name");
        name = (String^)xmlNode->NodeValue;

        //
        // Read latitude and longitude.
        StringCbPrintfW(xpath, 200, L"/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Location[%d]/d:Point/d:Latitude/text()", i+1); 
        xmlNode = xmlDocument->SelectSingleNodeNS(ref new String(xpath), ns);
        if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse latitude");
        temp = (String^)xmlNode->NodeValue;
        latitude = _wtof(temp->Data());

        StringCbPrintfW(xpath, 200, L"/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Location[%d]/d:Point/d:Longitude/text()", i+1); 
        xmlNode = xmlDocument->SelectSingleNodeNS(ref new String(xpath), ns);
        if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse longitude");
        temp = (String^)xmlNode->NodeValue;
        longitude = _wtof(temp->Data());

        //
        // Set the resolved name if the name matches the user's input.
        if (wstring(name->Data()) == node->InputName)
        {
            node->ResolvedName = name->Data();
            node->ResolvedLocation = LatLong(latitude, longitude);
        }
        // Add the name to the list of possible names.
        // If the same name occurs multiple times, ensure that we
        // record it one time only.
        if (find(begin(node->Names), end(node->Names), wstring(name->Data())) 
            == end(node->Names))
        {
            node->Names.push_back(name->Data());
            node->Locations.push_back(LatLong(latitude, longitude));
        }
    }

    // <snippet113>
    // If there is only a single name, set it as the resolved name and 
    // location.
    if (node->Names.size() == 1)
    {
        node->ResolvedLocation = node->Locations.front();
        node->ResolvedName = node->Names.front();
    }
    // Otherwise, add the node to the list of unresolved locations.
    else if (node->ResolvedName.length() == 0)
    {
        unresolvedLocations.push_back(node);
    }
    // </snippet113>
}

// <snippet111>
// Retrieves distance information for each pair of locations from the Bing Maps route service.
vector<task<void>> TripOptimizerImpl::RetrieveRoutesAsync(
    shared_ptr<OptimizeTripParams> params,
    cancellation_token cancellationToken,
    progress_reporter<String^> reporter)
{   
    // Holds the tasks that process the returned XML documents.
    vector<task<void>> tasks;

    // Implementation note:
    // We assume that the route from A -> B is the same *distance* as 
    // the route from B -> A. Although this enables us to make fewer HTTP route requests,
    // the final route might be slightly sub-optimal if the trip contains legs with 
    // one-way streets or the distance from A -> B differs from the distance from B -> A.
    // (However, the end route will always contain the correct turn information.)

    // Create HTTP requests for route information.
    auto edges = params->Edges;
    params->RequestsPending = static_cast<long>(edges.size()); // Used to report progress.
    for (auto edge : edges)
    {
        // Create request URL.
        LatLong pointA = edge->PointA->ResolvedLocation;
        LatLong pointB = edge->PointB->ResolvedLocation;

        wstringstream uri;
        uri << L"http://dev.virtualearth.net/REST/v1/Routes/" << params->TravelMode
            << L"?wp.0=" << pointA.Latitude << L"," << pointA.Longitude
            << L"&wp.1=" << pointB.Latitude << L"," << pointB.Longitude
            << L"&optmz=" << params->Optimize
            << L"&o=xml"
            << L"&key=" << params->BingMapsKey;

        // Create a parent task that downloads the XML document.
        auto httpRequest = make_shared<HttpRequest>();
        auto downloadTask = httpRequest->GetAsync(
            ref new Uri(ref new String(uri.str().c_str())), 
            cancellationToken);

        // Create a continuation task that fills route information after 
        // the download finishes.
        tasks.push_back(downloadTask.then([=](task<wstring> previousTask)
        {
            (void)httpRequest;

            // Get the result to force exceptions to be thrown.
            wstring response = previousTask.get();

            try
            {
                // Create and load the XML document from the response.
                XmlDocument^ xmlDocument = ref new XmlDocument();
                auto xml = ref new String(response.c_str() + 1); // Bypass BOM.
                xmlDocument->LoadXml(xml);

                // Fill in route information.
                ProcessRoute(edge, xmlDocument);
            }
            catch (Exception^)
            {
                // An error occurred. Cancel any other active downloads.
                m_cancellationTokenSource.cancel();
                // Rethrow the exception.
                throw;
            }

            // Report progress.
            wstringstream progress;
            progress << L"Retrieving routes ("
                << static_cast<long>(100.0 * (params->Edges.size() - params->RequestsPending) / params->Edges.size())
                << L"% complete)...";
            reporter.report(ref new String(progress.str().c_str()));
            InterlockedDecrement(&params->RequestsPending);
        }));
    }

    return tasks;
}
// </snippet111>

// Loads route information for a single pair of locations from the provided XML document.
void TripOptimizerImpl::ProcessRoute(
    shared_ptr<Edge> edge, 
    XmlDocument^ xmlDocument)
{
    String^ ns = "xmlns:d=\"http://schemas.microsoft.com/search/local/ws/rest/v1\"";
    IXmlNode^ xmlNode;

    String^ temp; // Temporary string to hold numeric data.
    double travelDistance = 0.0; // Holds the travel distance between the points.

    xmlNode = xmlDocument->SelectSingleNodeNS("/d:Response/d:StatusCode/text()", ns);

    // Move to response code.
    // Report an error and return if the status code is 
    // not 200 (OK).
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse status code from HTTP response");
    temp = (String^)xmlNode->NodeValue;
    int statusCode = _wtoi(temp->Data());
    if (statusCode != 200) throw ref new FailureException("Received status code " + statusCode + " from HTTP response");

    xmlNode = xmlDocument->SelectSingleNodeNS("/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Route/d:TravelDistance/text()", ns);
    // 
    // Read travel distance.
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse travel distance");
    temp = (String^)xmlNode->NodeValue;
    travelDistance = _wtof(temp->Data());

    //
    // Read latitude and longitude of both start and end locations.
    //

    // Start
    double lat0, lon0;
    xmlNode = xmlDocument->SelectSingleNodeNS("/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Route/d:RouteLeg/d:ActualStart/d:Latitude/text()", ns);
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse start latitude");
    temp = (String^)xmlNode->NodeValue;
    lat0 = _wtof(temp->Data());

    xmlNode = xmlDocument->SelectSingleNodeNS("/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Route/d:RouteLeg/d:ActualStart/d:Longitude/text()", ns);
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse start longitude");
    temp = (String^)xmlNode->NodeValue;
    lon0 = _wtof(temp->Data());
    LatLong latLong0 = LatLong(lat0, lon0);

    // End
    double lat1, lon1;
    xmlNode = xmlDocument->SelectSingleNodeNS("/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Route/d:RouteLeg/d:ActualEnd/d:Latitude/text()", ns);
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse end latitude");
    temp = (String^)xmlNode->NodeValue;
    lat1 = _wtof(temp->Data());

    xmlNode = xmlDocument->SelectSingleNodeNS("/d:Response/d:ResourceSets/d:ResourceSet/d:Resources/d:Route/d:RouteLeg/d:ActualEnd/d:Longitude/text()", ns);
    if (xmlNode == nullptr) throw ref new NullReferenceException("Failed to parse end longitude");
    temp = (String^)xmlNode->NodeValue;
    lon1 = _wtof(temp->Data());
    LatLong latLong1(lat1, lon1);

    // <snippet112>
    //
    // Update edges.

    // Set travel distance.
    edge->TravelDistance = travelDistance;

    // Ensure that the distance is at least FLT_EPSILON.
    // If the travel distance is very short, a value below FLT_EPSILON
    // can result in a divide by zero error in the trip optimization algorithm.
    if (edge->TravelDistance < FLT_EPSILON)
    {
        edge->TravelDistance = FLT_EPSILON;
    }

    // Set latitude and longitude of both points.
    edge->PointA->ResolvedLocation = LatLong(lat0, lon0);
    edge->PointB->ResolvedLocation = LatLong(lat1, lon1);
    // </snippet112>
}

wstring UriEncode(const wstring& text)
{
    const wchar_t* data = text.c_str();
    size_t length = wcslen(data);
    wstringstream stream;

    for (size_t i = 0; i < length; i++)
    {
        wchar_t current = data[i];
        switch (current)
        {
        case L'!':
            stream << L"%21";
            break;
        case L'*':
            stream << L"%2A";
            break;
        case L'\'':
            stream << L"%27";
            break;
        case L'(':
            stream << L"%28";
            break;
        case L')':
            stream << L"%29";
            break;
        case L';':
            stream << L"%3B";
            break;
        case L':':
            stream << L"%3A";
            break;
        case L'@':
            stream << L"%40";
            break;
        case L'&':
            stream << L"%26";
            break;
        case L'=':
            stream << L"%3D";
            break;
        case L'+':
            stream << L"%2B";
            break;
        case L'$':
            stream << L"%24";
            break;
        case L',':
            stream << L"%2C";
            break;
        case L'/':
            stream << L"%2F";
            break;
        case L'?':
            stream << L"%3F";
            break;
        case L'#':
            stream << L"%23";
            break;
        case L'[':
            stream << L"%5B";
            break;
        case L']':
            stream << L"%5D";
            break;
        case L' ':
            stream << L"%20";
            break;
        case L'\n':
            stream << L"%0D%0A";
            break;
        default:
            stream << current;
            break;
        }
    }

    return stream.str();
}