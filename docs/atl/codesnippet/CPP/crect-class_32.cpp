   RECT   rectOne;
   RECT   rectTwo;

   rectOne.left = 10;
   rectOne.top = 10;
   rectOne.bottom = 100;
   rectOne.right = 100;

   rectTwo.left = 50;
   rectTwo.top = 10;
   rectTwo.bottom = 150;
   rectTwo.right = 150;

   CRect   rectDiff;

   rectDiff.SubtractRect(&rectOne, &rectTwo);

   CRect   rectResult(10, 10, 50, 100);

   ASSERT(rectDiff == rectResult);

   // works for CRect, too, since there is
   // implicit CRect -> LPCRECT conversion

   CRect rect1(10, 10, 100, 100);
   CRect rect2(50, 10, 150, 150);
   CRect rectOut;

   rectOut.SubtractRect(rect1, rect2);
   ASSERT(rectResult == rectOut);   