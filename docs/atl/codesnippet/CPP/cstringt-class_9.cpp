   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s(_T("abcdef"));
   ASSERT(s.Find(_T('c')) == 2);
   ASSERT(s.Find(_T("de")) == 3);

   CAtlString str(_T("The waves are still"));
   int n = str.Find(_T('e'), 5);
   ASSERT(n == 7);   