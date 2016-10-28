   CRect rect(0, 0, 300, 300);
   rect.InflateRect(50, 200);

   // rect is now (-50, -200, 350, 500)
   ASSERT(rect == CRect(-50, -200, 350, 500));   