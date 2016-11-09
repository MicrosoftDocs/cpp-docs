   CSize sz1(100, 100);
   CSize sz2(50,  25);

   sz1 += sz2;

   CSize szResult(150, 125);
   ASSERT(sz1 == szResult);

   // works with SIZE, too

   sz1 = CSize(100, 100);
   SIZE sz3;
   sz3.cx = 50;
   sz3.cy = 25;

   sz1 += sz3;
   ASSERT(sz1 == szResult);   