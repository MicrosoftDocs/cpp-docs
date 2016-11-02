   CPoint ptFirst(256, 128);
   CPoint ptTest(256, 128);

   ASSERT(ptFirst == ptTest);

   // works with POINTs, too

   POINT pt;
   pt.x = 256;
   pt.y = 128;

   ASSERT(ptTest == pt);

   // note that pt == ptTest isn't correct!   