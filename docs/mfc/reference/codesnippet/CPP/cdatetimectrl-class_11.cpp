// The following code example would most likely appear
// in the OnInitDialog function of your dialog class.
// It creates a font (Arial, 10 pixels high) and if successful,
// stores the result in m_MonthFont, a member of your
// dialog class declared as follows:
//    CFont m_MonthFont;
// SetMonthCalFont is then called passing in the new font,
// causing the month calendar control to display all
// text and dates with an Arial font.

//initializing the necessary members of the LOGFONT
// structure

LOGFONT lf;
memset(&lf, 0, sizeof(lf));
lf.lfHeight = 10;
_tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"));

if (m_MonthFont.CreateFontIndirect(&lf))
{
   // if successful, set the month calendar font
   m_DateTimeCtrl.SetMonthCalFont((HFONT)m_MonthFont);
}