   CTimeSpan ts1;  // Uninitialized time value
   CTimeSpan ts2a(ts1); // Copy constructor
   CTimeSpan ts2b = ts1; // Copy constructor again
   CTimeSpan ts3(100); // 100 seconds
   CTimeSpan ts4(0, 1, 5, 12);    // 1 hour, 5 minutes, and 12 seconds   