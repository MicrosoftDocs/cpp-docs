   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   POSITION myPos = myList.AddHead(1);
   myPos = myList.InsertAfter(myPos, 2);
   myPos = myList.InsertAfter(myPos, 3);

   // Confirm the tail value is as expected
   ATLASSERT(myList.GetTail() == 3);   