// Set the style of the month-calendar control dropdown.
void CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleWeeknumber()
{
   m_dateTimeCtrl.SetMonthCalStyle(MCS_WEEKNUMBERS);
}

void CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleNotoday()
{
   m_dateTimeCtrl.SetMonthCalStyle(MCS_NOTODAY);
}

void CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleShortdaysofweek()
{
   m_dateTimeCtrl.SetMonthCalStyle(MCS_SHORTDAYSOFWEEK);
}