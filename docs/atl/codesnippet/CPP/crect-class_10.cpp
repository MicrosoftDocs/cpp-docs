   CRect rectNone(0, 0, 0, 0);
   CRect rectSome(35, 50, 135, 150);

   ASSERT(rectNone.IsRectEmpty());
   ASSERT(!rectSome.IsRectEmpty());

   CRect rectEmpty(35, 35, 35, 35);
   ASSERT(rectEmpty.IsRectEmpty());   