void CMonthCalDlg::OnBnClickedDaystatebutton()
{
   // First, we must find the visible range. The array we pass to the
   // SetDayState() function must be large enough to hold days for all
   // of the visible months. Even if a month is _partially_ visible,
   // we must have MONTHDAYSTATE data for it in the array we pass.
   // GetMonthRange() returns the range of days currently visible in
   // the control, along with a count of visible months. This array
   // will be up to 2 months larger than the number of "pages" visible
   // in the control.

   SYSTEMTIME timeFrom;
   SYSTEMTIME timeUntil;
   int nCount = m_calCtrl1.GetMonthRange(&timeFrom, &timeUntil, GMR_DAYSTATE);

   // Allocate the state array based on the return value.

   LPMONTHDAYSTATE pDayState;
   pDayState = new MONTHDAYSTATE[nCount];
   memset(pDayState, 0, sizeof(MONTHDAYSTATE) * nCount);

   // Find the first fully visible month.

   int nIndex = (timeFrom.wDay == 1) ? 0 : 1;

   // Set the 4th day, 19th day, and 26th day of the first
   // _fully_ visible month as bold.

   pDayState[nIndex] |= 1 << 3;  // 4th day
   pDayState[nIndex] |= 1 << 18; // 19th day
   pDayState[nIndex] |= 1 << 25; // 25th day

   // Set state and clean up

   VERIFY(m_calCtrl1.SetDayState(nCount, pDayState));
   delete[] pDayState;
}