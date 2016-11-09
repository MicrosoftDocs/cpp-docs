   // Declare an array of integers
   CAtlArray<int> iGrowArray;

   // Add an element
   iGrowArray.Add(0);

   // Add an extra element at position 19.
   // This will grow the array to accommodate.
   iGrowArray.SetAtGrow(19, 0);

   // Confirm size of new array
   ATLASSERT(iGrowArray.GetCount() == 20);

   // Note: the values at position 1 to 18
   // are undefined.