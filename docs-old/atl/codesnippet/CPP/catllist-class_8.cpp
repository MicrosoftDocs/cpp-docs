   // Define the integer list
   CAtlList<int> myList;

   // Populate the list
   for (int i = 0; i < 100; i++)
   {
      myList.AddTail(i);
   }

   // Iterate through the entire list
   for (size_t j = 0; j < myList.GetCount(); j++)
   {
      size_t i = myList.GetAt(myList.FindIndex(j));
      ATLASSERT(i == j);
   }   