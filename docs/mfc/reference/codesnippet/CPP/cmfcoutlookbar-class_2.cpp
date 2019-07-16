// int nInitialWidth
// CString strCaption
if (!m_wndShortcutsBar.Create(strCaption, this,
                              CRect(0, 0, nInitialWidth, nInitialWidth),
                              ID_VIEW_OUTLOOKBAR, WS_CHILD | WS_VISIBLE | CBRS_LEFT))
{
   TRACE0("Failed to create outlook bar\n");
   return FALSE; // fail to create
}