CMap<int, int, CPoint, CPoint> myMap;

// Add 10 elements to the map.
for (int i = 0; i < 10; i++)
   myMap.SetAt(i, CPoint(i, i));

myMap.RemoveAll();

ASSERT(myMap.IsEmpty());