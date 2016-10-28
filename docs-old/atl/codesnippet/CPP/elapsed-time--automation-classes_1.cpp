   COleDateTime timeStart, timeEnd;
   timeStart = COleDateTime::GetCurrentTime();
   // ... perform time-consuming task
   timeEnd = COleDateTime::GetCurrentTime();
   COleDateTimeSpan spanElapsed = timeEnd - timeStart;   