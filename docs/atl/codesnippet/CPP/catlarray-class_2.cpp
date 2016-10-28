   // Declare two integer arrays
   CAtlArray<int> iArray1,iArray2;

   iArray1.Add(1);   // element 0
   iArray1.Add(2);   // element 1

   iArray2.Add(3);   // element 0
   iArray2.Add(4);   // element 1

   // Append iArray2 to iArray1
   iArray1.Append(iArray2);

   ATLASSERT(iArray1.GetCount() == 4);   