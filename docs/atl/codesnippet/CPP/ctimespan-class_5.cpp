   CTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ATLASSERT(ts.GetHours() == 1);
   ATLASSERT(ts.GetMinutes() == 5);
   ATLASSERT(ts.GetSeconds() == 12);   