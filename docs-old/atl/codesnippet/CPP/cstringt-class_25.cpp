   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abc"));
   ASSERT((s += _T("def")) == _T("abcdef"));   