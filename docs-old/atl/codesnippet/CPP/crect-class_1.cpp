   // use BottomRight() to retrieve the bottom
   // right point

   CRect rect(210, 150, 350, 900);
   CPoint ptDown;

   ptDown = rect.BottomRight();

   // ptDown is now set to (350, 900)
   ASSERT(ptDown == CPoint(350, 900));

   // or, use BottomRight() to set the bottom
   // right point

   CRect rect2(10, 10, 350, 350);
   CPoint ptLow(180, 180);

   rect2.BottomRight() = ptLow;

   // rect2 is now (10, 10, 180, 180)
   ASSERT(rect2 == CRect(10, 10, 180, 180));   