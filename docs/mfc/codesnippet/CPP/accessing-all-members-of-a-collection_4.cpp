CMap<CString, LPCTSTR, CPerson *, CPerson *> myMap;
CPerson myPerson;

myMap.SetAt(_T("Bill"), &myPerson);
POSITION pos = myMap.GetStartPosition();
while (pos != NULL)
{
   CPerson *pPerson;
   CString string;
   // Get key (string) and value (pPerson)
   myMap.GetNextAssoc(pos, string, pPerson);
   // Use string and pPerson
}