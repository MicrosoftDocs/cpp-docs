   CSize szEmpty;
   CSize szPointA(10, 25);

   SIZE sz;
   sz.cx = 10;
   sz.cy = 25;
   CSize szPointB(sz);

   POINT pt;
   pt.x = 10;
   pt.y = 25;
   CSize szPointC(pt);

   CPoint ptObject(10, 25);
   CSize szPointD(ptObject);   

   DWORD dw = MAKELONG(10, 25);
   CSize szPointE(dw);

   ASSERT(szPointA == szPointB);
   ASSERT(szPointB == szPointC);
   ASSERT(szPointC == szPointD);
   ASSERT(szPointD == szPointE);   