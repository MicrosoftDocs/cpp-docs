   CTime t(1999, 3, 19, 22, 15, 0); 
   // 10:15 PM March 19, 1999
   CString s = t.Format(_T("%A, %B %d, %Y"));
   ATLASSERT(s == _T("Friday, March 19, 1999"));   