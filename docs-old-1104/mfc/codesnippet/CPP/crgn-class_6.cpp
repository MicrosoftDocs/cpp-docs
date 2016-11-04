   CRgn   rgnA, rgnB, rgnC;

   VERIFY(rgnA.CreateRoundRectRgn( 50, 50, 150, 150, 30, 30 ));
   VERIFY(rgnB.CreateRoundRectRgn( 200, 75, 250, 125, 50, 50 ));
   VERIFY(rgnC.CreateRectRgn( 0, 0, 50, 50 ));

   int nCombineResult = rgnC.CombineRgn( &rgnA, &rgnB, RGN_OR );
   ASSERT( nCombineResult != ERROR && nCombineResult != NULLREGION );

   CBrush brA, brB, brC;
   VERIFY(brA.CreateSolidBrush( RGB(255, 0, 0) ));  
   VERIFY(pDC->FillRgn( &rgnA, &brA));      // rgnA Red Filled

   VERIFY(brB.CreateSolidBrush( RGB(0, 255, 0) ));  
   VERIFY(pDC->FillRgn( &rgnB, &brB));      // rgnB Green Filled
   VERIFY(brC.CreateSolidBrush( RGB(0, 0, 255) ));  // rgnC Blue
   VERIFY(pDC->FrameRgn( &rgnC, &brC, 2, 2 ));