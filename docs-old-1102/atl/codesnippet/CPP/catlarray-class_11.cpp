   // Declare an array of chars
   CAtlArray<char> cMyArray;

   // Add ten elements to the array
   for (int a = 0; a < 10; a++)
   {
      cMyArray.Add('*');
   }

   // Remove five elements starting with
   // the element at position 1
   cMyArray.RemoveAt(1, 5);

   // Free memory
   cMyArray.FreeExtra();

   // Confirm size of array
   ATLASSERT(cMyArray.GetCount() == 5);   