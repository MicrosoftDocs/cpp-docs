   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str;
   str = _T("\t\t   ****Soccer is best!");

   _tprintf_s(_T("Before: \"%s\"\n"), (LPCTSTR)str);
   _tprintf_s(_T("After: \"%s\"\n"), (LPCTSTR)str.TrimLeft(_T("\t *")));
   
   // Output:
   // --------------------------
   // Before:     ****Soccer is best!
   // After: Soccer is best!