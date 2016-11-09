   // set only the date, time set to midnight
   dt.SetDate(1999, 3, 19);
   ASSERT(dt.GetYear() == 1999);
   ASSERT(dt.GetDay() == 19);
   ASSERT(dt.GetMonth() == 3);
   ASSERT(dt.GetHour() == 0);
   ASSERT(dt.GetMinute() == 0);
   ASSERT(dt.GetSecond() == 0);

   // setting the time only resets the date to 1899!
   dt.SetTime(22, 15, 0);
   ASSERT(dt.GetYear() == 1899);
   ASSERT(dt.GetDay() == 30);
   ASSERT(dt.GetMonth() == 12);
   ASSERT(dt.GetHour() == 22);
   ASSERT(dt.GetMinute() == 15);
   ASSERT(dt.GetSecond() == 0);   