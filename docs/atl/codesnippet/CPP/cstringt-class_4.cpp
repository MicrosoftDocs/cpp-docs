   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str1 = _T("Co-Op");
   CAtlString str2 = _T("con");

   int n;

   // Collation uses language rules, such as ignoring dashes.
   // NoCase version ignores case.
   n = str1.CollateNoCase(str2);
   ASSERT(n < 0);

   // Comparison is a strict ASCII comparison with no language rules
   // but still ignores case in NoCase version.
   n = str1.CompareNoCase(str2);
   ASSERT(n < 0);   