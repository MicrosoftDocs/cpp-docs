void CMonthCalDlg::OnBnClickedCurselbutton()
{
   // All of these calls set the current selection to March 15, 1998.

   // with a COleDateTime
   COleDateTime dt1(1998, 3, 15, 0, 0, 0);
   m_calCtrl1.SetCurSel(dt1);

   // with a CTime
   CTime dt2(1998, 3, 15, 0, 0, 0);
   m_calCtrl1.SetCurSel(dt2);

   // with a SYSTEMTIME structure

   SYSTEMTIME sysTime;

   // set everything to zero
   memset(&sysTime, 0, sizeof(sysTime));

   // except for the date we want
   sysTime.wYear = 1998;
   sysTime.wMonth = 3;
   sysTime.wDay = 15;

   m_calCtrl1.SetCurSel(&sysTime);
}