   // Example for CTime::GetHour, CTime::GetMinute, and CTime::GetSecond
   CTime t(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   ATLASSERT(t.GetSecond() == 0);
   ATLASSERT(t.GetMinute() == 15);
   ATLASSERT(t.GetHour() == 22);   