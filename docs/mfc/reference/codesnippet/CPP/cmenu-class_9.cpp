// CMainFrame::OnReplaceMenu() is a menu command handler for CMainFrame
// class, which in turn is a CFrameWnd-derived class. It loads a new
// menu resource and replaces the SDI application window's menu bar with
// this new menu. CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnReplaceMenu()
{
   // Load the new menu.
   m_ShortMenu.LoadMenu(IDR_SHORT_MENU);
   ASSERT(m_ShortMenu);

   // Remove and destroy the old menu
   SetMenu(NULL);
   ::DestroyMenu(m_hMenuDefault);

   // Add the new menu
   SetMenu(&m_ShortMenu);

   // Assign default menu
   m_hMenuDefault = m_ShortMenu.GetSafeHmenu(); // or m_ShortMenu.m_hMenu;
}