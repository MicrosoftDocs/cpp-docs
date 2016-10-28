   // Create a scope_guard object that unlocks the bitmap bits when it
   // leaves scope. This ensures that the bitmap is properly handled
   // when the task is canceled.
   scope_guard guard([&pBitmap, &bitmapData] {
      // Unlock the bitmap from system memory.
      pBitmap->UnlockBits(&bitmapData);      
   });