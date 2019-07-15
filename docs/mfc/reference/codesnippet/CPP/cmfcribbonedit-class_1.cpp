CMFCRibbonEdit *pEditIndentLeft = new CMFCRibbonEdit(ID_PAGELAYOUT_INDENT_LEFT, 72, _T("Left:\nil"), 13);
// specify the min and max value of the spin button control
pEditIndentLeft->EnableSpinButtons(0, 1000);
// set the text of the edit control
pEditIndentLeft->SetEditText(_T("0"));