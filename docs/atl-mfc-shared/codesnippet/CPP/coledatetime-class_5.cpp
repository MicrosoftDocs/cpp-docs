   COleDateTime t(1999, 3, 19, 22, 15, 0);

   CString str = t.Format(_T("%A, %B %d, %Y"));
   ASSERT(str == _T("Friday, March 19, 1999"));   