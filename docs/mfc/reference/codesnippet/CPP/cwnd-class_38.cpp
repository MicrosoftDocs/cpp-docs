void CMainFrame::OnCwndDeletefilemenu()
{
   // This example deletes the leftmost popup menu or leftmost
   // popup menu item from the application's main window.
   CWnd *pMain = AfxGetMainWnd();

   // The main window _can_ be NULL, so this code
   // doesn't ASSERT and actually tests.
   if (pMain != NULL)
   {
      // Get the main window's menu
      CMenu *pMenu = pMain->GetMenu();

      // If there is a menu and it has items, we'll
      // delete the first one.
      if (pMenu != NULL && pMenu->GetMenuItemCount() > 0)
      {
         pMenu->DeleteMenu(0, MF_BYPOSITION);
         // force a redraw of the menu bar
         pMain->DrawMenuBar();
      }

      // No need to delete pMenu because it is an MFC
      // temporary object.
   }
}