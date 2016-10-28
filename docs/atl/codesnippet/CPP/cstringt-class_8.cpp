   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("Soccer is best, but hockey is quicker!"));
   _tprintf_s(_T("Before: %s\n"), (LPCTSTR)str);

   int n = str.Delete(6, 3);
   _tprintf_s(_T("After: %s\n"), (LPCTSTR)str);
   ASSERT(n == str.GetLength());