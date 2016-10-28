   // Create an array of message buffers to hold the chopsticks.
   array<unbounded_buffer<chopstick>, philosopher_count> chopsticks;
   
   // Send a value to each message buffer in the array.
   // The value of the message is not important. A buffer that contains
   // any message indicates that the chopstick is available.
   for_each (begin(chopsticks), end(chopsticks), 
      [](unbounded_buffer<chopstick>& c) {
         send(c, 1);
   });