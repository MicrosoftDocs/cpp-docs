//load bitmap for toolbar background
m_RebarBitmap.LoadBitmap(IDB_BITMAP1);

//create a toolbar band
m_Toolbar1.Create(this, TBSTYLE_TRANSPARENT | TBSTYLE_FLAT);
m_Toolbar1.LoadToolBar(IDR_MAINFRAME);

REBARBANDINFO rbi = { 0 };
rbi.cbSize = sizeof(REBARBANDINFO);
rbi.fMask = RBBIM_BACKGROUND | RBBIM_CHILD | RBBIM_CHILDSIZE |
RBBIM_STYLE | RBBIM_TEXT;
rbi.fStyle = RBBS_GRIPPERALWAYS;
rbi.cxMinChild = 300;
rbi.cyMinChild = 50;
rbi.lpText = _T("Band #1");
rbi.cch = 7;
rbi.cx = 300;
rbi.hbmBack = (HBITMAP)m_RebarBitmap;
rbi.hwndChild = (HWND)m_Toolbar1;
m_Rebar.GetReBarCtrl().InsertBand(0, &rbi);