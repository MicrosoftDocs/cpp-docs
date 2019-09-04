CMap<CString, LPCTSTR, CPerson, CPerson &> myMap;
CPerson person;
LPCTSTR lpstrName = _T("Jones");
myMap.SetAt(lpstrName, person);