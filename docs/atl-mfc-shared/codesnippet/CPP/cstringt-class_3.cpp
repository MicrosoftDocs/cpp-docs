   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str = _T("Some data:\t");

   str.AppendFormat(_T("X value = %.2f\n"), 12345.12345);
   _tprintf_s(_T("%s"), (LPCTSTR) str);