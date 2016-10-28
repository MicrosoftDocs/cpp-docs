   CRgn   rgnA, rgnB, rgnC;

   CRect rectA(50, 50, 150, 150);
   CRect rectB(100, 50, 200, 150);

   VERIFY(rgnA.CreateRectRgnIndirect(&rectA));
   VERIFY(rgnB.CreateEllipticRgnIndirect(&rectB));
   VERIFY(rgnC.CreateRectRgn( 0, 0, 50, 50 ));

   int nCombineResult = rgnC.CombineRgn( &rgnA, &rgnB, RGN_AND );
   ASSERT( nCombineResult != ERROR && nCombineResult != NULLREGION );

   CBrush brA, brB, brC;
   VERIFY(brA.CreateSolidBrush( RGB(255, 0, 0) ));  
   VERIFY(pDC->FrameRgn( &rgnA, &brA, 2, 2 ));      // rgnA Red

   VERIFY(brB.CreateSolidBrush( RGB(0, 255, 0) ));  
   VERIFY(pDC->FrameRgn( &rgnB, &brB, 2, 2 ));      // rgnB Green
   VERIFY(brC.CreateSolidBrush( RGB(0, 0, 255) ));  // rgnC Blue
   VERIFY(pDC->FrameRgn( &rgnC, &brC, 2, 2 ));