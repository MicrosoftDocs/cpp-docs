REBARBANDINFO rbi = {0};
rbi.cbSize = sizeof(REBARBANDINFO);
rbi.fMask = RBBIM_BACKGROUND | RBBIM_CHILD | RBBIM_IMAGE |
            RBBIM_CHILDSIZE | RBBIM_STYLE | RBBIM_TEXT;
rbi.fStyle = RBBS_GRIPPERALWAYS;
rbi.cxMinChild = 200;
rbi.cyMinChild = 50;
rbi.lpText = _T("Band #2");
rbi.cch = 7;
rbi.cx = 300;
rbi.hbmBack = (HBITMAP)m_RebarBitmap;
rbi.iImage = 0;
rbi.hwndChild = (HWND)m_Toolbar2;
m_Rebar.GetReBarCtrl().InsertBand(1, &rbi);