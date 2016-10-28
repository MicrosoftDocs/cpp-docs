// PrimesLibrary.cpp
#include "pch.h"
#include "Primes.h"
#include <atomic>
#include <collection.h>
#include <ppltasks.h>
#include <concurrent_vector.h>

using namespace concurrency;
using namespace std;

using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

using namespace PrimesLibrary;

Primes::Primes()
{
}

// Determines whether the input value is prime. 
bool is_prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; ++i)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

// Adds the numbers that are prime in the provided range  
// to the primes global variable.
IAsyncAction^ Primes::ComputePrimesAsync(int first, int last)
{
    return create_async([this, first, last]
    {
        // Ensure that the input values are in range. 
        if (first < 0 || last < 0)
        {
            throw ref new InvalidArgumentException();
        }
        // Perform the computation in parallel.
        parallel_for(first, last + 1, [this](int n)
        {
            if (is_prime(n))
            {
                // Perhaps store the value somewhere...
            }
        });
    });
}

IAsyncActionWithProgress<double>^ Primes::ComputePrimesWithProgressAsync(int first, int last)
{
    return create_async([first, last](progress_reporter<double> reporter)
    {
        // Ensure that the input values are in range.
        if (first < 0 || last < 0)
        {
            throw ref new InvalidArgumentException();
        }
        // Perform the computation in parallel. 
        atomic<long> operation = 0;
        long range = last - first + 1;
        double lastPercent = 0.0;
        parallel_for(first, last + 1, [&operation, range, &lastPercent, reporter](int n)
        {
            // Report progress message.
            double progress = 100.0 * (++operation) / range;
            if (progress >= lastPercent)
            {
                reporter.report(progress);
                lastPercent += 1.0;
            }

            if (is_prime(n))
            {
                // Perhaps store the value somewhere...
            }
        });
        reporter.report(100.0);
    });
}

IAsyncOperation<IVector<int>^>^ Primes::GetPrimesAsync(int first, int last)
{
    return create_async([this, first, last]() -> IVector<int>^
    {
        // Ensure that the input values are in range. 
        if (first < 0 || last < 0)
        {
            throw ref new InvalidArgumentException();
        }
        // Perform the computation in parallel.
        concurrent_vector<int> primes;
        parallel_for(first, last + 1, [this, &primes](int n)
        {
            // If the value is prime, add it to the global vector.
            if (is_prime(n))
            {
                primes.push_back(n);
            }
        });
        // Sort the results.
        sort(begin(primes), end(primes), less<int>());

        // Copy the results to an IVector object. The IVector 
        // interface makes collections of data available to other 
        // Windows Runtime components.
        auto results = ref new Vector<int>();
        for (int prime : primes)
        {
            results->Append(prime);
        }
        return results;
    });
}

IAsyncOperationWithProgress<IVector<int>^, double>^ Primes::GetPrimesWithProgressAsync(int first, int last)
{
    return create_async([this, first, last](progress_reporter<double> reporter) -> IVector<int>^
    {
        // Ensure that the input values are in range.
        if (first < 0 || last < 0)
        {
            throw ref new InvalidArgumentException();
        }
        // Perform the computation in parallel.
        concurrent_vector<int> primes;
        long operation = 0;
        long range = last - first + 1;
        double lastPercent = 0.0;
        parallel_for(first, last + 1, [&primes, &operation, range, &lastPercent, reporter](int n)
        {
            // Report progress message.
            double progress = 100.0 * (++operation) / range;
            if (progress >= lastPercent)
            {
                reporter.report(progress);
                lastPercent += 1.0;
            }

            // If the value is prime, add it to the local vector. 
            if (is_prime(n))
            {
                primes.push_back(n);
            }
        });
        reporter.report(100.0);

        // Sort the results.
        sort(begin(primes), end(primes), less<int>());

        // Copy the results to an IVector object. The IVector 
        // interface makes collections of data available to other 
        // Windows Runtime components.
        auto results = ref new Vector<int>();
        for (int prime : primes)
        {
            results->Append(prime);
        }
        return results;
    });
}