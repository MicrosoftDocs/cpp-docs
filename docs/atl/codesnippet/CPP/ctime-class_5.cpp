   // Convert CTime to FILETIME
   CTime time(CTime::GetCurrentTime());
   SYSTEMTIME timeDest;
   time.GetAsSystemTime(timeDest);
   FILETIME fileTime;
   ::SystemTimeToFileTime(&timeDest, &fileTime);   