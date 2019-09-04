void CDCView::DrawPie(CDC *pDC)
{
   // Fill the client area with a simple pie chart. A
   // big blue slice covers 75% of the pie, from
   // 6 o'clock to 3 o'clock. This portion is filled
   // with blue and has a blue edge. The remaining 25%
   // is filled with a red, diagonal hatch and has
   // a red edge.

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

   pDC->Pie(rectClient,
            CPoint(rectClient.right, rectClient.CenterPoint().y),
            CPoint(rectClient.CenterPoint().x, rectClient.right));

   // Draw the remaining quarter slice from 6 o'clock
   // to 3 o'clock, counterclockwise, in a red pen with
   // the hatched brush.
   pDC->SelectObject(&penRed);
   pDC->SelectObject(&brushRed);

   // Same parameters, but reverse start and end points.
   pDC->Pie(rectClient,
            CPoint(rectClient.CenterPoint().x, rectClient.right),
            CPoint(rectClient.right, rectClient.CenterPoint().y));

   // Restore the previous pen.
   pDC->SelectObject(pOldPen);
}