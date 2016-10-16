   // example for CPoint subtraction
   CPoint   ptStart(100, 100);
   CSize   szOffset(35, 35);
   CPoint   ptEnd;

   ptEnd = ptStart - szOffset;

   CPoint   ptResult(65, 65);

   ASSERT(ptResult == ptEnd);

   // also works on SIZE

   ptStart = CPoint(100, 100);

   SIZE   sz;
   sz.cx = 35;
   sz.cy = 35;

   ptEnd = ptStart - sz;

   ASSERT(ptResult == ptEnd);

   // example for CPoint unary operator
   CPoint   pt(35, 35);
   pt = -pt;

   CPoint ptNeg(-35, -35);
   ASSERT(pt == ptNeg);   