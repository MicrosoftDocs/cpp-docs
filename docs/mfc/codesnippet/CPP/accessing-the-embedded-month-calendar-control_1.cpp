void CMyDialog::OnDtnDropdownDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult)
{
   UNREFERENCED_PARAMETER(pNMHDR);

   //set the background color of the month to gray
   COLORREF clr = RGB(100, 100, 100);

   m_DateTimeCtrl.SetMonthCalColor(MCSC_MONTHBK, clr);

   *pResult = 0;
}