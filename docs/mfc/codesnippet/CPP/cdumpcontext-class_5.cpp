#if _DEBUG
CStringList li;
li.AddHead(_T("item 0"));
li.AddHead(_T("item 1"));
CString s = _T("test");
int i = 7;
long lo = 1000000000L;
LONGLONG lolo = 12345678901234i64;
afxDump << _T("list=") << &li << _T("string=")
        << s << _T("int=") << i << _T("long=") << lo
        << _T("LONGLONG=") << lolo << _T("\n");
#endif