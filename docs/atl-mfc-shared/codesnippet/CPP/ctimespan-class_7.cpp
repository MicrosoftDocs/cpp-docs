   CTimeSpan ts1(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   CTimeSpan ts2(100); // 100 seconds
   CTimeSpan ts3 = ts1 + ts2;
   ATLASSERT(ts3.GetSeconds() == 52); // 6 mins, 52 secs   