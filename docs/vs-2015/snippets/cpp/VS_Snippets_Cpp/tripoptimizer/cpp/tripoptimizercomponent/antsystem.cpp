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
#include "AntSystem.h"
#include <assert.h>

using namespace concurrency;
using namespace std;

namespace AntSystem
{
    // Searches the given range for an Edge object that contains the provided
    // Node pointers. This function returns nullptr if no such Edge exists.
    template <typename IterType>
    typename IterType::value_type FindEdge(
        IterType firstEdge, 
        IterType lastEdge, 
        const shared_ptr<Node> pointA, 
        const shared_ptr<Node> pointB) 
    {
        typedef IterType::value_type EdgeType;
        auto result = find_if(firstEdge, lastEdge, [&pointA, &pointB](EdgeType edge)
        {
            return (edge->PointA == pointA && edge->PointB == pointB) ||
                (edge->PointA == pointB && edge->PointB == pointA);
        });
        return result != lastEdge ? (*result) : nullptr;
    } 

    // Computes the length of the provided route.
    double ComputeLengthOfRoute(
        const vector<shared_ptr<Node>>& nodes,    // node collection
        const vector<size_t>& indices,            // indices into node collection
        const vector<shared_ptr<Edge>>& edges)    // edge collection
    {
        double length = 0.0;

        auto index_start = begin(indices);
        auto index_end = index_start + 1;

        while (index_end != end(indices))
        {
            length += FindEdge(begin(edges), end(edges), 
                nodes[*index_start], nodes[*index_end])->TravelDistance;

            index_start++; 
            index_end++;
        }
        return length;
    }

    // Computes a heuristic shortest tour among the provided collection 
    // of nodes.
    double ComputeHeuristicShortestDistance(
        const vector<shared_ptr<Node>>& nodes, 
        const vector<shared_ptr<Edge>>& edges)
    {
        // Hold index of each node that we visit during the tour.
        vector<size_t> heuristicBestRoute;

        //
        // Use the nearest neighbor algorithm to compute the shortest tour.
        // http://en.wikipedia.org/wiki/Nearest_neighbour_algorithm
        //

        size_t S = 0;
        size_t C = 0;
        size_t V = 0;

        list<size_t> visited;
        visited.push_back(C);   

        heuristicBestRoute.push_back(C);

        while (visited.size() < nodes.size())
        {
            double closestDistance = -1.0;

            for (size_t i = 0; i < nodes.size(); ++i) 
            {
                if (find(begin(visited), end(visited), i) == end(visited))
                {
                    double c = FindEdge(begin(edges), end(edges), nodes[C], nodes[i])->TravelDistance;
                    if (closestDistance < 0 || c < closestDistance)
                    {
                        closestDistance = c;
                        V = i;
                    }
                }
            }
            C = V;
            heuristicBestRoute.push_back(C);
            visited.push_back(V);
        }
        heuristicBestRoute.push_back(S);

        // Return the length of the tour.
        return ComputeLengthOfRoute(nodes, heuristicBestRoute, edges);
    }

    // Represents a single ant within an ant colony.
    class Ant
    {
    public:
        explicit Ant(
            const vector<shared_ptr<Node>>& nodes,
            vector<shared_ptr<Edge>>& edges,
            const size_t initialNodeIndex,
            double heuristicShortestDistance,
            double alpha,
            double beta)
            : m_nodes(nodes)
            , m_edges(edges)
            , m_initialNodeIndex(initialNodeIndex)
            , m_lengthOfPath(0)
            , m_heuristicShortestDistance(heuristicShortestDistance)
            , m_alpha(alpha)
            , m_beta(beta)
        {
        }

        // Computes a single tour of the graph.
        void Explore();

        // Retrieves the tour and its length.
        void GetTour(vector<size_t>& tour, double& tourLength) const
        {
            tour = m_route; 
            tourLength = m_lengthOfPath; 
        }

        // Tours the computed route and drops pheromone on each edge.
        void Backtrack();

    private:

        // Moves the ant to the next node in the graph.
        size_t MoveNext(size_t currentNodeIndex);

        // Shared collection of nodes that comprise the graph.
        const vector<shared_ptr<Node>>& m_nodes;

        // Shared collection of edges that connect each pair of nodes.
        vector<shared_ptr<Edge>>& m_edges;

        // The start and end point of each tour.
        const size_t m_initialNodeIndex;

        // The current route.
        vector<size_t> m_route;

        // The length of the current route.
        double m_lengthOfPath;

        // The estimated shortest route.
        double m_heuristicShortestDistance; 

        // Controls the influence of pheromone when choosing the next node.
        double m_alpha;

        // Controls the influence of distance when choosing the next node.
        double m_beta;

        // Disable assignment operator.
        Ant const & operator=(Ant const&);
    };

    // Moves the ant to the next node in the graph.
    size_t Ant::MoveNext(size_t currentNodeIndex)
    {
        size_t candidate = static_cast<size_t>(-1);

        // Compute the total edge pheromone contribution (denominator of formula).
        double totalEdgeContribution = 0.0;
        for (size_t i = 0; i < m_nodes.size(); ++i)
        {
            if (currentNodeIndex == i || find(begin(m_route), end(m_route), i) != end(m_route))
                continue;
            auto edge = FindEdge(begin(m_edges), end(m_edges), m_nodes[currentNodeIndex], m_nodes[i]);
            totalEdgeContribution += (pow(edge->Pheromone, m_alpha) * pow((1.0 / edge->TravelDistance), m_beta));
        }

        // Select next node.
        double bestProbability = 0.0; 
        for (size_t i = 0; i < m_nodes.size(); ++i)
        {
            if (i == currentNodeIndex)
                continue;

            // If we did not yet visit this node...
            if (find(begin(m_route), end(m_route), i) == end(m_route))
            {
                // Get the edge that connects the current node to the candidate node.
                const auto edge = FindEdge(begin(m_edges), end(m_edges), 
                    m_nodes[currentNodeIndex], m_nodes[i]);

                //
                // Choose this node if it is the best fit so far. 

                double top = (pow(edge->Pheromone, m_alpha) * pow((1.0 / edge->TravelDistance), m_beta));
                double p = top / totalEdgeContribution;

                if (p >= bestProbability)
                {
                    bestProbability = p;
                    candidate = i;
                }      
            }
        }

        return candidate;
    }

    // Computes a single tour of the graph.
    void Ant::Explore()
    {   
        // Clear previous route.
        m_route.clear();   

        // Begin at start node.
        m_route.push_back(m_initialNodeIndex);

        // Tour the graph.
        size_t currentNodeIndex = m_initialNodeIndex;
        while (m_route.size() < m_nodes.size())
        {
            currentNodeIndex = MoveNext(currentNodeIndex);
            assert(currentNodeIndex != static_cast<size_t>(-1));
            m_route.push_back(currentNodeIndex);
        }

        // End at start node.
        m_route.push_back(m_initialNodeIndex);

        // Compute length of path.
        m_lengthOfPath = ComputeLengthOfRoute(m_nodes, m_route, m_edges);
    }

    // Tours the computed route and drops pheromone on each edge.
    void Ant::Backtrack()
    {
        // The amount of pheromone is inversely proportional to the 
        // length of the current tour.
        // This means that shorter tours receive a greater amount 
        // of pheromone.
        const double amount = m_heuristicShortestDistance / m_lengthOfPath;

        auto last = end(m_route) - 1;
        for (auto iter = begin(m_route); iter != last; ++iter)
        {
            auto next = iter + 1;

            //
            // Drop pheromone on edge.

            auto edge = FindEdge(begin(m_edges), end(m_edges), 
                m_nodes[*iter], m_nodes[*next]);

            edge->Pheromone += amount;
        }
    }

    // Optimizes the route among the given nodes for the shortest travel distance.
    // This method returns indicies to the provided Node collection.
    vector<size_t> OptimizeRoute(
        vector<shared_ptr<Node>>& nodes, 
        vector<shared_ptr<Edge>>& edges, 
        double alpha, double beta, double rho, 
        unsigned int iterations,    
        cancellation_token cancellationToken,
        function<void(unsigned int)>* progressCallback,
        bool parallel)
    {
        // Compute the estimated shortest tour through the graph.
        double Q = ComputeHeuristicShortestDistance(nodes, edges);

        //
        // Place a small amount of pheromone on each edge.

        // The initial amount of pheromone is inversely proportional to the 
        // number of locations.
        const double initialPheromone = 1.0 / nodes.size();
        for_each(begin(edges), end(edges), [initialPheromone](shared_ptr<AntSystem::Edge> edge)
        {
            edge->Pheromone = initialPheromone;
        });

        //
        // Place an ant on each node.
        vector<Ant> ants;

        for (size_t index = 0; index < nodes.size(); ++index)
        {
            ants.push_back(Ant(nodes, edges, index, Q, alpha, beta));
        }

// <snippet129>
// <snippet136>
        // Perform the simulation several times.
        auto startTime = GetTickCount64();
        for (unsigned int i = 0; i < iterations; ++i)
        {
            // Occasionally check for cancellation.
            auto time = GetTickCount64();
            if (time - startTime > 100) 
            {
                if (cancellationToken.is_canceled())
                {
                    // Return the empty collection.
                    return vector<size_t>();
                }
                startTime = time;
            }
// </snippet136>

            // Send progress. 
            if (progressCallback != nullptr)
            {
                (*progressCallback)(i);
            }

            // 
            // Allow each ant to perform a tour of the graph.
            // Note that this operation can be performed in parallel because each ant acts independently.
            // This step contains no shared data or dependent computations.
            if (parallel)
            {
                parallel_for_each(begin(ants), end(ants), [&](Ant& blitz)
                {
                    blitz.Explore();
                });
            }
            else
            {
                for_each(begin(ants), end(ants), [&](Ant& blitz)
                {
                    blitz.Explore();
                });
            }

            //
            // Evaporate pheromone.
            for_each(begin(edges), end(edges), [rho](shared_ptr<Edge> edge)
            {
                edge->Pheromone *= (1.0 - rho);
            });

            // 
            // Allow each ant to backtrack through the graph and drop pheromone on 
            // each edge.
            //
            // Note that this operation is NOT performed in parallel because 
            // the ants update the pherone value of each edge.
            // Because the backtrack operation is not relatively lengthy, the 
            // overhead that is required to synchronize access to the edges would 
            // likely outweigh any benefits of parallel processing.
            for_each(begin(ants), end(ants), [&](Ant& blitz)
            {
                blitz.Backtrack();
            });
        }
        // </snippet129>

        // Determine the best route.
        double bestCost = 0.0;
        vector<size_t> bestTour;
        for_each(begin(ants), end(ants), [&bestCost, &bestTour, &nodes, &edges](Ant& ant)
        {
            vector<size_t> tour;
            double tourLength;
            ant.GetTour(tour, tourLength);

            if (bestTour.empty() || tourLength < bestCost)
            {
                bestTour = tour;
                bestCost = tourLength;
            }
        });
        return bestTour;
    }
}