void CDCView::DrawDitheredBitmap(CDC* pDC)
{
   CBitmap bm;
   bm.LoadBitmap(IDB_BITMAP1);
   AfxDrawDitheredBitmap(pDC, 10, 50, bm, RGB(255, 255, 255),
      GetSysColor(COLOR_BTNFACE));
}