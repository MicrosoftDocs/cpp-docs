   CTimeSpan ts1(10); // 10 seconds
   CTimeSpan ts2(100); // 100 seconds
   ts2 -= ts1;
   ATLASSERT(ts2.GetTotalSeconds() == 90);   