   // The string can be delimited by a semicolon(;),
   //  a comma(,), a period(.), a dash(-),
   // or an apostrophe(').
   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;

   CAtlString src(_T("abcdef"));

   _tprintf_s(_T("%s"),src.SpanExcluding(_T(";,.-'")));