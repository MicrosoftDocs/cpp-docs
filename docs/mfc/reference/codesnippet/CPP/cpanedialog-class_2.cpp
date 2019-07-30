// The this pointer points to a CMainFrame class which extends the CFrameWnd class.
if (!m_wndDlgBar.Create(_T("DialogBar"), this, TRUE,
                        MAKEINTRESOURCE(IDD_DLG_BAR),
                        WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT | CBRS_FLOAT_MULTI,
                        ID_VIEW_DLGBAR))
{
   TRACE0("Failed to create Dialog Bar\n");
   return FALSE; // fail to create
}