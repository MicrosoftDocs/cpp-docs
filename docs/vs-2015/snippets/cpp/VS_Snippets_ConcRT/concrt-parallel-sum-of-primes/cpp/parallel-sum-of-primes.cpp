// <snippet4>
// parallel-sum-of-primes.cpp
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
      // <snippet1>
      prime_sum = accumulate(begin(a), end(a), 0, [&](int acc, int i) {
         return acc + (is_prime(i) ? i : 0);
      });
      // </snippet1>
   });   
   wcout << prime_sum << endl;   
   wcout << L"serial time: " << elapsed << L" ms" << endl << endl;

   // Now perform the same task in parallel.
   elapsed = time_call([&] {
      // <snippet3>
      combinable<int> sum;
      parallel_for_each(begin(a), end(a), [&](int i) {
         sum.local() += (is_prime(i) ? i : 0);
      });
      prime_sum = sum.combine(plus<int>());
      // </snippet3>
   });
   wcout << prime_sum << endl;
   wcout << L"parallel time: " << elapsed << L" ms" << endl << endl;
}
// </snippet4>

void snippet2(array<int, 20000>& a)
{
   int prime_sum = 0;
   // <snippet2>
   critical_section cs;
   prime_sum = 0;
   parallel_for_each(begin(a), end(a), [&](int i) {
      cs.lock();
      prime_sum += (is_prime(i) ? i : 0);
      cs.unlock();
   });
   // </snippet2>
}