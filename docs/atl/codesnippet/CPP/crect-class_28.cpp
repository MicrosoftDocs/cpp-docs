   CRect rect(5, 5, 100, 100);
   CPoint pt1(35, 50);
   CPoint pt2(125, 298);

   // this is true, because pt1 is inside the rectangle
   ASSERT(rect.PtInRect(pt1));

   // this is NOT true, because pt2 is outside the rectangle
   ASSERT(!rect.PtInRect(pt2));

   // note that the right and the bottom aren't inside
   ASSERT(!rect.PtInRect(CPoint(35, 100)));
   ASSERT(!rect.PtInRect(CPoint(100, 98)));

   // but the top and the left are inside
   ASSERT(rect.PtInRect(CPoint(5, 65)));
   ASSERT(rect.PtInRect(CPoint(88, 5)));

   // and that PtInRect() works against a POINT, too
   POINT pt;
   pt.x = 35;
   pt.y = 50;
   ASSERT(rect.PtInRect(pt));   