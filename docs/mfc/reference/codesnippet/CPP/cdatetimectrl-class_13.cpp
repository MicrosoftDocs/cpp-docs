// set with a CTime
CTime timeTime(1998, 4, 3, 0, 0, 0);
VERIFY(m_DateTimeCtrl.SetTime(&timeTime));

// set with a COleDateTime object
COleDateTime oletimeTime(1998, 4, 3, 0, 0, 0);
VERIFY(m_DateTimeCtrl.SetTime(oletimeTime));

// set using the SYSTEMTIME
SYSTEMTIME sysTime;
memset(&sysTime, 0, sizeof(sysTime));
sysTime.wYear = 1998;
sysTime.wMonth = 4;
sysTime.wDay = 3;
VERIFY(m_DateTimeCtrl.SetTime(&sysTime));