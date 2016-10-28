   // Unlock the bitmap from system memory.
   pBitmap->UnlockBits(&bitmapData);

   // Dismiss the scope guard because the bitmap has been 
   // properly unlocked.
   guard.dismiss();

   // Add the Bitmap object to image queue.
   send(m_MandelbrotImages, pBitmap);

   // Post a paint message to the UI thread.
   PostMessage(WM_PAINT);
   // Invalidate the client area.
   InvalidateRect(NULL, FALSE);