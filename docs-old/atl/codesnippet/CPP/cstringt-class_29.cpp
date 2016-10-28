   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("cat")), s2(_T("cats")), s3(_T("dogs"));
   ASSERT(_T("dog") > s1);
   ASSERT(_T("cats") > s1);
   ASSERT(_T("cats and dogs") > s2);
   ASSERT(s3 > s2);   