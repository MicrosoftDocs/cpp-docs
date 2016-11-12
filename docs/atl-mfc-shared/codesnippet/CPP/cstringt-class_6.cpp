   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s1(_T("abc"));
   CAtlString s2(_T("ABD"));
   ASSERT(s1.CompareNoCase(s2) < 0); // Compare with a CAtlString.
   ASSERT(s1.CompareNoCase(_T("ABE")) < 0); // Compare with LPTSTR string.   