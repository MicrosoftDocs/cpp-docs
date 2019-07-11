CBitmap bm;
bm.LoadBitmap(IDB_BITMAP1);
CBitmap bmGray;
AfxGetGrayBitmap(bm, &bmGray, GetSysColor(COLOR_MENU));