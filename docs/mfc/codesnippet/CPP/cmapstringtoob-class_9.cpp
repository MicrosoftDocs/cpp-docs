CMapStringToOb map;

map.SetAt(_T("Bart"), new CAge(13));
map.SetAt(_T("Lisa"), new CAge(11));
map.SetAt(_T("Homer"), new CAge(36));
map.SetAt(_T("Marge"), new CAge(35));
map.RemoveKey(_T("Lisa")); // Memory leak: CAge object not
                           // deleted.
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("RemoveKey example: ") << &map << _T("\n");
#endif