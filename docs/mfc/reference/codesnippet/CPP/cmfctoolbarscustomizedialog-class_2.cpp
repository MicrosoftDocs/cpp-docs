CMFCToolBarsCustomizeDialog *pDlgCust = new CMFCToolBarsCustomizeDialog(this,
                                                                        TRUE /* Automatic menus scanning */);

CSliderButton btnSlider(ID_SLIDER);
btnSlider.SetRange(0, 100);

pDlgCust->AddButton(_T("Edit"), btnSlider);