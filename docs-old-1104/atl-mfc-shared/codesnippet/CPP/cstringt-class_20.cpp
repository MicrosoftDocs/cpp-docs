   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("ABC"));

   ASSERT(s.MakeLower() == _T("abc"));   