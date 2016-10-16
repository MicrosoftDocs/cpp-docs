   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.Mid(2, 3) == _T("cde"));   