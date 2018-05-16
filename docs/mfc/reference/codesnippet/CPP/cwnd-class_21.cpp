void CMyDlg::OnCreateExtendedControl() 
{
   // m_pWndStaticEx is a CWnd* member of CMyDlg
   m_pWndStaticEx = new CStatic;
   m_pWndStaticEx->CreateEx(WS_EX_CLIENTEDGE, // Make a client edge label.
      _T("STATIC"), _T("Hi"),
      WS_CHILD | WS_TABSTOP | WS_VISIBLE,
      5, 5, 30, 30, m_hWnd, (HMENU)2345);
}