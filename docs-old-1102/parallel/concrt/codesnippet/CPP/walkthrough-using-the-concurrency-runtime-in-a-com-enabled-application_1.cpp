   structured_task_group tasks;

   // Create and run a task.
   auto task = make_task([] {
      // Initialize the COM library on the current thread.
      CoInitializeEx(NULL, COINIT_MULTITHREADED);

      // TODO: Perform task here.

      // Free the COM library.
      CoUninitialize();
   });   
   tasks.run(task);

   // TODO: Run additional tasks here.

   // Wait for the tasks to finish.
   tasks.wait();