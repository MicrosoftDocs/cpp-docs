   CTime t1 = CTime::GetCurrentTime();
   CTime t2 = t1 + CTimeSpan(0, 1, 0, 0);    // 1 hour later
   ATLASSERT(t1 != t2);
   ATLASSERT(t1 < t2);
   ATLASSERT(t1 <= t2);   