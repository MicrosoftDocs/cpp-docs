   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("cats")), s3(_T("dogs"));

   ASSERT(s1 <= _T("dog"));
   ASSERT(s1 <= _T("cat"));
   ASSERT(s3 <= _T("dogs and cats"));
   ASSERT(s2 <= s3);   