   // Unlock the bitmap from system memory.
   pBitmap->UnlockBits(&bitmapData);

   // Add the Bitmap object to image queue.
   send(m_MandelbrotImages, pBitmap);

   // Post a paint message to the UI thread.
   PostMessage(WM_PAINT);
   // Invalidate the client area.
   InvalidateRect(NULL, FALSE);