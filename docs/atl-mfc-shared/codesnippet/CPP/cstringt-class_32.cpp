   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("This is a test."));
   int n = str.Remove(_T('t'));
   ASSERT(n == 2);
   ASSERT(str == _T("This is a es."));   