CRgn   rgnA, rgnB, rgnC;

VERIFY(rgnA.CreateRectRgn(50, 50, 150, 150));
VERIFY(rgnB.CreateRectRgn(100, 100, 200, 200));
VERIFY(rgnC.CreateRectRgn(0, 0, 50, 50));

int nCombineResult = rgnC.CombineRgn(&rgnA, &rgnB, RGN_OR);
ASSERT(nCombineResult != ERROR && nCombineResult != NULLREGION);

CBrush br1, br2, br3;
VERIFY(br1.CreateSolidBrush(RGB(255, 0, 0)));  // rgnA Red
VERIFY(pDC->FrameRgn(&rgnA, &br1, 2, 2));
VERIFY(br2.CreateSolidBrush(RGB(0, 255, 0)));  // rgnB Green
VERIFY(pDC->FrameRgn(&rgnB, &br2, 2, 2));
VERIFY(br3.CreateSolidBrush(RGB(0, 0, 255)));  // rgnC Blue
VERIFY(pDC->FrameRgn(&rgnC, &br3, 2, 2));