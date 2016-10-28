   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);
   myList.AddTail(400);

   // Find the '300' element in the list,
   // starting from the list head.
   POSITION myPos = myList.Find(300);

   // Confirm that the element was found
   ATLASSERT(myList.GetAt(myPos) == 300);   