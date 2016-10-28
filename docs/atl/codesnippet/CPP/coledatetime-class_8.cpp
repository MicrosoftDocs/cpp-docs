   COleDateTime t(1999, 3, 19, 22, 15, 0);  // 10:15PM March 19, 1999
   ASSERT(t.GetDay() == 19);
   ASSERT(t.GetMonth() == 3);
   ASSERT(t.GetYear() == 1999);   