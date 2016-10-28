#pragma once

namespace PrimesLibrary
{
    public ref class Primes sealed
    {
    public:
        Primes();

        // Computes the numbers that are prime in the provided range and stores them in an internal variable.
        Windows::Foundation::IAsyncAction^ ComputePrimesAsync(int first, int last);

        // Computes the numbers that are prime in the provided range and stores them in an internal variable.
        // This version also reports progress messages.
        Windows::Foundation::IAsyncActionWithProgress<double>^ ComputePrimesWithProgressAsync(int first, int last);

        // Gets the numbers that are prime in the provided range.
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<int>^>^ GetPrimesAsync(int first, int last);

        // Gets the numbers that are prime in the provided range. This version also reports progress messages.
        Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVector<int>^, double>^ GetPrimesWithProgressAsync(int first, int last);
    };
}