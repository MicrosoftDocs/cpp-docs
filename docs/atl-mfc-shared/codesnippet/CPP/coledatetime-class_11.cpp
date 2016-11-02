   COleDateTime t(1999, 3, 19, 22, 15, 0);  // 10:15PM March 19, 1999
   ASSERT(t.GetSecond() == 0);
   ASSERT(t.GetMinute() == 15);
   ASSERT(t.GetHour() == 22);   