strTemp.LoadString(IDS_RIBBON_STYLE);
// The first parameter is the command ID of the button.
// The third parameter is a zero-based index of the button's small image in the
// image list of the parent category.
// The fourth parameter is a zero-based index of the button's large image in the
// image list of the parent category.
CMFCRibbonButton *pVisualStyleButton = new CMFCRibbonButton(1, strTemp, -1, -1);

pVisualStyleButton->SetMenu(IDR_THEME_MENU, TRUE, TRUE);

strTemp.LoadString(IDS_RIBBON_STYLE_TIP);
pVisualStyleButton->SetToolTipText(strTemp);
strTemp.LoadString(IDS_RIBBON_STYLE_DESC);
pVisualStyleButton->SetDescription(strTemp);
pVisualStyleButton->RemoveSubItem(0);
pVisualStyleButton->SetRightAlignMenu(TRUE);