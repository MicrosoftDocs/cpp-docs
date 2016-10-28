  // Code such as this could be placed in the OnInitDialog callback.
  // It creates two bitmap static controls on the heap, using members
  // _m_pCStatic_A and _m_pCStatic_B to identify them so that they can
  // be destroyed when no longer needed.

    CBitmap CBmp;
    CImage CImg;

    // Create a child bitmap static control and load it from a CBitmap object.
    _m_pCStatic_A = new CStatic;
    _m_pCStatic_A->Create(_T("A bitmap static control (A)"), 
        WS_CHILD|WS_BORDER|WS_VISIBLE|SS_BITMAP|SS_CENTERIMAGE, CRect(16,16,64,64),
        pParentWnd);
    CBmp.LoadOEMBitmap(OBM_CLOSE);  // Loads one of the default Windows bitmaps
    _m_pCStatic_A->SetBitmap( HBITMAP(CBmp) );
    _m_pCStatic_A->ShowWindow( SW_SHOW );

    // Create a child bitmap static control and load it from a CImage object.
    _m_pCStatic_B = new CStatic;
    _m_pCStatic_B->Create(_T("A bitmap static control (B)"), 
        WS_CHILD|WS_BORDER|WS_VISIBLE|SS_BITMAP|SS_CENTERIMAGE, CRect(90,16,138,64),
        pParentWnd);
    CImg.Load( _T("test.png") );
    if( _m_pCStatic_B->GetBitmap( ) == NULL )
      _m_pCStatic_B->SetBitmap( HBITMAP(CImg) );

    /* Then, later: 
     delete( _m_pCStatic_A );
     delete( _m_pCStatic_B );
     */