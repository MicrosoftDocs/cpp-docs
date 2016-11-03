   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   POSITION myPos = myList.AddHead(1);
   myPos = myList.InsertBefore(myPos, 2);
   myPos = myList.InsertBefore(myPos, 3);

   // Confirm the head value is as expected
   ATLASSERT(myList.GetHead() == 3);  