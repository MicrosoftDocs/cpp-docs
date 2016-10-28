// This example uses the CWnd::IsWindowVisible() function to
// determine if a dialog box is visible. If it is not, it calls
// CWnd::ShowWindow with the SW_SHOWNORMAL command.
void CMainFrame::DisplayModeless()
{
   if(!m_Modeless.IsWindowVisible())
   {
      m_Modeless.ShowWindow(SW_SHOWNORMAL);
   }
}

// This example uses the CWnd::IsWindowVisible() function to
// determine if a dialog box is visible. If it is, it calls
// CWnd::ShowWindow with the SW_HIDE command.
void CMainFrame::HideModeless()
{
   if(m_Modeless.IsWindowVisible())
   {
      m_Modeless.ShowWindow(SW_HIDE);
   }
}