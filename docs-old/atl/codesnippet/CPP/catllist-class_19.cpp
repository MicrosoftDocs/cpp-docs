   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   for (int i = 0; i < 100; i++)
   {
      myList.AddHead(i);
   }

   // Order is: 99, 98, 97, 96...
   ATLASSERT(myList.GetHead() == 99);
   ATLASSERT(myList.GetTail() == 0);

   // Perform a crude bubble sort
   for (int j = 0; j < 100; j++)
   {
      for(int i = 0; i < 99; i++)
      {
         if (myList.GetAt(myList.FindIndex(i)) > 
            myList.GetAt(myList.FindIndex(i+1)))
         {
            myList.SwapElements(myList.FindIndex(i), myList.FindIndex(i+1));
         }
      }
   }

   // Order is: 0, 1, 2, 3...
   ATLASSERT(myList.GetHead() == 0);
   ATLASSERT(myList.GetTail() == 99);   