   CTimeSpan ts1(100);
   CTimeSpan ts2(110);
   ATLASSERT((ts1 != ts2) && (ts1 < ts2) && (ts1 <= ts2));   