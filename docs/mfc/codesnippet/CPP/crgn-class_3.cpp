CRgn   rgnA, rgnB;

CPoint ptVertex[5];

ptVertex[0].x = 180;
ptVertex[0].y = 80;
ptVertex[1].x = 100;
ptVertex[1].y = 160;
ptVertex[2].x = 120;
ptVertex[2].y = 260;
ptVertex[3].x = 240;
ptVertex[3].y = 260;
ptVertex[4].x = 260;
ptVertex[4].y = 160;

VERIFY(rgnA.CreatePolygonRgn(ptVertex, 5, ALTERNATE));

CRect rectRgnBox;
int nRgnBoxResult = rgnA.GetRgnBox(&rectRgnBox);
ASSERT(nRgnBoxResult != ERROR && nRgnBoxResult != NULLREGION);

CBrush brA, brB;
VERIFY(brA.CreateSolidBrush(RGB(255, 0, 0)));  // rgnA Red
VERIFY(pDC->FrameRgn(&rgnA, &brA, 2, 2));
VERIFY(brB.CreateSolidBrush(RGB(0, 0, 255)));  // Blue
rectRgnBox.InflateRect(3, 3);
pDC->FrameRect(&rectRgnBox, &brB);