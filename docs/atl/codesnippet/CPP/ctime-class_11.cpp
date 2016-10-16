   CTime t(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999
   tm osTime;  // A structure containing time elements.
   t.GetLocalTm(&osTime);
   ATLASSERT(osTime.tm_mon == 2); // Note zero-based month!   