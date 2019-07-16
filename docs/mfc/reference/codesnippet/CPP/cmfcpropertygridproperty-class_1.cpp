CMFCPropertyGridProperty *pGroup1 = new CMFCPropertyGridProperty(_T("Appearance"));

// construct a COleVariant object.
COleVariant var3DLook((short)VARIANT_FALSE, VT_BOOL);

pGroup1->AddSubItem(new CMFCPropertyGridProperty(_T("3D Look"), var3DLook,
                                                 _T("Specifies the dialog's font will be nonbold and controls will have a 3D border")));

CMFCPropertyGridProperty *pProp = new CMFCPropertyGridProperty(_T("Border"),
                                                               _T("Dialog Frame"), _T("One of: None, Thin, Resizable, or Dialog Frame"));
pProp->AddOption(_T("None"));
pProp->AddOption(_T("Thin"));
pProp->AddOption(_T("Resizable"));
pProp->AddOption(_T("Dialog Frame"));
pProp->AllowEdit(FALSE);

pGroup1->AddSubItem(pProp);
pGroup1->AddSubItem(new CMFCPropertyGridProperty(_T("Caption"), (COleVariant) _T("About NewControlsDemo"), _T("Specifies the text that will be displayed in the dialog's title bar")));
pGroup1->AdjustButtonRect();
pGroup1->AllowEdit();
pGroup1->Enable();
pGroup1->Show();
pGroup1->Redraw();