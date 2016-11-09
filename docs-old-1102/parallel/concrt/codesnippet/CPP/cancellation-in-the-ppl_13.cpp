   try
   {
      parallel_for(0, 100, [&](int i) {
         // Throw an exception to cancel the task when i is 50.
         if (i == 50)
         {
            throw i;
         }
         else
         {
            // TODO: Perform work here.
         }
      });
   }
   catch (int n)
   {
      wcout << L"Caught " << n << endl;
   }