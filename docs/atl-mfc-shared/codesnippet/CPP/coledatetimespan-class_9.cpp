   COleDateTimeSpan ts(3, 1, 5, 12); // 3 days, 1 hour, 5 min, and 12 sec
   ASSERT(ts.GetTotalDays() == 3);
   ASSERT(ts.GetTotalHours() == 73);
   ASSERT(ts.GetTotalMinutes() == 4385);
   ASSERT(ts.GetTotalSeconds() == 263112);   