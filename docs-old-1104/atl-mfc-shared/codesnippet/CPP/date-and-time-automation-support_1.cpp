void CDTDlg::OnPaint()
{
   CPaintDC dc(this); // device context for painting

   time_t date1_t, date2_t;
   tm date_tm;

   date_tm.tm_hour = 12;
   date_tm.tm_min = 0;
   date_tm.tm_mon = 3;
   date_tm.tm_sec = 0;
   date_tm.tm_wday = 0; //Day of week (0-6; Sunday = 0)
   date_tm.tm_yday = 0;
   date_tm.tm_year = 97;
   date_tm.tm_isdst = -1; //Positive if Daylight Saving Time is in effect;
                         //0 if Daylight Saving Time is not in effect; 
                         //Negative if status of DST is unknown.

   date_tm.tm_mday = 6;
   date2_t = mktime(&date_tm);

   date_tm.tm_mday = 5;
   date_tm.tm_isdst = 0;
   date1_t = mktime(&date_tm);

   CTime time1(date1_t), time2(date2_t);
   CTimeSpan ts = time2 - time1;

   dc.TextOut(0, 0, CString(_T("CTime")));
   dc.TextOut(0, 20, time1.Format(_T("%H:%M:%S %A, %B %d, %Y")));
   dc.TextOut(0, 40, time2.Format(_T("%H:%M:%S %A, %B %d, %Y")));
   dc.TextOut(0, 60, ts.Format(_T("%H:%M:%S and %D days")));


   COleDateTime oletime1(date1_t), oletime2(date2_t);
   COleDateTimeSpan olets = oletime2 - oletime1;

   dc.TextOut(0, 120, CString(_T("COleDateTime")));
   dc.TextOut(0, 140, oletime1.Format(_T("%H:%M:%S %A, %B %d, %Y")));
   dc.TextOut(0, 160, oletime2.Format(_T("%H:%M:%S %A, %B %d, %Y")));
   
   //Work-around bug in COleDateTime::Format("%D")
   CString str;
   str.Format(_T("%s and %d days"), (LPCTSTR)olets.Format(_T("%H:%M:%S")), 
      olets.GetDays());
   dc.TextOut(0, 180, str);
}