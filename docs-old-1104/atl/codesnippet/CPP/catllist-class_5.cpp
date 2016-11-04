   // Define the list
   CAtlList<int> myList;

   // AssertValid only exists in debug builds
   #ifdef _DEBUG
   myList.AssertValid();
   #endif   