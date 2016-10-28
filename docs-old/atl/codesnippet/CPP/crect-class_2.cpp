// Code from this OnPaint() implementation can be pasted into your own application
// to draw lines that would look like a letter "Y" within your dialog. 
void CMyDlg::OnPaint()
{
   CPaintDC dc(this); // device context for painting

   // get the size and position of the client area of 
   // your window

   CRect rect;
   GetClientRect(&rect);

   // Move the current pen to the top left of the window. We call the
   // TopLeft() member of CRect here and it returns a CPoint object we
   // pass to the override of CDC::MoveTo() that accepts a CPoint.

   dc.MoveTo(rect.TopLeft());

   // Draw a line from the top left to the center of the window.
   // CenterPoint() gives us the middle point of the window as a
   // CPoint, and since CDC::LineTo() has an override that accepts a
   // CPoint, we can just pass it along.

   dc.LineTo(rect.CenterPoint());

   // Now, draw a line to the top right of the window. There's no
   // CRect member which returns a CPoint for the top right of the
   // window, so we'll reference the CPoint members directly and call
   // the CDC::LineTo() override which takes two integers.

   dc.LineTo(rect.right, rect.top);

   // The top part of the "Y" is drawn. Now, we'll draw the stem. We
   // start from the center point.

   dc.MoveTo(rect.CenterPoint());

   // and then draw to the middle of the bottom edge of the window.
   // We'll get the x-coordinate from the x member of the CPoint
   // returned by CenterPoint(), and the y value comes directly from
   // the rect.

   dc.LineTo(rect.CenterPoint().x, rect.bottom);
}