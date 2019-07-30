void CNewView::OnDraw(CDC* pDC)
{
   CPen penBlack;  // Construct it, then initialize
   if (penBlack.CreatePen(PS_SOLID, 2, RGB(0, 0, 0)))
   {
      // Select it into the device context
      // Save the old pen at the same time
      CPen* pOldPen = pDC->SelectObject(&penBlack);

      // Draw with the pen
      pDC->MoveTo(20, 20);
      pDC->LineTo(40, 40);

      // Restore the old pen to the device context
      pDC->SelectObject(pOldPen);
   }
   else
   {
      // Alert the user that resources are low
   }
}