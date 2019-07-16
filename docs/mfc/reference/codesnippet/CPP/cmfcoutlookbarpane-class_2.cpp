CImageList images;
images.Create(IDB_SHORTCUTS, 32, 0, RGB(255, 0, 255));

// Create first page:
m_wndShortcutsPane1.Create(&m_wndShortcutsBar, AFX_DEFAULT_TOOLBAR_STYLE, ID_SHORTCUTS_PANE_1);
// The this pointer points to a CMainFrame class which extends the CFrameWnd class
m_wndShortcutsPane1.SetOwner(this);
m_wndShortcutsPane1.EnableTextLabels();
m_wndShortcutsPane1.EnableDocking(CBRS_ALIGN_ANY);
m_wndShortcutsPane1.EnablePageScrollMode();
m_wndShortcutsPane1.SetBackColor(RGB(0, 255, 0));

m_wndShortcutsPane1.AddButton(images.ExtractIcon(0), _T("View 1"), ID_SHORTCUT_1);
m_wndShortcutsPane1.AddButton(images.ExtractIcon(1), _T("View 2"), ID_SHORTCUT_2);
m_wndShortcutsPane1.AddButton(images.ExtractIcon(2), _T("View 3"), ID_SHORTCUT_3);
m_wndShortcutsPane1.AddButton(images.ExtractIcon(3), _T("View 4"), ID_SHORTCUT_4);