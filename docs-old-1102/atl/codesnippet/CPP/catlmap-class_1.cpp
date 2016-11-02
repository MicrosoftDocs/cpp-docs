   // Create a map which stores a double
   // value using an integer key

   CAtlMap<int, double> mySinTable;
   int i;

   // Initialize the Hash Table
   mySinTable.InitHashTable(257);

   // Add items to the map
   for (i = 0; i < 90; i++)
      mySinTable[i] = sin((double)i);

   // Confirm the map is valid
   mySinTable.AssertValid();

   // Confirm the number of elements in the map
   ATLASSERT(mySinTable.GetCount() == 90);

   // Remove elements with even key values
   for (i = 0; i < 90; i += 2)
      mySinTable.RemoveKey(i);

   // Confirm the number of elements in the map
   ATLASSERT(mySinTable.GetCount() == 45);

   // Walk through all the elements in the map.
   // First, get start position.
   POSITION pos;
   int key;
   double value;
   pos = mySinTable.GetStartPosition();

   // Now iterate the map, element by element
   while (pos != NULL) 
   {
      key = mySinTable.GetKeyAt(pos);
      value = mySinTable.GetNextValue(pos);
   }