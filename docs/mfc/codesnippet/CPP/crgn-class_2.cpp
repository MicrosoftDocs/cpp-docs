CRgn   rgnA, rgnB, rgnC;

VERIFY(rgnA.CreateEllipticRgn(200, 100, 350, 250));
VERIFY(rgnB.CreateRectRgn(0, 0, 50, 50));
VERIFY(rgnB.CopyRgn(&rgnA));
int nOffsetResult = rgnB.OffsetRgn(-75, 75);
ASSERT(nOffsetResult != ERROR && nOffsetResult != NULLREGION);

VERIFY(rgnC.CreateRectRgn(0, 0, 1, 1));
int nCombineResult = rgnC.CombineRgn(&rgnA, &rgnB, RGN_AND);
ASSERT(nCombineResult != ERROR && nOffsetResult != NULLREGION);

CBrush brA, brB, brC;
VERIFY(brC.CreateHatchBrush(HS_FDIAGONAL, RGB(0, 0, 255))); // Blue
VERIFY(pDC->FillRgn(&rgnC, &brC));
VERIFY(brA.CreateSolidBrush(RGB(255, 0, 0)));  // rgnA Red
VERIFY(pDC->FrameRgn(&rgnA, &brA, 2, 2));
VERIFY(brB.CreateSolidBrush(RGB(0, 255, 0)));  // rgnB Green
VERIFY(pDC->FrameRgn(&rgnB, &brB, 2, 2));