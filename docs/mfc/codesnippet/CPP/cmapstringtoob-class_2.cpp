CMapStringToOb map;

map.SetAt(_T("Bart"), new CAge(13));
map.SetAt(_T("Homer"), new CAge(36));
ASSERT(map.GetCount() == 2);