   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str(_T("cabbage"));
   CAtlString res = str.SpanIncluding(_T("abc"));
   ASSERT(res == _T("cabba"));
   res = str.SpanIncluding(_T("xyz"));
   ASSERT(res.IsEmpty());   