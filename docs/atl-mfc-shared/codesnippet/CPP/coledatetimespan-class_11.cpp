   COleDateTimeSpan ts1(10.0); // 10 days
   COleDateTimeSpan ts2(100.0); // 100 days
   ts2 -= ts1;
   ASSERT(ts2.GetTotalDays() == 90);   