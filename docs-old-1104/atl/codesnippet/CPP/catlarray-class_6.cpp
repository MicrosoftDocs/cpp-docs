   // Declare an array of integers

   CAtlArray<int> iMyArray;
   int element;

   // Add ten elements to the array
   for (int i = 0; i < 10; i++)
   {
      iMyArray.Add(i);
   }

   // Use GetAt and SetAt to modify
   // every element in the array

   for (size_t i = 0; i < iMyArray.GetCount(); i++)
   {
      element = iMyArray.GetAt(i);
      element *= 10;
      iMyArray.SetAt(i, element);
   }   