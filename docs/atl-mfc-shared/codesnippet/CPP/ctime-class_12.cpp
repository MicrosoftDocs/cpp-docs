   CTime t(2005, 10, 20, 23, 50, 0); // 11:50 PM October 20, 2005
   time_t osBinaryTime = t.GetTime();  // time_t defined in <time.h>

   _tprintf_s(_T("time_t = %ld\n"), osBinaryTime);