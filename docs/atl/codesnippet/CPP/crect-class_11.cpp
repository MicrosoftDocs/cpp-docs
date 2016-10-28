   CRect rectNone(0, 0, 0, 0);
   CRect rectSome(35, 50, 135, 150);

   ASSERT(rectNone.IsRectNull());
   ASSERT(!rectSome.IsRectNull());

   // note that null means _all_ zeros

   CRect rectNotNull(0, 0, 35, 50);
   ASSERT(!rectNotNull.IsRectNull());   