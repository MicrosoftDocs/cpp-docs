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
#pragma once

#include "pch.h"
#include "AntSystem.h"

namespace TripOptimizerComponent
{
namespace Details
{
// <snippet118>
    // Defines implementation details for the TripOptimizer class.
    class TripOptimizerImpl 
    {
// </snippet118>
    public:
        // Optimizes a trip as an asynchronous process.
        Windows::Foundation::IAsyncOperationWithProgress<
            Windows::Foundation::Collections::IMap<Platform::String^, 
                Windows::Foundation::Collections::IVector<Platform::String^>^>^, 
            Platform::String^>^ OptimizeTripAsync(
                Windows::Foundation::Collections::IVector<Platform::String^>^ waypoints, 
                Platform::String^ travelMode, 
                Platform::String^ optimize,
                Platform::String^ bingMapsKey, 
                double alpha, double beta, double rho,
                unsigned int iterations, bool parallel);

    private:
        // <snippet134>
        // Holds variables that are used throughout the trip optimization process.
        // We create this stucture so that common parameters can be easily passed among
        // task continuations. 
        struct OptimizeTripParams
        {
            // 
            // The inputs to OptimizeTripAsync
            
            std::vector<std::wstring> Waypoints;
            std::wstring TravelMode;
            std::wstring Optimize;
            std::wstring BingMapsKey;
            double Alpha;
            double Beta;
            double Rho;
            unsigned long Iterations;
            bool Parallel;

            //
            // Timer variables

            // The following times are sent as part of a progress message.
            // The overall time.
            ULONGLONG TotalTime;
            // The overall time and the spent performing HTTP requests.
            ULONGLONG HttpTime;   
            // The time spent performing the optimization algorithm.
            ULONGLONG SimulationTime;

            //
            // Location graph.

            // A collection of Node objects. There is one Node object for each location.
            std::vector<std::shared_ptr<AntSystem::Node>> Nodes;

            // A collection of Edge objects. There are
            // (n * (n - 1) / 2) edges, where n is the number of nodes.
            std::vector<std::shared_ptr<AntSystem::Edge>> Edges;

            // The number of pending HTTP requests for the current batch.
            long RequestsPending;

            // Holds the unresolved locations for the first phase of the optimization process.
            concurrency::concurrent_vector<std::shared_ptr<AntSystem::Node>> UnresolvedLocations;
        };
        // </snippet134>

        // Optimizes a trip given the current state of this object.
        concurrency::task<Windows::Foundation::Collections::IMap<Platform::String^, 
            Windows::Foundation::Collections::IVector<Platform::String^>^>^>
        InternalOptimizeTripAsync(
            std::shared_ptr<OptimizeTripParams> params,
            concurrency::cancellation_token cancellationToken,
            concurrency::progress_reporter<Platform::String^> reporter);

        // Creates the graph of objects that represents the trip topography.
        void CreateGraph(
            const std::vector<std::wstring>& waypoints, 
            std::vector<std::shared_ptr<AntSystem::Node>>& nodes,
            std::vector<std::shared_ptr<AntSystem::Edge>>& edges);

        // Retrieves information about the locations from the Bing Maps location service.
        std::vector<concurrency::task<void>> RetrieveLocationsAsync(
            std::shared_ptr<OptimizeTripParams> params,
            concurrency::cancellation_token cancellationToken,
            concurrency::progress_reporter<Platform::String^> reporter);

        // Loads information for a single location from the provided XML document.
        void ProcessLocation(
            std::shared_ptr<AntSystem::Node> node,
            Windows::Data::Xml::Dom::XmlDocument^ data,
            concurrency::concurrent_vector<std::shared_ptr<AntSystem::Node>>& unresolvedLocations);

        // Retrieves distance information for each pair of locations from the Bing Maps route service.
        std::vector<concurrency::task<void>> RetrieveRoutesAsync(
            std::shared_ptr<OptimizeTripParams> params,
            concurrency::cancellation_token cancellationToken,
            concurrency::progress_reporter<Platform::String^> reporter);

        // Loads route information for a single pair of locations from the provided XML document.
        void ProcessRoute(
            std::shared_ptr<AntSystem::Edge> edge, 
            Windows::Data::Xml::Dom::XmlDocument^ data);
        
    private:
        // Used to cancel the trip optimization task.
        concurrency::cancellation_token_source m_cancellationTokenSource;
    };
}
}