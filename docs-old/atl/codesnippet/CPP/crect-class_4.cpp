   // default constructor doesn't initialize!
   CRect rectUnknown;

   // four-integers are left, top, right, and bottom
   CRect rect(0, 0, 100, 50);
   ASSERT(rect.Width() == 100);
   ASSERT(rect.Height() == 50);

   // Initialize from RECT stucture
   RECT sdkRect;
   sdkRect.left = 0;
   sdkRect.top = 0;
   sdkRect.right = 100;
   sdkRect.bottom = 50;

   CRect rect2(sdkRect);   // by reference
   CRect rect3(&sdkRect);  // by address
   ASSERT(rect2 == rect);
   ASSERT(rect3 == rect);

   // from a point and a size
   CPoint pt(0, 0);
   CSize sz(100, 50);
   CRect rect4(pt, sz);
   ASSERT(rect4 == rect2);

   // from two points
   CPoint ptBottomRight(100, 50);
   CRect rect5(pt, ptBottomRight);
   ASSERT(rect5 == rect4);   