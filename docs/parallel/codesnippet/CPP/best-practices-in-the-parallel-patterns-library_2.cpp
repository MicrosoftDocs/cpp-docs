// Calls the provided function for each pixel in a Bitmap object.
void ProcessImage(Bitmap* bmp, const function<void (DWORD&)>& f)
{
   int width = bmp->GetWidth();
   int height = bmp->GetHeight();

   // Lock the bitmap.
   BitmapData bitmapData;
   Rect rect(0, 0, bmp->GetWidth(), bmp->GetHeight());
   bmp->LockBits(&rect, ImageLockModeWrite, PixelFormat32bppRGB, &bitmapData);

   // Get a pointer to the bitmap data.
   DWORD* image_bits = (DWORD*)bitmapData.Scan0;

   // Call the function for each pixel in the image.
   for (int y = 0; y < height; ++y)
   {      
      for (int x = 0; x < width; ++x)
      {
         // Get the current pixel value.
         DWORD* curr_pixel = image_bits + (y * width) + x;

         // Call the function.
         f(*curr_pixel);
      }
   }

   // Unlock the bitmap.
   bmp->UnlockBits(&bitmapData);
}