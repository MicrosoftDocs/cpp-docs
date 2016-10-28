   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString str;
   int nAsked = 5;
   int nAgree = 4;

   str.FormatMessage(_T("%1!d! of %2!d! writers agree: Soccer is %3%!"), 
      nAgree, nAsked, _T("Best"));
   ASSERT(str == _T("4 of 5 writers agree: Soccer is Best!"));   