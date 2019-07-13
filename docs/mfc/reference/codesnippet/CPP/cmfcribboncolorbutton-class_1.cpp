// Create the "Paper Color" button
CMFCRibbonColorButton *pBtnPaperColor = new CMFCRibbonColorButton(ID_VIEW_PAPERCOLOR, _T("Paper Color\ng"), TRUE, 13, 1);
pBtnPaperColor->SetAlwaysLargeImage();
pBtnPaperColor->EnableAutomaticButton(_T("&Automatic"), RGB(255, 255, 255));
pBtnPaperColor->EnableOtherButton(_T("&More Colors..."), _T("More Colors"));
pBtnPaperColor->SetColumns(10);
pBtnPaperColor->SetColorBoxSize(CSize(17, 17));
// CList<COLORREF,COLORREF> m_lstMainColors
pBtnPaperColor->AddColorsGroup(_T("Theme Colors"), m_lstMainColors, TRUE);
// CList<COLORREF,COLORREF> m_lstAdditionalColors
pBtnPaperColor->AddColorsGroup(_T(""), m_lstAdditionalColors, FALSE);
// CList<COLORREF,COLORREF> m_lstStandardColors
pBtnPaperColor->AddColorsGroup(_T("Standard Colors"), m_lstStandardColors, TRUE);
CList<COLORREF, COLORREF> lstColors;
lstColors.AddTail(RGB(255, 0, 0));
lstColors.AddTail(RGB(0, 255, 0));
lstColors.AddTail(RGB(0, 0, 255));
pBtnPaperColor->SetDocumentColors(_T("Document Colors"), lstColors);