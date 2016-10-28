   CRect rectOne(125,   0, 150, 200);
   CRect rectTwo(0,  75, 350,  95);
   CRect rectInter;

   rectInter.IntersectRect(rectOne, rectTwo);

   // rectInter is now (125, 75, 150, 95)

   ASSERT(rectInter == CRect(125, 75, 150, 95));

   // operator &= can do the same task:

   CRect rectInter2 = rectOne;
   rectInter2 &= rectTwo;
   ASSERT(rectInter2 == CRect(125, 75, 150, 95));   