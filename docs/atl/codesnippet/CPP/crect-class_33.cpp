   CRect   rect1(100,   0, 200, 300);
   CRect   rect2(0, 100, 300, 200);
   CRect   rect3;

   rect3.UnionRect(&rect1, &rect2);

   CRect   rectResult(0, 0, 300, 300);
   ASSERT(rectResult == rect3);   