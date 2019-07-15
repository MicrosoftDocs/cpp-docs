CMFCRibbonButtonsGroup *pSBGroup = new CMFCRibbonButtonsGroup;

CMFCToolBarImages images;
images.SetImageSize(CSize(14, 14));

CMFCToolBarImages hotimages;
hotimages.SetImageSize(CSize(14, 14));

if (images.Load(IDB_STATUSBAR_1) && hotimages.Load(IDB_STATUSBAR_2))
{
   pSBGroup->SetImages(&images, &hotimages, NULL);
}

pSBGroup->AddButton(new CMFCRibbonButton(ID_FILE_PRINT_PREVIEW, _T(""), 0));
pSBGroup->AddButton(new CMFCRibbonButton(ID_FILE_SUMMARYINFO, _T(""), 1));

// CMFCRibbonStatusBar m_wndStatusBar
m_wndStatusBar.AddExtendedElement(pSBGroup, _T("View Shortcuts"));