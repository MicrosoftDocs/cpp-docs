   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString str;

   str.Format(_T("Floating point: %.2f\n"), 12345.12345);
   _tprintf_s(_T("%s"), (LPCTSTR) str);

   str.Format(_T("Left-justified integer: %.6d\n"), 35);
   _tprintf_s(_T("%s"), (LPCTSTR) str);