   CTime startTime = CTime::GetCurrentTime();

   // ... perform time-consuming task ...

   CTime endTime = CTime::GetCurrentTime();

   CTimeSpan elapsedTime = endTime - startTime;   