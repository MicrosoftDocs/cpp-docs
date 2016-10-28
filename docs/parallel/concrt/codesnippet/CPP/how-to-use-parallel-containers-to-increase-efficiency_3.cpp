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