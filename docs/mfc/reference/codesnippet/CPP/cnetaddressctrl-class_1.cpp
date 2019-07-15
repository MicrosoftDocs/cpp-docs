void CCNetAddressCtrl_s1Dlg::OnBnClickedRadio1()
{
   m_netAddr.SetAllowType(NET_STRING_IPV4_ADDRESS);
}

void CCNetAddressCtrl_s1Dlg::OnBnClickedRadio2()
{
   m_netAddr.SetAllowType(NET_STRING_IPV6_ADDRESS);
}

void CCNetAddressCtrl_s1Dlg::OnBnClickedRadio3()
{
   m_netAddr.SetAllowType(NET_STRING_NAMED_ADDRESS);
}

void CCNetAddressCtrl_s1Dlg::OnBnClickedButton1()
{
   m_na.pAddrInfo = &m_nai;
   HRESULT rslt = m_netAddr.GetAddress(&m_na);
   if (rslt != S_OK)
      m_netAddr.DisplayErrorTip();
   else
   {
      MessageBox(
          _T("Success!"), _T("Validation Results"));
   }