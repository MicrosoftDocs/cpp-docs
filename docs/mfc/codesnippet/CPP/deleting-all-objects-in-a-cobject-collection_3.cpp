CMap<CString, LPCTSTR, CPerson*, CPerson*> myMap;
// ... Add some key-value elements ...
// Now delete the elements
POSITION pos = myMap.GetStartPosition();
while (pos != NULL)
{
   CPerson* pPerson;
   CString string;
   // Gets key (string) and value (pPerson)
   myMap.GetNextAssoc(pos, string, pPerson);
   delete pPerson;
}
// RemoveAll deletes the keys
myMap.RemoveAll();