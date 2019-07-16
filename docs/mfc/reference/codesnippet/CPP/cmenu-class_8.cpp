// CMainFrame::OnChangeFileMenu() is a menu command handler for
// CMainFrame class, which in turn is a CFrameWnd-derived class.
// It modifies the File menu by inserting, removing and renaming
// some menu items. Other operations include associating a context
// help id and setting default menu item to the File menu.
// CMainFrame is a CFrameWnd-derived class.
void CMainFrame::OnChangeFileMenu()
{
   // Get the menu from the application window.
   CMenu *mmenu = GetMenu();

   // Look for "File" menu.
   int pos = FindMenuItem(mmenu, _T("&File"));
   if (pos == -1)
      return;

   // Remove "New" menu item from the File menu.
   CMenu *submenu = mmenu->GetSubMenu(pos);
   pos = FindMenuItem(submenu, _T("&New\tCtrl+N"));
   if (pos > -1)
      submenu->RemoveMenu(pos, MF_BYPOSITION);

   // Look for "Open" menu item from the File menu. Insert a new
   // menu item called "Close" right after the "Open" menu item.
   // ID_CLOSEFILE is the command id for the "Close" menu item.
   pos = FindMenuItem(submenu, _T("&Open...\tCtrl+O"));
   if (pos > -1)
      submenu->InsertMenu(pos + 1, MF_BYPOSITION, ID_CLOSEFILE, _T("&Close"));

   // Rename menu item "Exit" to "Exit Application".
   pos = FindMenuItem(submenu, _T("E&xit"));
   if (pos > -1)
   {
      UINT id = submenu->GetMenuItemID(pos);
      submenu->ModifyMenu(id, MF_BYCOMMAND, id, _T("E&xit Application"));
   }

   // Associate a context help ID with File menu, if one is not found.
   // ID_FILE_CONTEXT_HELPID is the context help ID for the File menu
   // that is defined in resource file.
   if (submenu->GetMenuContextHelpId() == 0)
      submenu->SetMenuContextHelpId(ID_FILE_CONTEXT_HELPID);

   // Set "Open" menu item as the default menu item for the File menu,
   // if one is not found. So, when a user double-clicks the File
   // menu, the system sends a command message to the menu's owner
   // window and closes the menu as if the File\Open command item had
   // been chosen.
   if (submenu->GetDefaultItem(GMDI_GOINTOPOPUPS, TRUE) == -1)
   {
      pos = FindMenuItem(submenu, _T("&Open...\tCtrl+O"));
      submenu->SetDefaultItem(pos, TRUE);
   }
}

// FindMenuItem() will find a menu item string from the specified
// popup menu and returns its position (0-based) in the specified
// popup menu. It returns -1 if no such menu item string is found.
int FindMenuItem(CMenu *Menu, LPCTSTR MenuString)
{
   ASSERT(Menu);
   ASSERT(::IsMenu(Menu->GetSafeHmenu()));

   int count = Menu->GetMenuItemCount();
   for (int i = 0; i < count; i++)
   {
      CString str;
      if (Menu->GetMenuString(i, str, MF_BYPOSITION) &&
          str.Compare(MenuString) == 0)
         return i;
   }

   return -1;
}