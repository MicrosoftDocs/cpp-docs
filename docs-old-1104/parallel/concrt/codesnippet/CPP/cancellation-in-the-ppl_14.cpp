   // Create a Boolean flag to coordinate cancelation.
   bool canceled = false;

   parallel_for(0, 100, [&](int i) {
      // For illustration, set the flag to cancel the task when i is 50.
      if (i == 50)
      {
         canceled = true;
      }

      // Perform work if the task is not canceled.
      if (!canceled)
      {
         // TODO: Perform work here.
      }
   });