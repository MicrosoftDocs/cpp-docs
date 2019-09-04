void CMyDialog::OnDtnFormatDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult)
{
   LPNMDATETIMEFORMAT pDTFormat = reinterpret_cast<LPNMDATETIMEFORMAT>(pNMHDR);

   COleDateTime oCurTime;

   m_DateTimeCtrl.GetTime(oCurTime);

   _itot_s(oCurTime.GetDayOfYear(), pDTFormat->szDisplay,
           sizeof(pDTFormat->szDisplay) / sizeof(TCHAR), 10);

   *pResult = 0;
}