   COleDateTimeSpan ts1(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   COleDateTimeSpan ts2(100.0 / (24 * 3600.0)); // 100 seconds
   COleDateTimeSpan ts3 = ts1 + ts2;
   ASSERT(ts3.GetSeconds() == 52); // 6 mins, 52 secs   