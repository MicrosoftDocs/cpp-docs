void CDCView::DrawRectangle(CDC *pDC)
{
   // create and select a solid blue brush
   CBrush brushBlue(RGB(0, 0, 255));
   CBrush *pOldBrush = pDC->SelectObject(&brushBlue);

   // create and select a thick, black pen
   CPen penBlack;
   penBlack.CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
   CPen *pOldPen = pDC->SelectObject(&penBlack);

   // get our client rectangle
   CRect rect;
   GetClientRect(rect);

   // shrink our rect 20 pixels in each direction
   rect.DeflateRect(20, 20);

   // draw a thick black rectangle filled with blue
   pDC->Rectangle(rect);

   // put back the old objects
   pDC->SelectObject(pOldBrush);
   pDC->SelectObject(pOldPen);
}