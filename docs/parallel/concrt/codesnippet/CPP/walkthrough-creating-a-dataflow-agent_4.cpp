      //
      // Create the members of the dataflow network.
      //
     
      // Increments the active counter.
      transformer<int, int> increment_active(
         [&active](int value) -> int {
            active.add_count();
            return value;
         });

      // Increments the count of negative values.
      call<int> negatives(
         [&](int value) {
            ++negative_count;
            // Decrement the active counter.
            active.signal();
         },
         [](int value) -> bool {
            return value < 0;
         });

      // Increments the count of positive values.
      call<int> positives(
         [&](int value) {
            ++positive_count;
            // Decrement the active counter.
            active.signal();
         },
         [](int value) -> bool {
            return value > 0;
         });

      // Receives only the sentinel value of 0.
      call<int> sentinel(
         [&](int value) {            
            // Decrement the active counter.
            active.signal();
            // Set the sentinel event.
            received_sentinel.set();
         },
         [](int value) { 
            return value == 0; 
         });

      // Connects the _source message buffer to the rest of the network.
      unbounded_buffer<int> connector;