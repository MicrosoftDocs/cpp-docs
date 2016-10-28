   // Declare a list of integers
   CAtlList<int> myList;

   // Add some elements, each to the head of the list.
   // As each new element is added, the previous head is
   // pushed down the list.
   myList.AddHead(42);
   myList.AddHead(49);

   // Confirm the value currently at the head of the list
   ATLASSERT(myList.GetHead() == 49);

   // Confirm the value currently at the tail of the list
   ATLASSERT(myList.GetTail() == 42);   