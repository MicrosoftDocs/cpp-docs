CMapStringToOb map;
CAge *pa;

map.SetAt(_T("Bart"), new CAge(13));
map.SetAt(_T("Lisa"), new CAge(11));
map.SetAt(_T("Homer"), new CAge(36));
map.SetAt(_T("Marge"), new CAge(35));
ASSERT(map.Lookup(_T("Lisa"), (CObject *&)pa)); // Is "Lisa" in the map?
ASSERT(*pa == CAge(11));                        // Is she 11?