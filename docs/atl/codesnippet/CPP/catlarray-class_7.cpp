   // Define an array of integers
   CAtlArray<int> MyArray;

   // Define a pointer
   int* pData;

   // Allocate enough space for 32 elements
   // with buffer increase to be calculated
   // automatically
   MyArray.SetCount(32, -1);

   // Set the pointer to the first element
   pData = MyArray.GetData();

   // Set array values directly
   for (int j = 0; j < 32; j++, pData++)
   {
      *pData = j * 10;   
   }