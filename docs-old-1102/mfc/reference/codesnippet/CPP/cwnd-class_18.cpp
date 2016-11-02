// Dynamically create static control using CWnd::Create,
// instead of with CStatic::Create, which doesn't
// need the "STATIC" class name.
void CMyDlg::OnCreateStatic() 
{
   // m_pWndStatic is a CWnd* member of CMyDlg
   m_pWndStatic = new CWnd;
   m_pWndStatic->Create(_T("STATIC"), _T("Hi"), WS_CHILD | WS_VISIBLE,
       CRect(0, 0, 20, 20), this, 1234);
}