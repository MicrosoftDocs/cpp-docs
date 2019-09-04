CMapStringToOb map;

map[_T("Bart")] = new CAge(13);
map[_T("Lisa")] = new CAge(11);
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("Operator [] example: ") << &map << _T("\n");
#endif