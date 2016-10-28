   COleDateTime t;

   // this one is a leap year
   t.SetDateTime(2000, 2, 29, 5, 0, 0);
   ASSERT(t.GetStatus() == COleDateTime::valid);

   // this date isn't valid
   t.SetDateTime(1925, 2, 30, 5, 0, 0);
   ASSERT(t.GetStatus() == COleDateTime::invalid);

   // the only way to set null is to set null!
   t.SetStatus(COleDateTime::null);
   ASSERT(t.GetStatus() == COleDateTime::null);   