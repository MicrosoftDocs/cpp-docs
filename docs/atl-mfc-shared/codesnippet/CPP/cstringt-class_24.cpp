   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString s1(_T("dog ")), s2(_T(" awake")), s3;  // Empty CAtlString objects

   s1= _T("The ") + s1;
   s3= s1 + _T('i');
   s3= s3 + _T('s');
   s3= s3 + s2;
   ASSERT(s3 == _T("The dog is awake"));   