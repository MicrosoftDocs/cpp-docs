   // Performs the main logic of the dining philosopher algorithm.
   void run()
   {
      // Repeat the thinks/eat cycle a set number of times.
      for (int n = 0; n < eat_count; ++n)
      {
         think();
         
         vector<int> v = pickup_chopsticks(); 
         
         eat();
                  
         send(_times_eaten, n+1);

         putdown_chopsticks(v[0], v[1]);
      }

      done();
   }