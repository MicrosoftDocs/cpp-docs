      structured_task_group tg2;
      
      // Create a child task.
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

      // Create a child task.
      auto t5 = make_task([&] {
         // Perform work in a loop.
         for (int i = 0; i < 1000; ++i)
         {
            // To reduce overhead, occasionally check for 
            // cancelation.
            if ((i%100) == 0)
            {
               if (tg2.is_canceling())
               {
                  wcout << L"The task was canceled." << endl;
                  break;
               }
            }

            // TODO: Perform work here.
         }
      });

      // Run the child tasks and wait for them to finish.
      tg2.run(t4);
      tg2.run(t5);
      tg2.wait();