   // Run the child tasks.
   tg1.run(t1);
   tg1.run(t2);
   tg1.run(t3);   
   
   // Wait for the tasks to finish. The runtime marshals any exception
   // that occurs to the call to wait.
   try
   {
      tg1.wait();
   }
   catch (const exception& e)
   {
      wcout << e.what() << endl;
   }