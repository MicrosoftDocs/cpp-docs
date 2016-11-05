   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString strBang(_T("Everybody likes epee fencing"));
   int n = strBang.Replace(_T("epee"), _T("foil"));
   ASSERT(n == 1);   