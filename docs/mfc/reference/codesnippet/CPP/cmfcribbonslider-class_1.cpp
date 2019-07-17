// Create a ribbon slider.
CMFCRibbonSlider *ribbonSlider = new CMFCRibbonSlider();
// Set the various properties of the slider.
ribbonSlider->SetZoomButtons(true);
ribbonSlider->SetPos(50, TRUE);
ribbonSlider->SetRange(0, 100);
// Add the ribbon slider to the Favorites panel.
// CMFCRibbonPanel* pPanelFavorites
pPanelFavorites->Add(ribbonSlider);