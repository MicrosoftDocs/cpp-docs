CMFCRibbonGallery *pBtnStyles = new CMFCRibbonGallery(ID_OBJECT_STYLES, _T("Styles\nk"), 0, 0, IDB_STYLES, 40);
pBtnStyles->SetIconsInRow(7);
pBtnStyles->EnableMenuResize(TRUE, TRUE);
pBtnStyles->EnableMenuSideBar();
pBtnStyles->SetButtonMode(false);
pBtnStyles->RedrawIcons();