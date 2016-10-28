   CTime t = CTime::GetCurrentTime();
   DBTIMESTAMP ts;
   t.GetAsDBTIMESTAMP(ts); // Retrieves the time in t into the ts structure