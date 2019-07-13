REBARBANDINFO rbbi = {0};
rbbi.cbSize = sizeof(rbbi);

TCHAR szText[80];
rbbi.lpText = szText;
rbbi.cch = sizeof(szText) / sizeof(szText[0]);

rbbi.fMask = RBBIM_BACKGROUND | RBBIM_CHILD |
             RBBIM_CHILDSIZE | RBBIM_COLORS | RBBIM_HEADERSIZE |
             RBBIM_IDEALSIZE | RBBIM_ID | RBBIM_IMAGE |
             RBBIM_LPARAM | RBBIM_SIZE | RBBIM_STYLE | RBBIM_TEXT;

m_wndReBar.GetReBarCtrl().GetBandInfo(0, &rbbi);

m_wndReBar.GetReBarCtrl().InsertBand(1, &rbbi);