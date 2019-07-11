CBitmap bm;
bm.LoadBitmap(IDB_BITMAP1);
CBitmap bmDith;
AfxGetDitheredBitmap(bm, &bmDith, RGB(255, 255, 255),
   GetSysColor(COLOR_BTNFACE));