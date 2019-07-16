// The code fragment below shows how to disable (and gray out) the
// File\New menu item.
// NOTE: m_bAutoMenuEnable is set to FALSE in the constructor of
// CMainFrame so no ON_UPDATE_COMMAND_UI or ON_COMMAND handlers are
// needed, and CMenu::EnableMenuItem() will work as expected.

CMenu *mmenu = GetMenu();
CMenu *submenu = mmenu->GetSubMenu(0);
submenu->EnableMenuItem(ID_FILE_NEW, MF_BYCOMMAND | MF_DISABLED | MF_GRAYED);