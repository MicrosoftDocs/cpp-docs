CMapStringToString myMap;
CString myStr[4] = {_T("One"), _T("Two"), _T("Three"), _T("Four")};
CMapStringToString::CPair *pCurVal;

myMap.InitHashTable(257);

// Add 4 elements to the map.
myMap.SetAt(myStr[0], _T("Odd"));
myMap.SetAt(myStr[1], _T("Even"));
myMap.SetAt(myStr[2], _T("Odd"));
myMap.SetAt(myStr[3], _T("Even"));

pCurVal = myMap.PGetFirstAssoc();
while (pCurVal != NULL)
{
   _tprintf_s(_T("Current key value at %s: %s\n"),
              pCurVal->key, pCurVal->value);
   pCurVal = myMap.PGetNextAssoc(pCurVal);
}