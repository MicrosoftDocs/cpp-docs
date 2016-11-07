   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);

   // Confirm the head of the list
   ATLASSERT(myList.GetHead() == 100);

   // Remove the head of the list
   ATLASSERT(myList.RemoveHead() == 100);

   // Confirm the new head of the list
   ATLASSERT(myList.GetHead() == 200);   