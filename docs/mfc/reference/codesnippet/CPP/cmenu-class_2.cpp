// The code fragment below shows how to create a new menu for the
// application window using CreateMenu() and CreatePopupMenu().
// Then, the created menu will replace the current menu of the
// application. The old menu will be destroyed with DestroyMenu().
// NOTE: The code fragment below is done in a CFrameWnd-derived class.

// Create a new menu for the application window.
VERIFY(m_NewMenu.CreateMenu());

// Create a "File" popup menu and insert this popup menu to the
// new menu of the application window. The "File" menu has only
// one menu item, i.e. "Exit".
VERIFY(m_FileMenu.CreatePopupMenu());
m_FileMenu.AppendMenu(MF_STRING, ID_APP_EXIT, _T("E&xit"));
m_NewMenu.AppendMenu(MF_POPUP, (UINT_PTR)m_FileMenu.m_hMenu, _T("&File"));

// Remove and destroy old menu
SetMenu(NULL);
CMenu *old_menu = CMenu::FromHandle(m_hMenuDefault);
old_menu->DestroyMenu();

// Add new menu.
SetMenu(&m_NewMenu);

// Assign default menu
m_hMenuDefault = m_NewMenu.m_hMenu;