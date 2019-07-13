// CMainFrame::OnToggleTestMenuState() is a menu command handler for
// "Toggle State" menu item (whose resource id is ID_MENU_TOGGLESTATE).
// It toggles the checked or unchecked state of the "Toggle State" menu item.
// CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnToggleTestMenuState()
{
   // Get the popup menu which contains the "Toggle State" menu item.
   CMenu *mmenu = GetMenu();
   CMenu *submenu = mmenu->GetSubMenu(4);

   // Check the state of the "Toggle State" menu item. Check the menu item
   // if it is currently unchecked. Otherwise, uncheck the menu item
   // if it is not currently checked.
   UINT state = submenu->GetMenuState(ID_MENU_TOGGLESTATE, MF_BYCOMMAND);
   ASSERT(state != 0xFFFFFFFF);

   if (state & MF_CHECKED)
      submenu->CheckMenuItem(ID_MENU_TOGGLESTATE, MF_UNCHECKED | MF_BYCOMMAND);
   else
      submenu->CheckMenuItem(ID_MENU_TOGGLESTATE, MF_CHECKED | MF_BYCOMMAND);
}