void CChildView::OnPaint() 
{
   CPaintDC dc(this); // device context for painting

   // Get the size of the client area of the window.
   RECT rc;
   GetClientRect(&rc);

   // Create a Bitmap object that has the width and height of 
   // the client area.
   BitmapPtr pBitmap(new Bitmap(rc.right, rc.bottom));

   if (pBitmap != NULL)
   {
      // Draw the Mandelbrot fractal to the bitmap.
      DrawMandelbrot(pBitmap);

      // Draw the bitmap to the client area.
      Graphics g(dc);
      g.DrawImage(pBitmap.get(), 0, 0);
   }
}