   CTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   CString s = ts.Format(_T("Total days: %D, hours: %H, mins: %M, secs: %S"));
   ATLASSERT(s == _T("Total days: 3, hours: 01, mins: 05, secs: 12"));   