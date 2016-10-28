   CRect rect(0, 0, 100, 100);

   rect.MoveToXY(10, 10);

   // rect is now (10, 10, 110, 110);
   ASSERT(rect == CRect(10, 10, 110, 110));   