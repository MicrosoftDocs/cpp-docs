   // Define two integer arrays
   CAtlArray<int> iTargetArray, iSourceArray;

   // Add elements to first array
   for (int x = 0; x < 10; x++)
   {
      iTargetArray.Add(x);
   }

   // Add elements to the second array
   for (int x = 0; x < 10; x++)
   {
      iSourceArray.Add(x * 10);
   }

   // Insert the Source array into the Target
   // array, starting at the 5th element.
   iTargetArray.InsertArrayAt(5, &iSourceArray);   