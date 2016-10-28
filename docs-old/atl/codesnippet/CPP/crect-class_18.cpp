   CRect rect(0, 0, 127, 168);
   CRect rect2;

   rect2 = rect;

   ASSERT(rect2 == CRect(0, 0, 127, 168));   