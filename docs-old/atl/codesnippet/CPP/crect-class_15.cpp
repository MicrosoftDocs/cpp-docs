   CRect rect1(110, 100, 250, 310);
   CRect rect2(250, 310, 110, 100);

   rect1.NormalizeRect();
   rect2.NormalizeRect();

   // rect1 should be unchanged
   // rect2 becomes (110, 100, 250, 310)

   ASSERT(rect1 == rect2);   