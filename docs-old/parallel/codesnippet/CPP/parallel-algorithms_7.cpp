// parallel-map-reduce-sum-of-primes.cpp
// compile with: /EHsc
#include <windows.h>
#include <ppl.h>
#include <array>
#include <numeric>
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

int wmain()
{   
   // Create an array object that contains 200000 integers.
   array<int, 200000> a;

   // Initialize the array such that a[i] == i.
   iota(begin(a), end(a), 0);

   int prime_sum;
   __int64 elapsed;

   // Compute the sum of the numbers in the array that are prime.
   elapsed = time_call([&] {
       transform(begin(a), end(a), begin(a), [](int i) { 
         return is_prime(i) ? i : 0; 
      });
      prime_sum = accumulate(begin(a), end(a), 0);
   });   
   wcout << prime_sum << endl;   
   wcout << L"serial time: " << elapsed << L" ms" << endl << endl;

   // Now perform the same task in parallel.
   elapsed = time_call([&] {
      parallel_transform(begin(a), end(a), begin(a), [](int i) { 
         return is_prime(i) ? i : 0; 
      });
      prime_sum = parallel_reduce(begin(a), end(a), 0);
   });
   wcout << prime_sum << endl;
   wcout << L"parallel time: " << elapsed << L" ms" << endl << endl;
}
/* Sample output:
   1709600813
   serial time: 7406 ms
   
   1709600813
   parallel time: 1969 ms
*/