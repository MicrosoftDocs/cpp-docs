      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, cancel the parent task
            // and break from the loop.
            bool succeeded = work(i);
            if (!succeeded)
            {
               tg2.cancel();
               break;
            }
         }         
      });