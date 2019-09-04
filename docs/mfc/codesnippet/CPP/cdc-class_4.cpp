// This handler loads a bitmap from system resources,
// centers it in the view, and uses BitBlt() to paint the bitmap
// bits.
void CDCView::DrawBitmap(CDC *pDC)
{
   // load IDB_BITMAP1 from our resources
   CBitmap bmp;
   if (bmp.LoadBitmap(IDB_BITMAP1))
   {
      // Get the size of the bitmap
      BITMAP bmpInfo;
      bmp.GetBitmap(&bmpInfo);

      // Create an in-memory DC compatible with the
      // display DC we're using to paint
      CDC dcMemory;
      dcMemory.CreateCompatibleDC(pDC);

      // Select the bitmap into the in-memory DC
      CBitmap *pOldBitmap = dcMemory.SelectObject(&bmp);

      // Find a centerpoint for the bitmap in the client area
      CRect rect;
      GetClientRect(&rect);
      int nX = rect.left + (rect.Width() - bmpInfo.bmWidth) / 2;
      int nY = rect.top + (rect.Height() - bmpInfo.bmHeight) / 2;

      // Copy the bits from the in-memory DC into the on-
      // screen DC to actually do the painting. Use the centerpoint
      // we computed for the target offset.
      pDC->BitBlt(nX, nY, bmpInfo.bmWidth, bmpInfo.bmHeight, &dcMemory,
                  0, 0, SRCCOPY);

      dcMemory.SelectObject(pOldBitmap);
   }
   else
   {
      TRACE0("ERROR: Where's IDB_BITMAP1?\n");
   }
}