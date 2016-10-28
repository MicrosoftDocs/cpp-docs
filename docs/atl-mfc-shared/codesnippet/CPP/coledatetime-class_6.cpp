   COleDateTime t = COleDateTime::GetCurrentTime();
   DBTIMESTAMP ts;
   t.GetAsDBTIMESTAMP(ts); // retrieves the time in t into the ts structure