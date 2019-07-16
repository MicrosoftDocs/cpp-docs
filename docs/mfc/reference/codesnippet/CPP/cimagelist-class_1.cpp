// Add my icons.
m_myImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
m_myImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));

// Add my bitmap, make all black pixels transparent.
CBitmap bm;
bm.LoadBitmap(IDB_BITMAP1);
m_myImageList.Add(&bm, RGB(0, 0, 0));