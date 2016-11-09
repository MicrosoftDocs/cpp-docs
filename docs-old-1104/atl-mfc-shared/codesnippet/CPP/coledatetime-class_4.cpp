   time_t osBinaryTime;   // C run-time time (defined in <time.h>)
   time(&osBinaryTime);   // Get the current time from the 
                        // operating system.

   COleDateTime time1;   // initialized to 00:00am, 30 December 1899
                        // (and m_nStatus is valid!)

   COleDateTime time2 = time1; // Copy constructor
   COleDateTime time3(osBinaryTime);   // from time_t
   COleDateTime time4(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999

   SYSTEMTIME sysTime;   // Win32 time information
   GetSystemTime(&sysTime);

   COleDateTime time5(sysTime);    