   // Declare an array of integers
   CAtlArray<int> iBuffer;

   // Add elements to the array
   for (int b = 0; b < 10; b++)
   {
      iBuffer.Add(0);
   }

   // Instert ten 1's into the array
   // at position 5
   iBuffer.InsertAt(5, 1, 10);   