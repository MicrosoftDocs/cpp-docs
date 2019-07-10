CPropertySheet sheet(_T("Simple PropertySheet"));

CStylePage pageStyle;
CColorPage pageColor;
CShapePage pageShape;

sheet.AddPage(&pageStyle);
sheet.AddPage(&pageColor);
sheet.AddPage(&pageShape);

sheet.SetWizardMode();

sheet.DoModal();