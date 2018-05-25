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

using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Platform;
using namespace std;
using namespace TripOptimizerComponent;
using namespace TripOptimizerComponent::Details;

// <snippet104>
TripOptimizer::TripOptimizer()
    : m_impl(new TripOptimizerImpl())
{   
}
// </snippet104>

TripOptimizer::~TripOptimizer() 
{
}

// <snippet101>
// Optimizes a trip as an asynchronous process.
IAsyncOperationWithProgress<IMap<String^, IVector<String^>^>^, String^>^ 
TripOptimizer::OptimizeTripAsync(
    IVector<String^>^ waypoints, 
    String^ travelMode, 
    String^ optimize,
    String^ bingMapsKey, 
    double alpha, double beta, double rho,
    unsigned int iterations, bool parallel)
{
    // Forward to implementation.    
    return m_impl->OptimizeTripAsync(waypoints,travelMode, optimize, bingMapsKey,
        alpha, beta, rho, iterations, parallel);
}
// </snippet101>