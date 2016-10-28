   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   myList.AddTail(100);
   myList.AddTail(200);
   myList.AddTail(300);

   // Use RemoveAt to remove elements one by one
   myList.RemoveAt(myList.Find(100));
   myList.RemoveAt(myList.Find(200));
   myList.RemoveAt(myList.Find(300));

   // Confirm all have been deleted
   ATLASSERT(myList.IsEmpty() == true);   