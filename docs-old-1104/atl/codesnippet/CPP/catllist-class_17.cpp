   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);

   // Confirm the tail of the list
   ATLASSERT(myList.GetTail() == 300);

   // Remove the tail of the list
   ATLASSERT(myList.RemoveTail() == 300);

   // Confirm the new tail of the list
   ATLASSERT(myList.GetTail() == 200);   