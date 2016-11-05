void CChildView::OnSize(UINT nType, int cx, int cy)
{
   // The window size has changed; cancel any existing drawing tasks.
   m_DrawingTasks.cancel();
   // Wait for any existing tasks to finish.
   m_DrawingTasks.wait();

   // If the new size is non-zero, create a task to draw the Mandelbrot 
   // image on a separate thread.
   if (cx != 0 && cy != 0)
   {      
      m_DrawingTasks.run([cx,cy,this]() {
         DrawMandelbrot(BitmapPtr(new Bitmap(cx, cy)));
      });
   }
}