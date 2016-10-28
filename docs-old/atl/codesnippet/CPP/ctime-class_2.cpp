   time_t osBinaryTime;  // C run-time time (defined in <time.h>)
   time(&osBinaryTime) ;  // Get the current time from the 
                            // operating system.
   CTime time1; // Empty CTime. (0 is illegal time value.)
   CTime time2 = time1; // Copy constructor.
   CTime time3(osBinaryTime);  // CTime from C run-time time
   CTime time4(1999, 3, 19, 22, 15, 0); // 10:15PM March 19, 1999   