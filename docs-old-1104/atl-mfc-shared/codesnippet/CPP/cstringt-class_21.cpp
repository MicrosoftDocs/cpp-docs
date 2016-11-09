   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abc"));

   ASSERT(s.MakeReverse() == _T("cba"));   