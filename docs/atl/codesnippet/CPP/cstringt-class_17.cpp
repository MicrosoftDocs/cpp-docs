   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("SoccerBest"));
   int n = str.Insert(6, _T("is "));
   ASSERT(n == str.GetLength());
   _tprintf_s(_T("1: %s\n"), (LPCTSTR) str);

   n = str.Insert(6, _T(' '));
   ASSERT(n == str.GetLength());
   _tprintf_s(_T("2: %s\n"), (LPCTSTR) str);

   n = str.Insert(55, _T('!'));
   ASSERT(n == str.GetLength());
   _tprintf_s(_T("3: %s\n"), (LPCTSTR) str);