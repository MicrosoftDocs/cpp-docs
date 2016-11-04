   // Define the integer list
   CAtlList<int> myList;
   int i;

   // Populate the list
   for (i = 0; i < 100; i++)
   {
      myList.AddTail(i);
   }

   // Get the starting position value
   POSITION myPos = myList.GetHeadPosition();

   // Iterate through the entire list
   i = 0;
   int j;

   do {
      j = myList.GetNext(myPos);
      ATLASSERT(i == j);
      i++;
   } while (myPos != NULL);   