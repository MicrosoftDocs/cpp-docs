   COleDateTimeSpan spanOne(2.75);          // 2 days and 18 hours
   COleDateTimeSpan spanTwo(2, 18, 0, 0);   // 2 days and 18 hours
   COleDateTimeSpan spanThree(3, -6, 0, 0); // 2 days and 18 hours

   COleDateTimeSpan ts1;               // Uninitialized time value
   COleDateTimeSpan ts2a(ts1);         // Copy constructor
   COleDateTimeSpan ts2b = ts1;         // Copy constructor again
   COleDateTimeSpan ts3(100.0);          // 100 days
   COleDateTimeSpan ts4(0, 1, 5, 12);   // 1 hour, 5 minutes, and 12 seconds