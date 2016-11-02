   // typedef CStringT<TCHAR, StrTraitATL<TCHAR, ChTraitsCRT<TCHAR>>> CAtlString;
   CAtlString str(_T("%First Second#Third"));
   CAtlString resToken;
   int curPos = 0;

   resToken= str.Tokenize(_T("% #"),curPos);
   while (resToken != _T(""))
   {
      _tprintf_s(_T("Resulting token: %s\n"), resToken);
      resToken = str.Tokenize(_T("% #"), curPos);
   };   