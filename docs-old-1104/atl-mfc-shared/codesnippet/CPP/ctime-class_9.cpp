   // Compute difference between local time and GMT
   CTime time(CTime::GetCurrentTime());
   tm t1, t2;
   time.GetLocalTm(&t1);
   time.GetGmtTm(&t2);

   ATLTRACE(_T("Difference between local time and GMT is %d hours.\n"), 
      t1.tm_hour - t2.tm_hour);   