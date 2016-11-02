void CMyDlg::OnFindCenterChild() 
{
   CRect rect;
   GetClientRect(&rect);
   CWnd* pWnd = ChildWindowFromPoint(
      CPoint(rect.Width()/2, rect.Height()/2), 
      // Top left is always 0, 0.
      CWP_SKIPINVISIBLE);
   TRACE(_T("Center window is 0x%08x\n"), pWnd->m_hWnd);
}