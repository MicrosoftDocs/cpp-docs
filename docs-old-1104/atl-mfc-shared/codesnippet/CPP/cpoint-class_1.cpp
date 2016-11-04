   CPoint   ptStart(100, 100);
   ptStart.Offset(35, 35);

   CPoint   ptResult(135, 135);
   ASSERT(ptStart == ptResult);

   // works with POINT, too

   ptStart = CPoint(100, 100);
   POINT pt;

   pt.x = 35;
   pt.y = 35;

   ptStart.Offset(pt);

   ASSERT(ptStart == ptResult);

   // works with SIZE, too

   ptStart = CPoint(100, 100);
   SIZE size;

   size.cx = 35;
   size.cy = 35;

   ptStart.Offset(size);

   ASSERT(ptStart == ptResult);   