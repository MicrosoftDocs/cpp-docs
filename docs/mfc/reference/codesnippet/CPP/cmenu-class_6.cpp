// CMainFrame::OnToggleTestMenuInfo() is a menu command handler for 
// "Toggle Info" menu item (whose resource id is ID_MENU_TOGGLEINFO). It 
// toggles the checked or unchecked state of the "Toggle Info" menu item.
// CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnToggleTestMenuItemInfo()
{
   // Get the popup menu which contains the "Toggle Info" menu item.
   CMenu* mmenu = GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(4);

   // Check the state of the "Toggle Info" menu item. Check the menu item
   // if it is currently unchecked. Otherwise, uncheck the menu item
   // if it is not currently checked.
   MENUITEMINFO info;
   info.cbSize = sizeof (MENUITEMINFO); // must fill up this field
   info.fMask = MIIM_STATE;             // get the state of the menu item
   VERIFY(submenu->GetMenuItemInfo(ID_MENU_TOGGLEINFO, &info));

   if (info.fState & MF_CHECKED)
      submenu->CheckMenuItem(ID_MENU_TOGGLEINFO, MF_UNCHECKED | MF_BYCOMMAND);
   else
      submenu->CheckMenuItem(ID_MENU_TOGGLEINFO, MF_CHECKED | MF_BYCOMMAND);
}