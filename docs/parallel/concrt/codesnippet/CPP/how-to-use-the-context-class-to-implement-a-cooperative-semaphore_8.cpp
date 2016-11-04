   parallel_for(0, 10, [&](int i) {
      // Create an exception-safe scoped_lock object that holds the lock 
      // for the duration of the current scope.
      semaphore::scoped_lock auto_lock(s);

      // Print a message to the console.
      wstringstream ss;
      ss << L"In loop iteration " << i << L"..." << endl;
      wcout << ss.str();

      // Simulate work by waiting for two seconds.
      wait(2000);
   });