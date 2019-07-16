// This code fragment sets a variety of ranges in the
// control, and calls a separate function to show the
// set range to the user.

void CMonthCalDlg::OnBnClickedRangebutton()
{
   // set minimum of January 1st, 1995 with no maximum
   COleDateTime dtMin;
   COleDateTime dtMax;

   dtMin = COleDateTime(1995, 1, 1, 0, 0, 0);
   dtMax.SetStatus(COleDateTime::null);
   m_calCtrl1.SetRange(&dtMin, &dtMax);
   ShowRange(&m_calCtrl1);

   // set no minimum and a maximum of September 30th, 1997
   dtMin.SetStatus(COleDateTime::null);
   dtMax = COleDateTime(1997, 9, 30, 0, 0, 0);
   m_calCtrl1.SetRange(&dtMin, &dtMax);
   ShowRange(&m_calCtrl1);

   // set minimum of April 15, 1992 and maximum of June 5, 2002
   dtMin = COleDateTime(1992, 4, 15, 0, 0, 0);
   dtMax = COleDateTime(2002, 6, 5, 0, 0, 0);
   m_calCtrl1.SetRange(&dtMin, &dtMax);
   ShowRange(&m_calCtrl1);
}

void CMonthCalDlg::ShowRange(CMonthCalCtrl *pMoCalCtrl)
{
   ASSERT(pMoCalCtrl != NULL);
   CString strMessage;
   COleDateTime dtMinimum;
   COleDateTime dtMaximum;

   // Get the range
   DWORD dwResult = pMoCalCtrl->GetRange(&dtMinimum, &dtMaximum);

   // If a minimum was specified, format it
   // otherwise, indicate that there is no lower bound
   if (dwResult & GDTR_MIN)
      strMessage += dtMinimum.Format(_T("Minimum range is %x %X.\r\n"));
   else
      strMessage += _T("No minimum range.\r\n");

   // Treat maximum similarly
   if (dwResult & GDTR_MAX)
      strMessage += dtMaximum.Format(_T("Maximum range is %x %X.\r\n"));
   else
      strMessage += _T("No maximum range.\r\n");

   // Show the user
   AfxMessageBox(strMessage);
}