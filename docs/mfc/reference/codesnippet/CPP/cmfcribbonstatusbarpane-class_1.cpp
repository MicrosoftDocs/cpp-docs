    CString strTitlePane1;
    CString strTitlePane2;
    strTitlePane1.LoadString(IDS_STATUS_PANE1);
    strTitlePane2.LoadString(IDS_STATUS_PANE2);

    CMFCRibbonStatusBarPane* rsbp = new CMFCRibbonStatusBarPane( ID_STATUSBAR_PANE1, strTitlePane1, TRUE );
    rsbp->SetTextAlign( TA_CENTER );
    rsbp->SetAlmostLargeText( _T( "Status bar" ) );
    CBitmap bitmap;
    bitmap.LoadBitmapW( IDB_FILESMALL );
    rsbp->SetAnimationList( (HBITMAP)bitmap );
    rsbp->StartAnimation();