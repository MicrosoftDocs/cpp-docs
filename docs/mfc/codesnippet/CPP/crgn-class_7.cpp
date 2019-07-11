CRgn   rgnA, rgnB;

VERIFY(rgnA.CreateEllipticRgn(200, 100, 350, 250));
VERIFY(rgnB.CreateRectRgn(0, 0, 50, 50));
VERIFY(rgnB.CopyRgn(&rgnA));
int nOffsetResult = rgnB.OffsetRgn(-75, 75);
ASSERT(nOffsetResult != ERROR && nOffsetResult != NULLREGION);
ASSERT(FALSE == rgnB.EqualRgn(&rgnA));