   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString s1(_T("abc"));
   CAtlString s2(_T("abd"));
   ASSERT(s1.Compare(s2) < 0);    // Compare with another CAtlString.
   ASSERT(s1.Compare(_T("abe")) < 0); // Compare with LPTSTR string.   