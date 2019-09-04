CMapStringToOb map;
CAge *pa;

map.SetAt(_T("Bart"), new CAge(13));
map.SetAt(_T("Lisa"), new CAge(11)); // Map contains 2
                                     // elements.
#ifdef _DEBUG
afxDump.SetDepth(1);
afxDump << _T("before Lisa's birthday: ") << &map << _T("\n");
#endif
if (map.Lookup(_T("Lisa"), (CObject *&)pa))
{ // CAge 12 pointer replaces CAge 11 pointer.
   map.SetAt(_T("Lisa"), new CAge(12));
   delete pa; // Must delete CAge 11 to avoid memory leak.
}
#ifdef _DEBUG
afxDump << _T("after Lisa's birthday: ") << &map << _T("\n");
#endif