CMFCToolBarsCustomizeDialog *pDlgCust = new CMFCToolBarsCustomizeDialog(this,
                                                                        TRUE /* Automatic menus scaning */,
                                                                        AFX_CUSTOMIZE_MENU_SHADOWS | AFX_CUSTOMIZE_TEXT_LABELS |
                                                                            AFX_CUSTOMIZE_MENU_ANIMATIONS);

pDlgCust->AddToolBar(_T("Format"), IDR_FORMATBAR);