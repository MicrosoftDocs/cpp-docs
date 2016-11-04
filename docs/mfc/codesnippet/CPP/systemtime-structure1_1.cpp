      // Retrieves the current system date and time.  The system 
      // time is expressed in Coordinated Universal Time (UTC). 
      SYSTEMTIME systime;
      GetSystemTime(&systime);

      // Determine day of the week.
      CString day;
      switch (systime.wDayOfWeek)
      {
         case 0:
            day = _T("Sunday");
         break;

         case 1:
            day = _T("Monday");
         break;

         case 2:
            day = _T("Tuesday");
         break;

         case 3:
            day = _T("Wednesday");
         break;

         case 4:
            day = _T("Thursday");
         break;

         case 5:
            day = _T("Friday");
         break;

         case 6:
            day = _T("Saturday");
         break;
      }

      // Show the time in a message box.
      CString str;
      str.Format(_T("%s %u/%u/%u  %u:%u:%u:%u"), day,
         systime.wYear, systime.wMonth, systime.wDay,
         systime.wHour, systime.wMinute, systime.wSecond,
         systime.wMilliseconds);

      AfxMessageBox(str);