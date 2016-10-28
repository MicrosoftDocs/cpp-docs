   // typedef CStringT< TCHAR, StrTraitATL< TCHAR > > CAtlString;
   CAtlString s1(_T("dog")), s2(_T("f")), s3(_T("dog"));

   ASSERT(s1 == _T("dog"));
   ASSERT(s2 == _T('f'));
   ASSERT(s1 == s3);   