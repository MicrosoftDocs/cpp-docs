   // To enable cancelation, call parallel_for in a task group.
   structured_task_group tg;

   task_group_status status = tg.run_and_wait([&] {
      parallel_for(0, 100, [&](int i) {
         // Cancel the task when i is 50.
         if (i == 50)
         {
            tg.cancel();
         }
         else
         {
            // TODO: Perform work here.
         }
      });
   });

   // Print the task group status.
   wcout << L"The task group status is: ";
   switch (status)
   {
   case not_complete:
      wcout << L"not complete." << endl;
      break;
   case completed:
      wcout << L"completed." << endl;
      break;
   case canceled:
      wcout << L"canceled." << endl;
      break;
   default:
      wcout << L"unknown." << endl;
      break;
   }