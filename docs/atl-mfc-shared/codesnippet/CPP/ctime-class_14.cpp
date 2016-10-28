   CTime t(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   t += CTimeSpan(0, 1, 0, 0);      // 1 hour exactly
   ATLASSERT(t.GetHour() == 23);   