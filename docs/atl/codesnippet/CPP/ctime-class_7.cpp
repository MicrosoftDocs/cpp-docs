   // Example for CTime::GetDay, CTime::GetMonth, and CTime::GetYear
   CTime t(1999, 3, 19, 22, 15, 0); // 10:15 PM March 19, 1999
   ATLASSERT(t.GetDay() == 19);
   ATLASSERT(t.GetMonth() == 3);
   ATLASSERT(t.GetYear() == 1999);