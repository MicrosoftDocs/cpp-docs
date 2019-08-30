// CMainFrame is application-defined object of type CFrameWnd
CMainFrame::CMainFrame()
    : m_hDrawMenu(NULL), m_hDrawAccel(NULL), m_bCheck(false), m_nWindowTimer(0), m_nCallbackTimer(0)
{
   // Set to FALSE so no ON_UPDATE_COMMAND_UI
   // or ON_COMMAND handlers are needed, and
   // CMenu::EnableMenuItem() will work as expected.
   m_bAutoMenuEnable = FALSE;
}