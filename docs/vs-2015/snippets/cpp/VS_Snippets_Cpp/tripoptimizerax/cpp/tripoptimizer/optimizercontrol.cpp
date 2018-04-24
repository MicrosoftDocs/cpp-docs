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
// OptimizerControl.cpp : Implementation of COptimizerControl
#include "stdafx.h"
#include "OptimizerControl.h"
#include "XmlReader.h"
#include "HttpRequest.h"
#include "AntSystem.h"

using namespace Concurrency;
using namespace std;
using namespace AntSystem;
using namespace Utils;

//
// Forward declarations.

// URI encodes the provided text.
wstring UriEncode(const wstring& text);

// Writes formatted data to a string.
template <size_t MaxLength>
_bstr_t __cdecl FormatString(LPCWSTR pszFormat, ...);

// Creates an error message string from the provided HRESULT.
_bstr_t __cdecl FormatErrorString(HRESULT resultCode, LPCSTR file, long line);

// Converts the provided HTTP status code to a human-readable string.
_bstr_t GetHttpStatusString(int statusCode);

// Converts the provided JavaScript array to a C++ vector.
HRESULT JsToNativeArray(CComPtr<IDispatch> disp, std::vector<std::wstring>& items);

// An exception-safe wrapper class that manages the lifetime 
// of the COM library in a given scope.
class CoInitializer
{
public:
   explicit CoInitializer(DWORD dwCoInit = COINIT_APARTMENTTHREADED)
      : _coinitialized(false)
   {
      // Initialize the COM library on the current thread.
      HRESULT hr = CoInitializeEx(NULL, dwCoInit);
      if (FAILED(hr))
         throw hr;
      _coinitialized = true;
   }
   ~CoInitializer()
   {
      // Free the COM library.
      if (_coinitialized)
         CoUninitialize();
   }
private:
   // Flags whether COM was properly initialized.
   bool _coinitialized;

   // Hide copy constructor and assignment operator.
   CoInitializer(const CoInitializer&);
   CoInitializer& operator=(const CoInitializer&);
};

//
// COptimizerControl
//

HRESULT COptimizerControl::FinalConstruct()
{   
   // Create the hidden message window so that the control can send messages to the 
   // UI thread from any other thread.
   RECT rect = { 0, 0, 0, 0 };
   m_hwndMessage = Create(HWND_MESSAGE, rect, L"OptimizerControlWindow", WS_POPUP);
   if (m_hwndMessage == NULL) {
      return HRESULT_FROM_WIN32(GetLastError());
   }

   return S_OK;
}

void COptimizerControl::FinalRelease()
{
    // Cancel the operation if it is in progress.
    CancelTripTask();
    m_cancellationTask.wait();
   
    // Destroy the message window.
    if (m_hwndMessage != NULL) {
        ::DestroyWindow(m_hwndMessage);
    }
}

// Begins a background task that optimizes a trip for shortest distance.
STDMETHODIMP COptimizerControl::OptimizeTripAsync(VARIANT* waypoints, BSTR travelMode, 
   BSTR optimize, BSTR bingMapsKey, DOUBLE alpha, DOUBLE beta, DOUBLE rho, 
   ULONG iterations, VARIANT_BOOL parallel)
{
    // Ensure that waypoints represents an IDispatch object.
    if (waypoints->vt != VT_DISPATCH)
    {
        return E_INVALIDARG;
    }

    // Get locations from JavaScript array.
    CComPtr<IDispatch> disp(waypoints->pdispVal);
    vector<wstring> locations;
    HRESULT hr = JsToNativeArray(disp, locations);
    if (FAILED(hr))
    {
        asend(m_errorMessage, FormatErrorString(hr, __FILE__, __LINE__));
        ::PostMessage(m_hwndMessage, WM_TRIP_ERROR, 0L, 0L);
        return S_OK;
    }
      
    const wstring _travelMode(travelMode);
    const wstring _optimize(optimize);
    const wstring _bingMapsKey(UriEncode(bingMapsKey));

    // Perform the trip optimization in the background.
    m_tripTask.run([=,this]
    {
        // Perform the trip optimization.
        OptimizeTrip(locations, _travelMode, _optimize, _bingMapsKey, 
            alpha, beta, rho, iterations, parallel == VARIANT_FALSE ? false : true);
    });

    return S_OK;
}

// Cancels the current optimization task.
STDMETHODIMP COptimizerControl::CancelAsync()
{   
    // Perform cancellation in the background.
    m_cancellationTask.run([this] 
    {      
        // Report progress.
        asend(m_progressMessage, _bstr_t(L"Canceling..."));
        ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);

        // Cancel the trip task.
        CancelTripTask();
      
        // Inform the host that cancellation has completed.
        ::PostMessage(m_hwndMessage, WM_TRIP_CANCELED, 0L, 0L);
  
        // Report progress.
        asend(m_progressMessage, _bstr_t(L"Operation canceled."));
        ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
    });
    return S_OK;
}

// Optimizes a trip given the provided parameters.
void COptimizerControl::OptimizeTrip(
    vector<wstring> waypoints, 
    wstring travelMode, 
    wstring optimize, 
    wstring bingMapsKey, 
    double alpha, double beta, double rho, 
    unsigned long iterations, bool parallel)
{
    // The following times are sent as part of a progress message.

    // The overall time.
    ULONGLONG totalTime;
    // The overall time and the spent performing HTTP requests.
    ULONGLONG httpTime;   
    // The time spent performing the optimization algorithm.
    ULONGLONG simulationTime;
            
    totalTime = GetTickCount64();

    // A collection of Node objects. There is one Node object for each location.
    vector<shared_ptr<Node>> nodes;

    // A collection of Edge objects. There are
    // (n * (n - 1) / 2) edges, where n is the number of nodes.
    vector<shared_ptr<Edge>> edges;
        
    // Create the graph.
    CreateGraph(waypoints, nodes, edges);
    
    //
    // Phase 1: Retrieve the location of each waypoint.
    //

    httpTime = GetTickCount64();

    m_unresolvedLocations.clear();
    RetrieveLocations(nodes, bingMapsKey);

    // If there are unresolved locations, return them to the caller.
    if (m_unresolvedLocations.size() > 0)
    {
        ::PostMessage(m_hwndMessage, WM_TRIP_LOCATIONS, 0L, 0L);
        return;
    }    

    //
    // Phase 2: Retrieve route information for each pair of locations.
    //

    // Return if cancellation has occurred.
    if (is_current_task_group_canceling()) {
        return;
    }

    RetrieveRoutes(edges, travelMode, optimize, bingMapsKey);

    // Record the elapsed HTTP time.
    httpTime = GetTickCount64() - httpTime;

    //
    // Phase 3: Run the optimization algorithm.
    //

    // Return if cancellation has occurred.
    if (is_current_task_group_canceling()) {
        return;
    }

    // Report progress.   
    asend(m_progressMessage, _bstr_t(L"Optimizing route (0% complete)..."));
    ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);

    // Record the start time.
    simulationTime = GetTickCount64();

    // Create a callback function that occasionally posts the progress of the operation.
    DWORD lastTime = GetTickCount();
    function<void(unsigned int)> progressCallback =
        [this, &lastTime, &iterations](unsigned int iteration) {
            // Post a progress message every 500 ms.
            DWORD now = GetTickCount();
            if (now - lastTime >= 500) {
            LPCWSTR format = L"Optimizing route (%d%% complete)...";
            long progress = 100 - static_cast<long>(100.0 * (iterations - iteration) / iterations);
            asend(m_progressMessage, FormatString<256>(format, progress));
            ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
            lastTime = now;
            }
        };

   // Run the simulation.
   vector<size_t> routeIndices = AntSystem::OptimizeRoute(
      nodes, edges, alpha, beta, rho, iterations, 
      &progressCallback, parallel);

   // Record the elapsed time.
   simulationTime = GetTickCount64() - simulationTime;

   // Return if the task was canceled.
   if (Concurrency::is_current_task_group_canceling()) {      
      return;
   }

   // Create the final route.
   // The optimizer returns a route that has an arbitrary starting point.
   // For example, the route might look like:
   // A -> B -> C -> D -> E -> A
   // If our starting point was D, we want the route to look like:
   // D -> E -> A -> B -> C -> D
   routeIndices.pop_back();
   while (routeIndices.front() != 0) {
      routeIndices.push_back(routeIndices.front());
      routeIndices.erase(begin(routeIndices));
   }
   routeIndices.push_back(routeIndices.front());

   // Create the arrays that we will post to the host.   
   m_optimizedRoute.Destroy();
   m_optimizedRoute.Create(routeIndices.size(), 0);

   m_optimizedRouteDisplayNames.Destroy();
   m_optimizedRouteDisplayNames.Create(routeIndices.size(), 0);

   // Fill the arrays.
   size_t i = 0;
   for_each(begin(routeIndices), end(routeIndices), 
    [&i, &nodes, this](size_t index) {
      const auto node = nodes[index];
     
      _variant_t v;

      // The location is the latitude and longitude of the waypoint.
      // For example, "47.620056,-122.349261"
      _bstr_t location = FormatString<256>(L"%f,%f", node->ResolvedLocation.Latitude, 
         node->ResolvedLocation.Longitude);
      
      v = location;
      m_optimizedRoute.SetAt(i, v);

      // The display name if the resolved name of the waypoint.
      // For example, "Space Needle, WA"
      v = node->ResolvedName;
      m_optimizedRouteDisplayNames.SetAt(i, v);

      ++i;
   });

   // Post the route arrays to the host.
   ::PostMessage(m_hwndMessage, WM_TRIP_ROUTE, 0L, 0L); 

   // Compute the overall elapsed time.   
   totalTime = GetTickCount64() - totalTime;
   
   // Post a progress message.
   // This message contains 1) the overall elapsed time, 2) the time spent performing the async
   // HTTP requests, and 3) the time it took to run the simulation.
   LPCWSTR format = L"Loading Map...<br>Elapsed time: %dms (total); %dms (HTTP); %dms (simulation).";
   asend(m_progressMessage, FormatString<256>(format, 
      static_cast<DWORD>(totalTime), static_cast<DWORD>(httpTime), static_cast<DWORD>(simulationTime)));
   ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
}

// Creates the graph of objects that represents the trip topography.
void COptimizerControl::CreateGraph(
    vector<wstring> waypoints, 
    vector<shared_ptr<Node>>& nodes,
    vector<shared_ptr<Edge>>& edges)
{    
    //
    // Create a Node object for each waypoint in the array.
    // Each element of the waypoints array contains a string that represents 
    // a location (for example, "Space Needle, WA").
    //
       
    for_each(begin(waypoints), end(waypoints), [&nodes](const wstring& waypoint) {
        // Add a Node object to the collection.
        nodes.push_back(make_shared<Node>(waypoint.c_str()));
    });
    
    //
    // Create edges that form a fully-connected graph.
    //

    // Connect every node to every other node.
    for (auto iter = begin(nodes); iter != end(nodes); ++iter) { 

        auto node1 = *iter;
        for_each(iter + 1, end(nodes), [this, &node1, &edges](shared_ptr<Node> node2) { 
            // Create edge pair.             
            edges.push_back(make_shared<Edge>(node1, node2));
        });
    }
}

// Retrieves information about the locations from the Bing Maps location service.
void COptimizerControl::RetrieveLocations(
    vector<shared_ptr<Node>>& nodes,   
    const wstring& bingMapsKey)
{       
    // Report progress.    
    asend(m_progressMessage, _bstr_t(L"Retrieving locations (0% complete)..."));
    ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
   
    // Holds the background HTTP requests.
    task_group tasks;
        
    // Create HTTP requests for location information.
    long requestsPending = nodes.size(); // Used to report progress.
    for (auto iter = begin(nodes); iter != end(nodes); iter++) {
               
        auto node = *iter;

        // Start the download.
        tasks.run([this, node, &nodes, &requestsPending, &bingMapsKey]()
        {
            // Don't request the document if the operation has been cancelled.
            if (is_current_task_group_canceling()) {
                return;
            }

            // Ensure that COM is initialized and freed on this thread.
            CoInitializer coinit;

            wstringstream uri;
            uri << L"http://dev.virtualearth.net/REST/v1/Locations?q=" 
                << UriEncode(node->InputName.GetBSTR())
                << L"&o=xml&key=" << bingMapsKey;

            auto stream = HttpRequest::Download(uri.str());

            // Don't process the document if the operation has been cancelled.
            if (is_current_task_group_canceling()) {
                return;
            }

            // Report progress.
            LPCWSTR format = L"Retrieving locations (%d%% complete)...";
            long progress = static_cast<long>(100.0 * (nodes.size() - requestsPending) / nodes.size());
            asend(m_progressMessage, FormatString<256>(format, progress));
            ::PostMessageW(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
                       
            // Fill in location information.
            ProcessLocation(node, stream);
                        
            InterlockedDecrement(&requestsPending);
        });
    }
     
    // Wait for all tasks to complete.
    try
    {
        tasks.wait();
    }
    catch (HRESULT hr)
    {
        asend(m_errorMessage, FormatErrorString(hr, __FILE__, __LINE__));
        ::PostMessage(m_hwndMessage, WM_TRIP_ERROR, 0L, 0L);
        return;
    }
          
    // Report progress.
    asend(m_progressMessage, _bstr_t(L"Retrieving locations (100% complete)..."));
    ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
}

// Loads information for a single location from the provided XML document.
void COptimizerControl::ProcessLocation(
    shared_ptr<Node> node, 
    CComPtr<IStream> stream)
{    
   _bstr_t name; // Holds the name of the location.

   _bstr_t temp; // Temporary string to hold numeric data.
   double latitude  = 0.0,  // Holds the latitude and longitude of the location.
          longitude = 0.0;   
   
   // Lambda function to help deal with errors.
   auto fail = [this](HRESULT hr, LPCSTR file, long line) { 
      // Report error to host.
      asend(m_errorMessage, FormatErrorString(hr, file, line));
      ::PostMessage(m_hwndMessage, WM_TRIP_ERROR, 0L, 0L);
   };

   HRESULT hr;

   // Create XML reader.
   CComPtr<IXmlReader> pReader;
   if (FAILED(hr = XmlReader::Create(stream, &pReader))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }

   // Move to response code.
   // Report an error and return if the status code is 
   // not 200 (OK).
   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"StatusCode"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   int statusCode = _wtoi(temp.GetBSTR());
   if (statusCode != 200)
   {
      _bstr_t statusString = GetHttpStatusString(statusCode);

      // Report the error to the host.
      LPCWSTR format = L"Received error code %d (%s) from the Bing Maps location service.";
      asend(m_errorMessage, 
         FormatString<256>(format, statusCode, statusString.GetBSTR()));
      ::PostMessage(m_hwndMessage, WM_TRIP_ERROR, 0L, 0L);
      return;
   }

   //
   // Read the number of total resources.
   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"EstimatedTotal"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   int estimatedTotal = _wtoi(temp);

   // Move to Resources node.
   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Resources"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }

   // Populate the Node object with location information.
   for (int i = 0; i < estimatedTotal; ++i)
   {
      //
      // Read name.
      if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Name"))) {
         fail(hr, __FILE__, __LINE__);
         return;
      }
      if (FAILED(hr = XmlReader::ReadValue(pReader, name))) {
         fail(hr, __FILE__, __LINE__);
         return;
      }

      //
      // Read latitude and longitude.
      if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Latitude"))) {
         fail(hr, __FILE__, __LINE__);
         return;
      }
      if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
         fail(hr, __FILE__, __LINE__);
         return;
      }
      latitude = _wtof(temp);
      if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Longitude"))) {
         fail(hr, __FILE__, __LINE__);
         return;
      }
      if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
         fail(hr, __FILE__, __LINE__);
         return;
      }
      longitude = _wtof(temp);

      //
      // Set the resolved name if the name matches the user's input.
      if (name == node->InputName)
      {
         node->ResolvedName = name;
         node->ResolvedLocation = AntSystem::LatLong(latitude, longitude);
      }
      // Add the name to the list of possible names.
      // If the same name occurs multiple times, ensure that we
      // record it one time only.
      if (find(begin(node->Names), end(node->Names), name) 
         == end(node->Names))
      {
         node->Names.push_back(name);
         node->Locations.push_back(AntSystem::LatLong(latitude, longitude));
      }
   }

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
      m_unresolvedLocations.push_back(node);
   }    
}

// Retrieves distance information for each pair of locations from the Bing Maps route service.
void COptimizerControl::RetrieveRoutes(
    vector<shared_ptr<Edge>>& edges,
    const wstring& travelMode,
    const wstring& optimize,
    const wstring& bingMapsKey)
{
    // Report progress.
    asend(m_progressMessage, _bstr_t(L"Retrieving routes (0% complete)..."));
    ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);

    // Holds the background HTTP requests.
    task_group tasks;
        
    // Implementation note:
    // We assume that the route from A -> B is the same *distance* as 
    // the route from B -> A. Although this enables us to make fewer HTTP route requests,
    // the final route might be slightly sub-optimal if the trip contains legs with 
    // one-way streets or the distance from A -> B differs from the distance from B -> A.
    // (However, the end route will always contain the correct turn information.)

    // Create HTTP requests for location information.
    long requestsPending = edges.size(); // Used to report progress.    
    for (auto iter = begin(edges); iter != end(edges); iter++) {

        auto edge = *iter;

        // Start the download.
        tasks.run([this, edge, &edges, &requestsPending, &travelMode, &optimize, &bingMapsKey] ()
        {
            // Ensure that COM is initialized and freed on this thread.
            CoInitializer coinit;

            // Create request URL.
            LatLong pointA = edge->PointA->ResolvedLocation;
            LatLong pointB = edge->PointB->ResolvedLocation;
                
            wstringstream uri;
            uri << L"http://dev.virtualearth.net/REST/v1/Routes/" << travelMode
                << L"?wp.0=" << pointA.Latitude << L"," << pointA.Longitude
                << L"&wp.1=" << pointB.Latitude << L"," << pointB.Longitude
                << L"&optmz=" << optimize
                << L"&o=xml"
                << L"&key=" << bingMapsKey;

            auto stream = HttpRequest::Download(uri.str());

            // Don't process the document if the operation has been cancelled.
            if (is_current_task_group_canceling()) {
                return;
            }

            // Report progress.
            LPCWSTR format = L"Retrieving routes (%d%% complete)...";
            long progress = static_cast<long>(100.0 * (edges.size() - requestsPending) / edges.size());
            asend(m_progressMessage, FormatString<256>(format, progress));
            ::PostMessageW(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
                                    
            // Fill in route information.
            ProcessRoute(edge, stream);
            
            InterlockedDecrement(&requestsPending);
        });
    }
     
    // Wait for all tasks to complete.
    try
    {
        tasks.wait();
    }
    catch (HRESULT hr)
    {
        asend(m_errorMessage, FormatErrorString(hr, __FILE__, __LINE__));
        ::PostMessage(m_hwndMessage, WM_TRIP_ERROR, 0L, 0L);
        return;
    }

    // Report progress.
    asend(m_progressMessage, _bstr_t(L"Retrieving routes (100% complete)..."));
    ::PostMessage(m_hwndMessage, WM_TRIP_PROGRESS, 0L, 0L);
}

// Loads route information for a single pair of locations from the provided XML document.
void COptimizerControl::ProcessRoute(
    shared_ptr<Edge> edge, 
    ATL::CComPtr<IStream> stream)
{     
   _bstr_t temp; // Temporary string to hold numeric data.
   double travelDistance = 0.0; // Holds the travel distance between the points.

   // Lambda function to help deal with errors.
   auto fail = [this](HRESULT hr, LPCSTR file, long line) { 
      // Report error to host.
      asend(m_errorMessage, FormatErrorString(hr, file, line));
      ::PostMessage(m_hwndMessage, WM_TRIP_ERROR, 0L, 0L);
   };

   HRESULT hr;

   // Create XML reader.
   CComPtr<IXmlReader> pReader;
   if (FAILED(hr = XmlReader::Create(stream, &pReader))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
  
   // Move to response code.
   // Report an error and return if the status code is 
   // not 200 (OK).
   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"StatusCode"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   int statusCode = _wtoi(temp.GetBSTR());
   if (statusCode != 200)
   {
      _bstr_t statusString = GetHttpStatusString(statusCode);

      // Report the error to the host.
      LPCWSTR format = L"Received error code %d (%s) from the Bing Maps route service.";
      asend(m_errorMessage, 
         FormatString<256>(format, statusCode, statusString.GetBSTR()));
      ::PostMessage(m_hwndMessage, WM_TRIP_ERROR, 0L, 0L);
      return;
   }
   
   // 
   // Read travel distance.
   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"TravelDistance"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   travelDistance = _wtof(temp.GetBSTR());

   //
   // Read latitude and longitude of both start and end locations.
   //

   // Start
   double lat0, lon0;   
   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Latitude"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   lat0 = _wtof(temp.GetBSTR());

   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Longitude"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   lon0 = _wtof(temp.GetBSTR());
   AntSystem::LatLong latLong0 = AntSystem::LatLong(lat0, lon0);
   
   // End
   double lat1, lon1;
   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Latitude"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   lat1 = _wtof(temp.GetBSTR());

   if (FAILED(hr = XmlReader::MoveToElement(pReader, L"Longitude"))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   if (FAILED(hr = XmlReader::ReadValue(pReader, temp))) {
      fail(hr, __FILE__, __LINE__);
      return;
   }
   lon1 = _wtof(temp.GetBSTR());
   AntSystem::LatLong latLong1(lat1, lon1);

   //
   // Update edge.

   // Set travel distance.
   edge->TravelDistance = travelDistance;

   // Ensure that the distance is > 0.
   if (edge->TravelDistance < FLT_EPSILON) {
       edge->TravelDistance = FLT_EPSILON;
   }

   // Set latitude and longitude of both points.
   edge->PointA->ResolvedLocation = AntSystem::LatLong(lat0, lon0);
   edge->PointB->ResolvedLocation = AntSystem::LatLong(lat1, lon1);
}

void COptimizerControl::CancelTripTask()
{
   // Cancel the task_group object and wait for cancellation to complete.
   m_tripTask.cancel();
   m_tripTask.wait();
}

// URI encodes the provided text.
wstring UriEncode(const wstring& text) {
    const wchar_t *data = text.c_str();
    int length = wcslen(data);
    wstringstream stream;

    stream.clear();

    for (int i = 0; i < length; i++)
    {
        wchar_t current = data[i];
        switch (current) {
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

// Writes formatted data to a string.
template <size_t MaxLength>
_bstr_t __cdecl FormatString(LPCWSTR pszFormat, ...)
{
   va_list args; 
   va_start(args, pszFormat); 

   WCHAR pszDest[MaxLength]; 
   size_t cbDest = MaxLength * sizeof(WCHAR);
      
   HRESULT hr = StringCchVPrintf(pszDest, cbDest, pszFormat, args);
   va_end(args);

   if (SUCCEEDED(hr))
   {
      return _bstr_t(pszDest);
   }
   return _bstr_t();
}

// Creates an error message string from the provided HRESULT.
_bstr_t __cdecl FormatErrorString(HRESULT resultCode, LPCSTR file, long line)
{
   const size_t MaxLength = 256;

   // Convert filename to wide.
   size_t len;
   WCHAR pszFile[MaxLength];
   wmemset(pszFile, 0, MaxLength);
   if (SUCCEEDED(StringCchLengthA(file, MaxLength, &len)))
   {
      MultiByteToWideChar(CP_ACP, NULL, file, -1, pszFile, len);
   }

   // Create error string.
   WCHAR pszDest[MaxLength]; 
   size_t cbDest = MaxLength * sizeof(WCHAR);
      
   HRESULT hr = StringCchPrintf(pszDest, cbDest, 
      L"An error occured in file %s near line %d.\nError code was 0x%08.8lx.", 
      pszFile, line, resultCode);
  
   if (SUCCEEDED(hr))
   {
      return _bstr_t(pszDest);
   }
   return _bstr_t();
}

// Converts the provided HTTP status code to a human-readable string.
_bstr_t GetHttpStatusString(int statusCode)
{   
   switch (statusCode)
   {
      // Informational 
      case 100: return L"Continue";
      case 101: return L"Switching Protocols";
      // Successful
      case 200: return L"OK";
      case 201: return L"Created";
      case 202: return L"Accepted";
      case 203: return L"Non-Authoritative Information";
      case 204: return L"No Content";
      case 205: return L"Reset Content";
      case 206: return L"Partial Content";
      // Redirection
      case 300: return L"Multiple Choices";
      case 301: return L"Moved Permanently";
      case 302: return L"Found";
      case 303: return L"See Other";
      case 304: return L"Not Modified";
      case 305: return L"Use Proxy";
      case 307: return L"Temporary Redirect";
      // Client Error
      case 400: return L"Bad Request";
      case 401: return L"Unauthorized";
      case 402: return L"Payment Required";
      case 403: return L"Forbidden";
      case 404: return L"Not Found";
      case 405: return L"Method Not Allowed";
      case 406: return L"Not Acceptable";
      case 407: return L"Proxy Authentication Required";
      case 408: return L"Request Timeout";
      case 409: return L"Conflict";
      case 410: return L"Gone";
      case 411: return L"Length Required";
      case 412: return L"Precondition Failed";
      case 413: return L"Request Entity Too Large";
      case 414: return L"Request-URI Too Long";
      case 415: return L"Unsupported Media Type";
      case 416: return L"Requested Range Not Satisfiable";
      case 417: return L"Expectation Failed";   
      // Server Error
      case 500: return L"Internal Server Error";
      case 501: return L"Not Implemented";
      case 502: return L"Bad Gateway";
      case 503: return L"Service Unavailable";
      case 504: return L"Gateway Timeout";
      case 505: return L"HTTP Version Not Supported";      
      default:  return L"Unknown";
   }
}

// Converts the provided JavaScript array to a C++ vector.
HRESULT JsToNativeArray(CComPtr<IDispatch> disp, vector<wstring>& items) 
{
   LPOLESTR lengthName = L"length"; 
   DISPID dispidLength = 0; 
   HRESULT hr = disp->GetIDsOfNames(IID_NULL, &lengthName, 1, 
      LOCALE_USER_DEFAULT, &dispidLength);
   if (FAILED(hr)) 
   {
      return hr;
   }
   
   // Use the DISPID of length parameter to get the number of elements.
   CComVariant varLength; 
   DISPPARAMS dispParams = {0}; 
   hr = disp->Invoke(dispidLength, IID_NULL, LOCALE_USER_DEFAULT, 
      DISPATCH_PROPERTYGET, &dispParams, &varLength, NULL, NULL); 
   if (FAILED(hr))
   {
      return hr;
   }
   hr = varLength.ChangeType(VT_I4);
   if (FAILED(hr))
   {
      return hr;
   }
   int length = varLength.intVal;
   wchar_t buf[20];
   for (int idx = 0 ; idx < length ; ++idx) 
   { 
      // Get DISPID of item[i] from array object.
      DISPID dispidIndex = 0; 
      _itow_s(idx, buf, 20, 10);
      LPOLESTR pIndex = reinterpret_cast<LPOLESTR>(const_cast<WCHAR *>(buf));
      hr = disp->GetIDsOfNames(IID_NULL, &pIndex, 1, 
         LOCALE_USER_DEFAULT, &dispidIndex); 
      if (FAILED(hr)) 
         continue; 

      CComVariant varItem; 
      hr = disp->Invoke(dispidIndex, IID_NULL, LOCALE_USER_DEFAULT, 
         DISPATCH_PROPERTYGET, &dispParams, &varItem, NULL, NULL); 
      if (FAILED(hr)) 
         continue; 

      if (varItem.vt == VT_BSTR)
      {
         items.push_back(varItem.bstrVal);
      }      
   }
   
   return hr;
}
