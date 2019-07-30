// Create a simple combo box with two entries:
// The first parameter is the id of the combo box.
// The third parameter is the width of the combo box in pixels.
// The fourth parameter is the display label of the combo box.
// The fifth parameter is the index of the small image of the combo box.
CMFCRibbonComboBox *pComboSimple = new CMFCRibbonComboBox(-1, FALSE, -1, 0, -1);

// Add two items to the combo box and select the first item in the list:
pComboSimple->AddItem(_T("Hi!"));
pComboSimple->AddItem(_T("Hello!"));
pComboSimple->SelectItem(0);

// Add combo button to "Favorites" panel:
// CMFCRibbonPanel* pPanelFavorites
pPanelFavorites->Add(pComboSimple);