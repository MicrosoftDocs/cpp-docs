typedef CMap<int, int, CPoint, CPoint> CMyMap;
CMyMap myMap;

myMap.InitHashTable(257);

// Add 10 elements to the map.
for (int i = 0; i <= 10; i++)
   myMap[i] = CPoint(i, i);

// Print the element values with even key values.
CMyMap::CPair *pCurVal;

for (int i = 0; i <= myMap.GetCount(); i += 2)
{
   pCurVal = myMap.PLookup(i);
   _tprintf_s(_T("Current key value at %d: %d,%d\n"),
              pCurVal->key, pCurVal->value.x, pCurVal->value.y);
}