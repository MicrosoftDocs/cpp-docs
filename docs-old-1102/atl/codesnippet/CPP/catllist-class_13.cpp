   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(1);
   myList.AddTail(2);
   myList.AddTail(3);
   myList.AddTail(4);

   // Confirm not empty
   ATLASSERT(myList.IsEmpty() == false);

   // Remove the tail element
   myList.RemoveTailNoReturn();

   // Confirm not empty
   ATLASSERT(myList.IsEmpty() == false);

   // Remove the head element
   myList.RemoveHeadNoReturn();

   // Confirm not empty
   ATLASSERT(myList.IsEmpty() == false);

   // Remove all remaining elements
   myList.RemoveAll();

   // Confirm empty
   ATLASSERT(myList.IsEmpty() == true);   