// The code fragment below is from CMainFrame::OnCreate and shows
// how to associate bitmaps with the "Bitmap" menu item.
// Whether the "Bitmap" menu item is checked or unchecked, Windows
// displays the appropriate bitmap next to the menu item. Both
// IDB_CHECKBITMAP and IDB_UNCHECKBITMAP bitmaps are loaded
// in OnCreate() and destroyed in the destructor of CMainFrame class.
// CMainFrame is a CFrameWnd-derived class.

// Load bitmaps from resource. Both m_CheckBitmap and m_UnCheckBitmap
// are member variables of CMainFrame class of type CBitmap.
ASSERT(m_CheckBitmap.LoadBitmap(IDB_CHECKBITMAP));
ASSERT(m_UnCheckBitmap.LoadBitmap(IDB_UNCHECKBITMAP));

// Associate bitmaps with the "Bitmap" menu item.
CMenu *mmenu = GetMenu();
CMenu *submenu = mmenu->GetSubMenu(4);
ASSERT(submenu->SetMenuItemBitmaps(ID_MENU_BITMAP, MF_BYCOMMAND,
                                   &m_CheckBitmap, &m_UnCheckBitmap));