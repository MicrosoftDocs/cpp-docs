   structured_task_group tasks;

   // Create and run a task.
   auto task = make_task([] {
      // Enable COM for the lifetime of the task.
      CCoInitializer coinit(COINIT_MULTITHREADED);

      // TODO: Perform task here.

      // The CCoInitializer object frees the COM library
      // when the task exits.
   });
   tasks.run(task);

   // TODO: Run additional tasks here.

   // Wait for the tasks to finish.
   tasks.wait();