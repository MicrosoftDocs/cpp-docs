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