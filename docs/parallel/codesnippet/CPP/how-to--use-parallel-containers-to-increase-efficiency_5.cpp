// carmichael-primes.cpp
// compile with: /EHsc
#include <ppl.h>
#include <concurrent_queue.h>
#include <concurrent_vector.h>
#include <iostream>
#include <sstream>

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

// Determines whether the input value is a Carmichael number.
bool is_carmichael(const int n) 
{
   if (n < 2) 
      return false;

   int k = n;
   for (int i = 2; i <= k / i; ++i) 
   {
      if (k % i == 0) 
      {
         if ((k / i) % i == 0) 
            return false;
         if ((n - 1) % (i - 1) != 0)
            return false;
         k /= i;
         i = 1;
      }
   }
   return k != n && (n - 1) % (k - 1) == 0;
}

// Finds all prime factors of the given value.
concurrent_vector<int> prime_factors_of(int n, 
   const concurrent_vector<int>& primes)
{
   // Holds the prime factors of n.
   concurrent_vector<int> prime_factors;
   
   // Use trial division to find the prime factors of n.
   // Every prime number that divides evenly into n is a prime factor of n.
   const int max = sqrt(static_cast<double>(n));
   parallel_for_each(begin(primes), end(primes), [&](int prime)
   {
      if (prime <= max)
      {         
         if ((n % prime) == 0)
            prime_factors.push_back(prime);
      }
   });

   return prime_factors;
}

int wmain()
{
   // The maximum number to test.
   const int max = 10000000;
   
   // Holds the Carmichael numbers that are in the range [0, max).
   concurrent_queue<int> carmichaels;

   // Holds the prime numbers that are in the range  [0, sqrt(max)).
   concurrent_vector<int> primes;
   
   // Generate the set of Carmichael numbers and the set of prime numbers
   // in parallel.
   parallel_invoke(
      [&] {
         parallel_for(0, max, [&](int i) {
            if (is_carmichael(i)) {
               carmichaels.push(i);
            }
         });
      },
      [&] {
         parallel_for(0, int(sqrt(static_cast<double>(max))), [&](int i) {
            if (is_prime(i)) {
               primes.push_back(i);
            }
         });
      });

   // Use a task group to compute the prime factors of each 
   // Carmichael number in parallel.
   task_group tasks;

   int carmichael;
   while (carmichaels.try_pop(carmichael))
   {
      tasks.run([carmichael,&primes] 
      {
         // Compute the prime factors.
         auto prime_factors = prime_factors_of(carmichael, primes);

         // For brevity, print the prime factors for the current number only
         // if there are more than 4.
         if (prime_factors.size() > 4)
         {
            // Sort and then print the prime factors.
            sort(begin(prime_factors), end(prime_factors));

            wstringstream ss;
            ss << L"Prime factors of " << carmichael << L" are:";

            for_each (begin(prime_factors), end(prime_factors), 
               [&](int prime_factor) { ss << L' ' << prime_factor; });
            ss << L'.' << endl;

            wcout << ss.str();
         }
      });
   }

   // Wait for the task group to finish.
   tasks.wait();
}