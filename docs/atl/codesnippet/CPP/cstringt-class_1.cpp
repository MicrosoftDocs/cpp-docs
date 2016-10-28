   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString str(_T("This is a test string!"));
   BSTR bstr = str.AllocSysString();

   // bstr now contains "This is a test string!", and can be
   // passed to any OLE function requiring a BSTR.
   // Normally, if you pass the BSTR, you will
   // need to free the string after returning from the function call.   