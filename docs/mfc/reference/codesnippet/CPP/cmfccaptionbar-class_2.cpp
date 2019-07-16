BOOL CMainFrame::CreateMessageBar()
{
   // The this pointer points to a CMainFrame class which extends the CFrameWndEx class.
   if (!m_wndMessageBar.Create(WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS, this, ID_VIEW_MESSAGEBAR, -1, TRUE))
   {
      TRACE0("Failed to create caption bar\n");
      return FALSE;
   }

   m_wndMessageBar.SetFlatBorder(FALSE);
   m_wndMessageBar.SetMargin(10);
   m_wndMessageBar.SetButton(_T("Options..."), ID_TOOLS_OPTIONS, CMFCCaptionBar::ALIGN_LEFT, FALSE);
   m_wndMessageBar.SetButtonToolTip(_T("Click here to see more options"));

   m_wndMessageBar.SetText(_T("Welcome to the MFC MSOffice2007 demonstration!"), CMFCCaptionBar::ALIGN_LEFT);

   m_wndMessageBar.SetBitmap(IDB_INFO, RGB(255, 255, 255), FALSE, CMFCCaptionBar::ALIGN_LEFT);
   m_wndMessageBar.SetImageToolTip(_T("Important"), _T("Please take a look at MSOffice2007Demo source code to learn how to create advanced user interface in minutes."));

   return TRUE;
}