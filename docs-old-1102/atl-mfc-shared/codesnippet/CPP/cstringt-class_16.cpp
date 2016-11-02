   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString EnvStr;

   EnvStr.GetEnvironmentVariable(_T("TEMP"));
   _tprintf_s(_T("Current value of TEMP variable: %s\n"), EnvStr);