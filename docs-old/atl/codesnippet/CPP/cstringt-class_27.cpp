   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("f")), s3(_T("horse"));

   ASSERT(s1 != _T("dog"));
   ASSERT(s2 != _T('t'));
   ASSERT(s1 != s2);   