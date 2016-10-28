// parallel-combine-primes.cpp
// compile with: /EHsc
#include <windows.h>
#include <ppl.h>
#include <bitset>
#include <iostream>

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

const int limit = 40000;

int wmain()
{
   // A set of prime numbers that is computed serially.
   bitset<limit> primes1;

   // A set of prime numbers that is computed in parallel.
   bitset<limit> primes2;

   __int64 elapsed;

   // Compute the set of prime numbers in a serial loop.
   elapsed = time_call([&] 
   {
      for(int i = 0; i < limit; ++i) {
         if (is_prime(i))
            primes1.set(i);
      }
   });
   wcout << L"serial time: " << elapsed << L" ms" << endl << endl;

   // Compute the same set of numbers in parallel.
   elapsed = time_call([&] 
   {
      // Use a parallel_for loop and a combinable object to compute 
      // the set in parallel. 
      // You do not need to synchronize access to the set because the 
      // combinable object provides a separate bitset object to each thread.
      combinable<bitset<limit>> working;
      parallel_for(0, limit, [&](int i) {
         if (is_prime(i))
            working.local().set(i);
      });

      // Merge each thread-local computation into the final result.
      working.combine_each([&](bitset<limit>& local) {
         primes2 |= local;
      });
   });
   wcout << L"parallel time: " << elapsed << L" ms" << endl << endl;
}