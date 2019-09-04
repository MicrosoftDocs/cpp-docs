void CDCView::DrawArc(CDC *pDC)
{
   // Fill the client area with a thin circle. The circle's
   // interior is not filled. The circle's perimeter is
   // blue from 6 o'clock to 3 o'clock and red from 3
   // o'clock to 6 o'clock.

   // Get the client area.
   CRect rectClient;
   GetClientRect(rectClient);

   // Make a couple of pens.
   CPen penBlue;
   CPen penRed;
   CPen *pOldPen;

   penBlue.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(0, 0, 255));
   penRed.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(255, 0, 0));

   // Draw from 3 o'clock to 6 o'clock, counterclockwise,
   // in a blue pen.

   pOldPen = pDC->SelectObject(&penBlue);

   pDC->Arc(rectClient,
            CPoint(rectClient.right, rectClient.CenterPoint().y),
            CPoint(rectClient.CenterPoint().x, rectClient.right));

   // Draw from 6 o'clock to 3 o'clock, counterclockwise,
   // in a red pen.
   pDC->SelectObject(&penRed);

   // Keep the same parameters, but reverse start
   // and end points.
   pDC->Arc(rectClient,
            CPoint(rectClient.CenterPoint().x, rectClient.right),
            CPoint(rectClient.right, rectClient.CenterPoint().y));

   // Restore the previous pen.
   pDC->SelectObject(pOldPen);
}