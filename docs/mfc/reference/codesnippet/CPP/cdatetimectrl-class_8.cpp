void CDateTimeDlg::OnBnClickedTimebutton()
{
   // get as a CTime
   CTime timeTime;
   DWORD dwResult = m_DateTimeCtrl.GetTime(timeTime);
   if (dwResult == GDT_VALID)
   {
      // the user checked the box and specified data
      CString str;

      // is it a time-only control, or a date-only control?
      if ((m_DateTimeCtrl.GetStyle() & DTS_TIMEFORMAT) == DTS_TIMEFORMAT)
         str = timeTime.Format(_T("%X"));
      else
         str = timeTime.Format(_T("%x"));
      AfxMessageBox(str);
   }
   else
   {
      // the user unmarked the "none" box
      AfxMessageBox(_T("Time not set!"));
   }

   // Calling as SYSTIME is much the same, but calling for a COleDateTime
   // has us test the state of the COleDateTime object for validity to
   // see if the user did or didn't check the "none" box.
}