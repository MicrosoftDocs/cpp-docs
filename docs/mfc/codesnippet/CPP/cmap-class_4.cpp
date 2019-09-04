typedef CMap<int, int, CPoint, CPoint> CMyMap;
CMyMap myMap;

myMap.InitHashTable(257);

// Add 10 elements to the map.
for (int i = 0; i <= 10; i++)
   myMap.SetAt(i, CPoint(i, i));

// Print the element value with even key values.
int nKey = 0;
CPoint pt;
CMyMap::CPair *pCurVal;

pCurVal = myMap.PGetFirstAssoc();
while (pCurVal != NULL)
{
   if ((nKey % 2) == 0)
   {
      _tprintf_s(_T("Current key value at %d: %d,%d\n"),
                 pCurVal->key, pCurVal->value.x, pCurVal->value.y);
   }
   pCurVal = myMap.PGetNextAssoc(pCurVal);
   nKey++;
}