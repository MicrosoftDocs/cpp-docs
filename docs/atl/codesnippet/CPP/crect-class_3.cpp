   CRect rectSource(35, 10, 125, 10);
   CRect rectDest;

   rectDest.CopyRect(&rectSource);

   // rectDest is now set to (35, 10, 125, 10)

   RECT rectSource2;
   rectSource2.left = 0;
   rectSource2.top = 0;
   rectSource2.bottom = 480;
   rectSource2.right = 640;

   rectDest.CopyRect(&rectSource2);

   // works against RECT structures, too!
   // rectDest is now set to (0, 0, 640, 480)   