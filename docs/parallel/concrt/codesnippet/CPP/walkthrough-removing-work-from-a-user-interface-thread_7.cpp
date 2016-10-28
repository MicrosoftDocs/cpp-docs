// Draws the Mandelbrot fractal to the specified Bitmap object.
void CChildView::DrawMandelbrot(BitmapPtr pBitmap)
{
   if (pBitmap == NULL)
      return;

   // Get the size of the bitmap.
   const UINT width = pBitmap->GetWidth();
   const UINT height = pBitmap->GetHeight();

   // Return if either width or height is zero.
   if (width == 0 || height == 0)
      return;

   // Lock the bitmap into system memory.
   BitmapData bitmapData;   
   Rect rectBmp(0, 0, width, height);
   pBitmap->LockBits(&rectBmp, ImageLockModeWrite, PixelFormat32bppRGB, 
      &bitmapData);

   // Obtain a pointer to the bitmap bits.
   int* bits = reinterpret_cast<int*>(bitmapData.Scan0);
      
   // Real and imaginary bounds of the complex plane.
   double re_min = -2.1;
   double re_max = 1.0;
   double im_min = -1.3;
   double im_max = 1.3;

   // Factors for mapping from image coordinates to coordinates on the complex plane.
   double re_factor = (re_max - re_min) / (width - 1);
   double im_factor = (im_max - im_min) / (height - 1);

   // The maximum number of iterations to perform on each point.
   const UINT max_iterations = 1000;
   
   // Compute whether each point lies in the Mandelbrot set.
   for (UINT row = 0u; row < height; ++row)
   {
      // Obtain a pointer to the bitmap bits for the current row.
      int *destPixel = bits + (row * width);

      // Convert from image coordinate to coordinate on the complex plane.
      double y0 = im_max - (row * im_factor);

      for (UINT col = 0u; col < width; ++col)
      {
         // Convert from image coordinate to coordinate on the complex plane.
         double x0 = re_min + col * re_factor;

         double x = x0;
         double y = y0;

         UINT iter = 0;
         double x_sq, y_sq;
         while (iter < max_iterations && ((x_sq = x*x) + (y_sq = y*y) < 4))
         {
            double temp = x_sq - y_sq + x0;
            y = 2 * x * y + y0;
            x = temp;
            ++iter;
         }

         // If the point is in the set (or approximately close to it), color
         // the pixel black.
         if(iter == max_iterations) 
         {         
            *destPixel = 0;
         }
         // Otherwise, select a color that is based on the current iteration.
         else
         {
            BYTE red = static_cast<BYTE>((iter % 64) * 4);
            *destPixel = red<<16;
         }

         // Move to the next point.
         ++destPixel;
      }
   }

   // Unlock the bitmap from system memory.
   pBitmap->UnlockBits(&bitmapData);
}