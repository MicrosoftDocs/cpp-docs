// This work isn't normally necessary, since the control will set
// the day of the week to match the system locale by itself.

// Ask the system for the first day of the week
TCHAR sz[2];
GetLocaleInfo(LOCALE_SYSTEM_DEFAULT, LOCALE_IFIRSTDAYOFWEEK, sz, 2);

// Convert from string result
int nFirstDay = _ttoi(sz);

// Set it and assert that it was successful.
m_calCtrl1.SetFirstDayOfWeek(nFirstDay);
ASSERT(m_calCtrl1.GetFirstDayOfWeek() == nFirstDay);