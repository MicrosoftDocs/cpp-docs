    // get the current time
    COleDateTime tmStart = COleDateTime::GetCurrentTime();

    // waste some time
    CString str;
    ::Sleep(3000);

    // get the current time again
    COleDateTime tmFinish = COleDateTime::GetCurrentTime();

    // find the difference
    COleDateTimeSpan tmSpan = tmFinish - tmStart;

    // tell the user
    str = tmSpan.Format(_T("%S seconds elapsed"));
    _tprintf_s(_T("%s\n"), (LPCTSTR) str);