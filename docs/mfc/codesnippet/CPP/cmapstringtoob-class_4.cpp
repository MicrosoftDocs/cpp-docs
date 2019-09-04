CMapStringToOb map;
POSITION pos;
CString key;
CAge *pa;

map.SetAt(_T("Bart"), new CAge(13));
map.SetAt(_T("Lisa"), new CAge(11));
map.SetAt(_T("Homer"), new CAge(36));
map.SetAt(_T("Marge"), new CAge(35));
// Iterate through the entire map, dumping both name and age.
for (pos = map.GetStartPosition(); pos != NULL;)
{
   map.GetNextAssoc(pos, key, (CObject *&)pa);
#ifdef _DEBUG
   afxDump << key << _T(" : ") << pa << _T("\n");
#endif
}