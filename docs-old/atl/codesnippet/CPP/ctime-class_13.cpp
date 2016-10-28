   CTime t1(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   CTime t2(1999, 3, 20, 22, 15, 0); // 10:15 PM March 20, 1999
   CTimeSpan ts = t2 - t1;             // Subtract 2 CTimes
   ATLASSERT(ts.GetTotalSeconds() == 86400L);
   ATLASSERT((t1 + ts) == t2);       // Add a CTimeSpan to a CTime.
   ATLASSERT((t2 - ts) == t1);       // Subtract a CTimeSpan from a CTime.   