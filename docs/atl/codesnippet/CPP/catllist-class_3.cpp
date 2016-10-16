   // Define the list
   CAtlList<int> myList;

   // Add elements to the tail
   myList.AddTail(1);
   myList.AddTail(2);
   myList.AddTail(3);

   // Confirm the current head of the list
   ATLASSERT(myList.GetHead() == 1);

   // Confirm the current tail of the list
   ATLASSERT(myList.GetTail() == 3);   