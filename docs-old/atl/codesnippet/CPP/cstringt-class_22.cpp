   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abc"));

   ASSERT(s.MakeUpper() == _T("ABC"));   