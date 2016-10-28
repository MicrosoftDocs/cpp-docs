void CChildView::OnPaint() 
{
   CPaintDC dc(this); // device context for painting

   // If the unbounded_buffer object contains a Bitmap object, 
   // draw the image to the client area.
   BitmapPtr pBitmap;
   if (try_receive(m_MandelbrotImages, pBitmap))
   {
      if (pBitmap != NULL)
      {
         // Draw the bitmap to the client area.
         Graphics g(dc);
         g.DrawImage(pBitmap.get(), 0, 0);
      }
   }
   // Draw the image on a worker thread if the image is not available.
   else
   {
      RECT rc;
      GetClientRect(&rc);
      m_DrawingTasks.run([rc,this]() {
         DrawMandelbrot(BitmapPtr(new Bitmap(rc.right, rc.bottom)));
      });
   }
}