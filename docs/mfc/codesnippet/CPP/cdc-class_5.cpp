void CDCView::Draw3dRect(CDC *pDC)
{
   // get the client area
   CRect rect;
   GetClientRect(rect);

   // shrink our rect 20 pixels on all sides
   rect.DeflateRect(20, 20);

   // draw a rectangle with red top and left sides, and
   // green right and bottom sides.
   pDC->Draw3dRect(rect, RGB(255, 0, 0), RGB(0, 255, 0));

   // This call to the four-integer override would draw
   // the same rectangle with a little less convenience:

   // pDC->Draw3dRect(rect.left, rect.top, rect.Width(), rect.Height(),
   //    RGB(255, 0, 0), RGB(0, 255, 0));
}