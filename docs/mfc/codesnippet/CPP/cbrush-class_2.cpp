// Initialize a LOGBRUSH structure.
LOGBRUSH logBrush;
logBrush.lbStyle = BS_HATCHED;
logBrush.lbColor = RGB(0, 192, 192);
logBrush.lbHatch = HS_CROSS;

// Declare an uninitialized CBrush ...
CBrush brush;
// ... and initialize it with the LOGBRUSH.
brush.CreateBrushIndirect(&logBrush);

// Select the brush (and perhaps a pen) into
// the device context.
CBrush *pOldBrush = (CBrush *)pDC->SelectObject(&brush);
CPen *pOldPen = (CPen *)pDC->SelectStockObject(BLACK_PEN);

// Have fun!
pDC->Pie(CRect(100, 100, 300, 300), CPoint(0, 0), CPoint(50, 200));

// Restore the original device context objects.
pDC->SelectObject(pOldBrush);
pDC->SelectObject(pOldPen);