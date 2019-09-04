void CDCView::DrawPolygon(CDC *pDC)
{
   // find the client area
   CRect rect;
   GetClientRect(rect);

   // draw with a thick blue pen
   CPen penBlue(PS_SOLID, 5, RGB(0, 0, 255));
   CPen *pOldPen = pDC->SelectObject(&penBlue);

   // and a solid red brush
   CBrush brushRed(RGB(255, 0, 0));
   CBrush *pOldBrush = pDC->SelectObject(&brushRed);

   // Find the midpoints of the top, right, left, and bottom
   // of the client area. They will be the vertices of our polygon.
   CPoint pts[4];
   pts[0].x = rect.left + rect.Width() / 2;
   pts[0].y = rect.top;

   pts[1].x = rect.right;
   pts[1].y = rect.top + rect.Height() / 2;

   pts[2].x = pts[0].x;
   pts[2].y = rect.bottom;

   pts[3].x = rect.left;
   pts[3].y = pts[1].y;

   // Calling Polygon() on that array will draw three lines
   // between the points, as well as an additional line to
   // close the shape--from the last point to the first point
   // we specified.
   pDC->Polygon(pts, 4);

   // Put back the old objects.
   pDC->SelectObject(pOldPen);
   pDC->SelectObject(pOldBrush);
}