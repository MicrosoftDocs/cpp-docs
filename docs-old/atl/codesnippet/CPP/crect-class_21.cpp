   CRect   rect1(100, 235, 200, 335);
   CPoint   pt(35, 65);
   CRect   rect2(135, 300, 235, 400);

   rect1 += pt;

   ASSERT(rect1 == rect2);   