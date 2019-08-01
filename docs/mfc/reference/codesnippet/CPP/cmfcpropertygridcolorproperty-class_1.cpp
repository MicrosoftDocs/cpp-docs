CMFCPropertyGridColorProperty *pColorProp = new CMFCPropertyGridColorProperty(_T("Window Color"), RGB(210, 192, 254), NULL, _T("Specifies the default dialog color"));
pColorProp->EnableOtherButton(_T("Other..."));
pColorProp->EnableAutomaticButton(_T("Default"), ::GetSysColor(COLOR_3DFACE));
pColorProp->SetColor(RGB(255, 0, 0));
pColorProp->SetColumnsNumber(3);