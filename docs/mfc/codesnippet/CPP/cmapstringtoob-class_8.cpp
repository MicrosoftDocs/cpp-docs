{
   CMapStringToOb map;

   CAge age1(13); // Two objects on the stack
   CAge age2(36);
   map.SetAt(_T("Bart"), &age1);
   map.SetAt(_T("Homer"), &age2);
   ASSERT(map.GetCount() == 2);
   map.RemoveAll(); // CObject pointers removed; objects not removed.
   ASSERT(map.GetCount() == 0);
   ASSERT(map.IsEmpty());
} // The two CAge objects are deleted when they go out of scope.