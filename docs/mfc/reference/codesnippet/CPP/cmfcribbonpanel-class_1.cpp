// CMFCRibbonCategory* pCategory
// CMFCToolBarImages m_PanelImages
CMFCRibbonPanel *pPanelClipboard = pCategory->AddPanel(_T("Clipboard"), m_PanelImages.ExtractIcon(1));
pPanelClipboard->SetKeys(_T("zc"));
pPanelClipboard->SetCenterColumnVert();
pPanelClipboard->SetJustifyColumns();