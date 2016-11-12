   // Gains access to the chopsticks.
   vector<int> pickup_chopsticks()
   {
      // Create a non-greedy join object and link it to the left and right 
      // chopstick.
      join<chopstick, non_greedy> j(2);
      _left.link_target(&j);
      _right.link_target(&j);

      // Receive from the join object. This resolves the deadlock situation
      // because a non-greedy join removes the messages only when a message
      // is available from each of its sources.
      return receive(&j);
   }