   CRect   rect1(100, 235, 200, 335);
   CPoint   pt(35, 65);
   CRect   rect2;

   rect2 = rect1 - pt;

   CRect   rectResult(65, 170, 165, 270);

   ASSERT(rect2 == rectResult);   