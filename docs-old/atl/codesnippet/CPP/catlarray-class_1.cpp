   // Declare an array of integers
   CAtlArray<int> iArray;

   iArray.Add(1);   // element 0
   iArray.Add(2);   // element 1
   iArray.Add();    // element 2

   ATLASSERT(iArray.GetCount() == 3);   