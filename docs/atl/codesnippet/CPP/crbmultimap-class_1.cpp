   // Define a multimap object which has an integer
   // key, a double value, and a block size of 5
   CRBMultiMap<int, double> myMap(5);

   // Add some key/values. Notice how three
   // different values are associated with 
   // one key. In a CRBMap object, the values
   // would simply overwrite each other.
   myMap.Insert(0, 1.1);
   myMap.Insert(0, 1.2);
   myMap.Insert(0, 1.3);
   myMap.Insert(1, 2.1);

   // Look up a key and iterate through
   // all associated values

   double v;
   POSITION myPos = myMap.FindFirstWithKey(0);

   while (myPos != NULL)
   {
      v = myMap.GetNextValueWithKey(myPos,0);
      // As the loop iterates, v 
      // contains the values 1.3, 1.2, 1.1
   }

   // Remove all of the values associated with that key
   size_t i = myMap.RemoveKey(0);

   // Confirm all three values were deleted
   ATLASSERT(i == 3);