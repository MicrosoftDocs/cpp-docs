   COleDateTime t1(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999
   COleDateTime t2(1999, 3, 20, 22, 15, 0); // 10:15PM March 20, 1999

   // Subtract 2 COleDateTimes
   COleDateTimeSpan ts = t2 - t1;

   // one day is 24 * 60 * 60 == 86400 seconds
   ASSERT(ts.GetTotalSeconds() == 86400L);

   // Add a COleDateTimeSpan to a COleDateTime.
   ASSERT((t1 + ts) == t2);

   // Subtract a COleDateTimeSpan from a COleDateTime.
   ASSERT((t2 - ts) == t1);   