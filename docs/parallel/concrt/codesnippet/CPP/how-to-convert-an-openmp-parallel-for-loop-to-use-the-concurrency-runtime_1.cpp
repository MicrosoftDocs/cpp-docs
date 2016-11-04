// concrt-omp-count-primes.cpp
// compile with: /EHsc /openmp
#include <ppl.h>
#include <random>
#include <array>
#include <iostream>

using namespace concurrency;
using namespace std;

// Determines whether the input value is prime.
bool is_prime(int n)
{
   if (n < 2)
      return false;
   for (int i = 2; i < n; ++i)
   {
      if ((n % i) == 0)
         return false;
   }
   return true;
}

// Uses OpenMP to compute the count of prime numbers in an array.
void omp_count_primes(int* a, size_t size)
{
   if (size == 0)
      return;

   size_t count = 0;
   #pragma omp parallel for
      for (int i = 0; i < static_cast<int>(size); ++i)
      {
         if (is_prime(a[i])) {
            #pragma omp atomic
               ++count;
         }
      }

   wcout << L"found " << count 
         << L" prime numbers." << endl;
}

// Uses the Concurrency Runtime to compute the count of prime numbers in an array.
void concrt_count_primes(int* a, size_t size)
{
   if (size == 0)
      return;

   combinable<size_t> counts;
   parallel_for<size_t>(0, size, [&](size_t i) 
   {
      if (is_prime(a[i])) {
         counts.local()++;
      }
   });

   wcout << L"found " << counts.combine(plus<size_t>()) 
         << L" prime numbers." << endl;
}

int wmain()
{
   // The length of the array.
   const size_t size = 1000000;
   
   // Create an array and initialize it with random values.
   int* a = new int[size];
   
   mt19937 gen(42);
   for (size_t i = 0; i < size; ++i) {
      a[i] = gen();
   }

   // Count prime numbers by using OpenMP and the Concurrency Runtime.

   wcout << L"Using OpenMP..." << endl;
   omp_count_primes(a, size);

   wcout << L"Using the Concurrency Runtime..." << endl;
   concrt_count_primes(a, size);

   delete[] a;
}