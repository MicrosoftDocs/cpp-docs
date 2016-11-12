   CAtlString str = _T("Some Data");
   str.Format(_T("%s%d"), str, 123);   
   // Attention: str is also used in the parameter list.   