WCHAR name[26];
name[0] = _T('\0');
MCGRIDINFO gridInfo;
gridInfo.cbSize = sizeof(MCGRIDINFO);
gridInfo.dwPart = MCGIP_CALENDARHEADER;
gridInfo.dwFlags = MCGIF_NAME;
gridInfo.iCalendar = 0;
gridInfo.pszName = reinterpret_cast<PWSTR>(&name);
gridInfo.cchName = sizeof(name);

m_monthCalCtrl.GetCalendarGridInfo(&gridInfo);

CString str;
CString calendarDate(name);
str.Format(_T("Calendar date: '%s'"), calendarDate);
AfxMessageBox(str, MB_ICONINFORMATION);