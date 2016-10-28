   CRect rect(0, 0, 100, 100);

   rect.MoveToY(10);

   // rect is now (0, 10, 100, 110);
   ASSERT(rect == CRect(0, 10, 100, 110));   