   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(1);
   myList.AddTail(2);
   myList.AddTail(3);
   myList.AddTail(4);

   // Move the tail element to the head
   myList.MoveToHead(myList.GetTailPosition());

   // Confirm the head is as expected
   ATLASSERT(myList.GetHead() == 4);

   // Move the head element to the tail
   myList.MoveToTail(myList.GetHeadPosition());

   // Confirm the tail is as expected
   ATLASSERT(myList.GetTail() == 4);   