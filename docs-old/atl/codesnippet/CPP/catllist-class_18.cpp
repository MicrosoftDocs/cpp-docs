   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);

   // Use SetAt to change the values stored in the head and
   // tail of the list
   myList.SetAt(myList.GetHeadPosition(), myList.GetHead() * 10);
   myList.SetAt(myList.GetTailPosition(), myList.GetTail() * 10);

   // Confirm the values
   ATLASSERT(myList.GetHead() == 1000);
   ATLASSERT(myList.GetTail() == 2000);   