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

namespace AntSystem 
{
    // <snippet125>
    // Represents the latitude and longitude of a single point on a map.
    struct LatLong
    {
        explicit LatLong(double latitude, double longitude) 
            : Latitude(latitude)
            , Longitude(longitude)
        {
        }

        // The coordinates of the location.
        double Latitude;
        double Longitude;
    };
    // </snippet125>

    // <snippet126>
    // Represents a node in a graph.
    struct Node 
    {
        explicit Node(const std::wstring& inputName)
            : InputName(inputName)
            , ResolvedLocation(0.0, 0.0)
        {
        }

        // The name of the location as provided by the user.
        std::wstring InputName;
        // The resolved latitude and longitude of the location as provided by the 
        // Bing Maps location service.
        LatLong ResolvedLocation;
        // The resolved name of the location as provided by the 
        // Bing Maps location service.
        std::wstring ResolvedName;

        //
        // Parallel arrays of string names and latitude, longitude pairs that represent
        // all possible resolved locations for the current input name.
        // For example, if the input name is "Redmond", the Names array might contain
        // "Redmond, WA", "Redmond, OR", "Redmond, UT", and "Redmond, Australia".
        // The Locations array would contain the corresponding latitude and longitude
        // for each location.
        std::vector<std::wstring> Names;
        std::vector<LatLong> Locations;
    };
    // </snippet126>

    // <snippet127>
    // Represents an edge in a graph of Node objects.
    // An Edge object connects two nodes and holds the travel distance between 
    // those nodes. An Edge object also holds the amount of pheromone that 
    // exists on that edge.
    struct Edge
    {
        explicit Edge(std::shared_ptr<Node> pointA, std::shared_ptr<Node> pointB)
            : PointA(pointA)
            , PointB(pointB)
            , Pheromone(0.0)
            , TravelDistance(-1.0)
        {
        }

        // The start node.
        std::shared_ptr<Node> PointA;
        // The end node.
        std::shared_ptr<Node> PointB;
        // The amount of pheromone on the edge.
        double Pheromone;
        // The distance from the start node to the end node.
        double TravelDistance;
    };
    // </snippet127>

    // <snippet128>
    // Optimizes the route among the given nodes for the shortest travel distance.
    // This method returns indicies to the provided Node collection.
    std::vector<size_t> OptimizeRoute(
        std::vector<std::shared_ptr<Node>>& nodes,
        std::vector<std::shared_ptr<Edge>>& edges,
        double alpha,
        double beta,
        double rho,
        unsigned int iterations,
        Concurrency::cancellation_token cancellationToken,
        std::function<void(unsigned int)>* progressCallback = nullptr,
        bool parallel = true);
    // </snippet128>
}