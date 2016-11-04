   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.FindOneOf(_T("xd")) == 3); // 'd' is first match   