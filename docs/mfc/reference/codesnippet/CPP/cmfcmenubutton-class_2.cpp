// CMenu m_menu
m_btnMenu.m_hMenu = m_menu.GetSubMenu(0)->GetSafeHmenu();
m_btnMenu.SizeToContent();
// set to FALSE so that the framework calls CContextMenuManager::TrackPopupMenu
// to display its menu
m_btnMenu.m_bOSMenu = FALSE;