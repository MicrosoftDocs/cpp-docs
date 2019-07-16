void CDateTimeDlg::OnDropDownDateTimeCtrl(NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(pNMHDR);

   // note that GetMonthCalCtrl() will only return a pointer to the
   // month calendar control while the control actually exists--that is,
   // while it has been dropped-down by the user. Otherwise, the function
   // returns NULL. One appropriate time to get the control is while
   // handling the DTN_DROPDOWN notification for the date time picker
   // control.

   // get the control
   CMonthCalCtrl *pMoCalCtrl = m_DateTimeCtrl.GetMonthCalCtrl();
   ASSERT(pMoCalCtrl != NULL);

   // now, pMoCalCtrl is useful...

   *pResult = 0;
}