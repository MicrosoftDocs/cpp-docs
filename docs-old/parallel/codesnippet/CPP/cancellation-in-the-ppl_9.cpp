      structured_task_group tg2;
      
      // Create a child task.      
      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, throw an exception to 
            // cancel the parent task.
            bool succeeded = work(i);
            if (!succeeded)
            {
               throw exception("The task failed");
            }
         }         
      });

      // Create a child task.
      auto t5 = make_task([&] {
         // TODO: Perform work here.
      });

      // Run the child tasks.
      tg2.run(t4);
      tg2.run(t5);

      // Wait for the tasks to finish. The runtime marshals any exception
      // that occurs to the call to wait.
      try
      {
         tg2.wait();
      }
      catch (const exception& e)
      {
         wcout << e.what() << endl;
      }