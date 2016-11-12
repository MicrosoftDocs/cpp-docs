   // Print out the day of the week using localized day name
   UINT DayOfWeek[] = {
      LOCALE_SDAYNAME7,   // Sunday
      LOCALE_SDAYNAME1,   
      LOCALE_SDAYNAME2,
      LOCALE_SDAYNAME3,
      LOCALE_SDAYNAME4, 
      LOCALE_SDAYNAME5, 
      LOCALE_SDAYNAME6   // Saturday
   };
   TCHAR strWeekday[256];
   CTime time(CTime::GetCurrentTime());   // Initialize CTime with current time
   ::GetLocaleInfo(LOCALE_USER_DEFAULT,   // Get string for day of the week from system
      DayOfWeek[time.GetDayOfWeek()-1],   // Get day of week from CTime
      strWeekday, sizeof(strWeekday) / sizeof(strWeekday[0]));
   ATLTRACE(_T("%s\n"), strWeekday);               // Print out day of the week   