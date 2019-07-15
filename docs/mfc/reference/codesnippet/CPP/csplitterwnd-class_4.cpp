void CChildFrame::OnSize(UINT nType, int cx, int cy)
{
   CMDIChildWnd::OnSize(nType, cx, cy);

   CRect rect;
   GetWindowRect(&rect);
   if (m_bSplitterCreated) // m_bSplitterCreated set in OnCreateClient
   {
      m_wndSplitter.SetColumnInfo(0, rect.Width() / 2, 10);
      m_wndSplitter.SetColumnInfo(1, rect.Width() / 2, 10);
      m_wndSplitter.RecalcLayout();
   }
}