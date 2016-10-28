   // Define the integer list
   CAtlList<int> myList;
   int i;

   // Populate the list
   for (i = 0; i < 100; i++)
   {
      myList.AddHead(i);
   }

   // Get the starting position value
   POSITION myP = myList.GetTailPosition();

   // Iterate through the entire list
   i = 0;
   int j;

   do {
      j = myList.GetPrev(myP);
      ATLASSERT(i == j);
      i++;
   } while (myP != NULL);   