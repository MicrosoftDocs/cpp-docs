// parallel-count-primes.cpp
// compile with: /EHsc
#include <windows.h>
#include <ppl.h>
#include <iostream>
#include <algorithm>
#include <array>

using namespace concurrency;
using namespace std;

// Calls the provided work function and returns the number of milliseconds 
// that it takes to call that function.
template <class Function>
__int64 time_call(Function&& f)
{
   __int64 begin = GetTickCount();
   f();
   return GetTickCount() - begin;
}

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

int wmain()
{
   // Create an array object that contains 200000 integers.
   array<int, 200000> a;

   // Initialize the array such that a[i] == i.
   int n = 0;
   generate(begin(a), end(a), [&] {
      return n++;
   });

   LONG prime_count;
   __int64 elapsed;

   // Use the for_each algorithm to count the number of prime numbers
   // in the array serially.
   prime_count = 0L;
   elapsed = time_call([&] {
      for_each (begin(a), end(a), [&](int n ) { 
         if (is_prime(n))
            ++prime_count;
      });
   });
   wcout << L"serial version: " << endl
         << L"found " << prime_count << L" prime numbers" << endl
         << L"took " << elapsed << L" ms" << endl << endl;

   // Use the parallel_for_each algorithm to count the number of prime numbers
   // in the array in parallel.
   prime_count = 0L;
   elapsed = time_call([&] {
      parallel_for_each (begin(a), end(a), [&](int n ) { 
         if (is_prime(n))
            InterlockedIncrement(&prime_count);
      });
   });
   wcout << L"parallel version: " << endl
         << L"found " << prime_count << L" prime numbers" << endl
         << L"took " << elapsed << L" ms" << endl << endl;
}