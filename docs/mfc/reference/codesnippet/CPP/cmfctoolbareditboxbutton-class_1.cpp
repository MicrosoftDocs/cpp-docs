CMFCToolBarEditBoxButton *boxButton = new CMFCToolBarEditBoxButton();
boxButton->CanBeStretched();
boxButton->HaveHotBorder();
boxButton->SetContents(_T("edit box button"));
boxButton->SetFlatMode(true);
boxButton->SetStyle(TBBS_PRESSED);