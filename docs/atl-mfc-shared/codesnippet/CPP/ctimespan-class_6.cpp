   CTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ATLASSERT(ts.GetTotalHours() == 73);
   ATLASSERT(ts.GetTotalMinutes() == 4385);
   ATLASSERT(ts.GetTotalSeconds() == 263112);   