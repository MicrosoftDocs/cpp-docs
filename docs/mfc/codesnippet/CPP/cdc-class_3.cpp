void CDCView::DrawChord(CDC *pDC)
{
   // Fill the client area with a circle. The circle is
   // blue and filled with blue, but has a chord cut out
   // of it from 3 o'clock to 6 o'clock. That chord is
   // red and filled with a red diagonal hatch.

   // Get the client area.
   CRect rectClient;
   GetClientRect(rectClient);

   // Make a couple of pens and similar brushes.
   CPen penBlue, penRed;
   CBrush brushBlue, brushRed;
   CBrush *pOldBrush;
   CPen *pOldPen;

   brushBlue.CreateSolidBrush(RGB(0, 0, 255));
   brushRed.CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0));
   penBlue.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(0, 0, 255));
   penRed.CreatePen(PS_SOLID | PS_COSMETIC, 1, RGB(255, 0, 0));

   // Draw from 3 o'clock to 6 o'clock, counterclockwise,
   // in a blue pen with a solid blue fill.
   pOldPen = pDC->SelectObject(&penBlue);
   pOldBrush = pDC->SelectObject(&brushBlue);

   pDC->Chord(rectClient,
              CPoint(rectClient.right, rectClient.CenterPoint().y),
              CPoint(rectClient.CenterPoint().x, rectClient.right));

   // Draw the remaining quarter chord from 6 o'clock
   // to 3 o'clock, counterclockwise, in a red pen
   // with the hatched brush.
   pDC->SelectObject(&penRed);
   pDC->SelectObject(&brushRed);

   // Keep the same parameters, but reverse start and
   // end points.
   pDC->Chord(rectClient,
              CPoint(rectClient.CenterPoint().x, rectClient.right),
              CPoint(rectClient.right, rectClient.CenterPoint().y));

   // Restore the previous pen.
   pDC->SelectObject(pOldPen);
}