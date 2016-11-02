   COleDateTimeSpan ts1(100.0);   // one hundred days
   COleDateTimeSpan ts2(110.0);   // ten more days

   ASSERT((ts1 != ts2) && (ts1 < ts2) && (ts1 <= ts2));   