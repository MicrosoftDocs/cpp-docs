// Declare a CBrush and initialize to a system color.
CBrush brush;
brush.CreateSysColorBrush(COLOR_BTNFACE);

// Select the brush into the device context.
CBrush *pOldBrush = (CBrush *)pDC->SelectObject(&brush);

// Draw.
CRect rect(50, 50, 150, 150);
pDC->Rectangle(rect);

// Reselect the original brush.
pDC->SelectObject(pOldBrush);