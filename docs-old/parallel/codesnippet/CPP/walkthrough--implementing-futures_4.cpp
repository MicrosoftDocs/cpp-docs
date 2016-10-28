   ~async_future()
   {
      // Wait for the task to finish.
      _tasks.wait();
   }