CMFCToolBarsCustomizeDialog *pDlgCust = new CMFCToolBarsCustomizeDialog(this,
                                                                        TRUE /* Automatic menus scaning */,
                                                                        AFX_CUSTOMIZE_MENU_SHADOWS | AFX_CUSTOMIZE_TEXT_LABELS |
                                                                            AFX_CUSTOMIZE_MENU_ANIMATIONS, // default parameters
                                                                        &lstCustomPages);                  // pointer to the list of runtime classes of the custom property pages