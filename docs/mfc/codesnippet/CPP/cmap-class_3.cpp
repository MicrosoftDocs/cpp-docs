CMap<int, int, CPoint, CPoint> myMap;

myMap.InitHashTable(257);

// Add 200 elements to the map.
for (int i = 0; i < 200; i++)
{
   myMap[i] = CPoint(i, i);
}

// Remove the elements with even key values.
CPoint pt;
for (int i = 0; myMap.Lookup(i, pt); i += 2)
{
   myMap.RemoveKey(i);
}

ASSERT(myMap.GetSize() == 100);
TRACE(_T("myMap with %d elements:\n"), myMap.GetCount());
POSITION pos = myMap.GetStartPosition();
int iKey;
CPoint ptVal;
while (pos != NULL)
{
   myMap.GetNextAssoc(pos, iKey, ptVal);
   TRACE(_T("\t[%d] = (%d,%d)\n"), iKey, ptVal.x, ptVal.y);
}