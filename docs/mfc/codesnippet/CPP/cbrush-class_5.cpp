// Create a hatched bit pattern.
WORD HatchBits[8] = {0x11, 0x22, 0x44, 0x88, 0x11,
                     0x22, 0x44, 0x88};

// Use the bit pattern to create a bitmap.
CBitmap bm;
bm.CreateBitmap(8, 8, 1, 1, HatchBits);

// Create a pattern brush from the bitmap.
CBrush brush;
brush.CreatePatternBrush(&bm);

// Select the brush into a device context, and draw.
CBrush *pOldBrush = (CBrush *)pDC->SelectObject(&brush);
pDC->RoundRect(CRect(50, 50, 200, 200), CPoint(10, 10));

// Restore the original brush.
pDC->SelectObject(pOldBrush);