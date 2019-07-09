CPropertySheet sheet(_T("Simple PropertySheet"));

// Change the settings of the three pages to enable property sheet's 
// Help button when the page is active.  CStylePage, CShapePage, and 
// CColorPage are CPropertyPage-derived classes.
CStylePage pageStyle;
pageStyle.m_psp.dwFlags |= PSP_HASHELP;

CColorPage pageColor;
pageColor.m_psp.dwFlags |= PSP_HASHELP;

CShapePage pageShape;
pageShape.m_psp.dwFlags |= PSP_HASHELP;

sheet.AddPage(&pageStyle);
sheet.AddPage(&pageColor);
sheet.AddPage(&pageShape);

sheet.SetWizardMode();

sheet.DoModal();