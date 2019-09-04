
//create and initialize the font to be used
LOGFONT logFont = {0};
logFont.lfHeight = -12;
logFont.lfWeight = FW_NORMAL;
logFont.lfCharSet = DEFAULT_CHARSET;
_tcscpy_s(logFont.lfFaceName, _countof(logFont.lfFaceName),
          _T("Verdana"));

m_MonthCalFont.CreateFontIndirect(&logFont);
m_DateTimeCtrl.SetMonthCalFont(m_MonthCalFont);