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