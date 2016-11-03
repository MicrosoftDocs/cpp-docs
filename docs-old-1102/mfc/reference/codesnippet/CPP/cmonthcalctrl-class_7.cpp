void CMonthCalDlg::OnBnClickedGettodaybutton()
{
   COleDateTime timeToday;
   if (m_calCtrl1.GetToday(timeToday))
   {
      // Format the date information from the value we received
      // and post a message box about it.
      CString str = timeToday.Format(VAR_DATEVALUEONLY);
      AfxMessageBox(str);

      // Set the control's "today" indicator to be five
      // days previous.
      timeToday -= 5;
      m_calCtrl1.SetToday(timeToday);
   }
   else
   {
      // Something is wrong!
      ASSERT(FALSE);
   }
}