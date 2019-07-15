// The code below is from winmdi.cpp. It shows how to
// call CMDIFrameWnd::CreateClient(). CMainFrame is a
// CMDIFrameWnd-derived class.
BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext * /*pContext*/)
{
   CMenu *pMenu = NULL;
   if (m_hMenuDefault == NULL)
   {
      // default implementation for MFC V1 backward compatibility
      pMenu = GetMenu();
      ASSERT(pMenu != NULL);
      // This is attempting to guess which sub-menu is the Window menu.
      // The Windows user interface guidelines say that the right-most
      // menu on the menu bar should be Help and Window should be one
      // to the left of that.
      int iMenu = pMenu->GetMenuItemCount() - 2;

      // If this assertion fails, your menu bar does not follow the guidelines
      // so you will have to override this function and call CreateClient
      // appropriately or use the MFC V2 MDI functionality.
      ASSERT(iMenu >= 0);
      pMenu = pMenu->GetSubMenu(iMenu);
      ASSERT(pMenu != NULL);
   }

   return CreateClient(lpcs, pMenu);
}