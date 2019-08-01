// This function will set several ranges in the control, then
// call the ShowRange() function to show the set ranges to the
// user.
void CDateTimeDlg::OnBnClickedRangesbutton()
{
   // Set minimum of January 1st, 1995 with no maximum.
   COleDateTime dtMin;
   COleDateTime dtMax;

   dtMin = COleDateTime(1995, 1, 1, 0, 0, 0);
   dtMax.SetStatus(COleDateTime::null);
   m_DateTimeCtrl.SetRange(&dtMin, &dtMax);
   ShowRange(&m_DateTimeCtrl);

   // Set no minimum and maximum of September 30th, 1997.
   dtMin.SetStatus(COleDateTime::null);
   dtMax = COleDateTime(1997, 9, 30, 0, 0, 0);
   m_DateTimeCtrl.SetRange(&dtMin, &dtMax);
   ShowRange(&m_DateTimeCtrl);

   // Set minimum of April 15, 1992 and maximum of June 5, 2002.
   dtMin = COleDateTime(1992, 4, 15, 0, 0, 0);
   dtMax = COleDateTime(2002, 6, 5, 0, 0, 0);
   m_DateTimeCtrl.SetRange(&dtMin, &dtMax);
   ShowRange(&m_DateTimeCtrl);
}

void CDateTimeDlg::ShowRange(CDateTimeCtrl *pCtrl)
{
   ASSERT(pCtrl != NULL);
   CString strMessage;
   COleDateTime dtMinimum;
   COleDateTime dtMaximum;

   // Get the range.
   DWORD dwResult = pCtrl->GetRange(&dtMinimum, &dtMaximum);

   // If a minimum was specified, format it.
   // Otherwise, indicate that there is no lower bound.
   if (dwResult & GDTR_MIN)
      strMessage += dtMinimum.Format(_T("Minimum range is %x %X.\r\n"));
   else
      strMessage += _T("No minimum range.\r\n");

   // Treat maximum similarly.
   if (dwResult & GDTR_MAX)
      strMessage += dtMaximum.Format(_T("Maximum range is %x %X.\r\n"));
   else
      strMessage += _T("No maximum range.\r\n");

   // Show the user.
   AfxMessageBox(strMessage);
}