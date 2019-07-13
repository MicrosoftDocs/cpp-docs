// Create "Favorites" panel:
strTemp.LoadString(IDS_RIBBON_FAVORITES);
// CMFCRibbonCategory* pCategoryCustom
CMFCRibbonPanel *pPanelFavorites = pCategoryCustom->AddPanel(strTemp,
                                                             m_PanelImages.ExtractIcon(15));