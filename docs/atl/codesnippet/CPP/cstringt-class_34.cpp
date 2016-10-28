   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcabc"));
   ASSERT(s.ReverseFind(_T('b')) == 4);   