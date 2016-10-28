      auto t4 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // Call a function to perform work.
            // If the work function fails, cancel all tasks in the tree.
            bool succeeded = work(i);
            if (!succeeded)
            {
               tg1.cancel();
               break;
            }
         }   
      });