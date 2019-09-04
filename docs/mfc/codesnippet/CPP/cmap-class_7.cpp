CMap<int, int, CPoint, CPoint> myMap;

// Add 10 elements to the map.
for (int i = 0; i < 10; i++)
   myMap.SetAt(i, CPoint(i, i));

// Remove the elements with even key values.
POSITION pos = myMap.GetStartPosition();
int nKey;
CPoint pt;
while (pos != NULL)
{
   myMap.GetNextAssoc(pos, nKey, pt);

   if ((nKey % 2) == 0)
      myMap.RemoveKey(nKey);
}

// Print the element values.
pos = myMap.GetStartPosition();
while (pos != NULL)
{
   myMap.GetNextAssoc(pos, nKey, pt);
   _tprintf_s(_T("Current key value at %d: %d,%d\n"),
              nKey, pt.x, pt.y);
}