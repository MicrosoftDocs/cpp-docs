   structured_task_group tasks;

   // Create and run a task.
   auto task = make_task([] {
      bool coinit = false;            
      __try {
         // Initialize the COM library on the current thread.
         CoInitializeEx(NULL, COINIT_MULTITHREADED);
         coinit = true;

         // TODO: Perform task here.
      }
      __finally {
         // Free the COM library.
         if (coinit)
            CoUninitialize();
      }      
   });
   tasks.run(task);

   // TODO: Run additional tasks here.

   // Wait for the tasks to finish.
   tasks.wait();