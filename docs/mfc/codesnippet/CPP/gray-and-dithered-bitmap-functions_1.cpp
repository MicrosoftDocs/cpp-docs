void CDCView::DrawGrayBitmap(CDC* pDC)
{
   CBitmap bm;
   bm.LoadBitmap(IDB_BITMAP1);
   AfxDrawGrayBitmap(pDC, 10, 50, bm, GetSysColor(COLOR_MENU));
}