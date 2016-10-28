   CPoint ptFirst(256, 128);
   CPoint ptTest(111, 333);

   ASSERT(ptFirst != ptTest);

   // works with POINTs, too

   POINT pt;
   pt.x = 333;
   pt.y = 111;

   ASSERT(ptTest != pt);

   // note that pt != ptTest isn't correct!   