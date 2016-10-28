   CRect rect1(35, 150, 10, 25);
   CRect rect2(35, 150, 10, 25);
   CRect rect3(98, 999,  6,  3);

   ASSERT(rect1 == rect2);

   // works just fine against RECTs, as well

   RECT test;
   test.left = 35;
   test.top = 150;
   test.right = 10;
   test.bottom = 25;

   ASSERT(rect1 == test);   