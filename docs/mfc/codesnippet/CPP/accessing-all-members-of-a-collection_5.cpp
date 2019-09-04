CMapStringToOb myMap; // A nontemplate collection class
CPerson myPerson;
myMap.SetAt(_T("Bill"), &myPerson);

POSITION pos = myMap.GetStartPosition();
while (pos != NULL)
{
   CPerson *pPerson;
   CString string;
   // Gets key (string) and value (pPerson)
   myMap.GetNextAssoc(pos, string, (CObject *&)pPerson);
   ASSERT(pPerson->IsKindOf(RUNTIME_CLASS(CPerson)));
   // Use string and pPerson ...
}