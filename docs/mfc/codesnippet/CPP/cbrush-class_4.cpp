CBrush brush;
brush.CreateHatchBrush(HS_BDIAGONAL, RGB(255, 0, 0));

CBrush *pOldBrush;
CPen *pOldPen;

pOldBrush = (CBrush *)pDC->SelectObject(&brush);
pOldPen = (CPen *)pDC->SelectStockObject(NULL_PEN);
pDC->Ellipse(CRect(50, 50, 250, 250));

pDC->SelectObject(pOldBrush);
pDC->SelectObject(pOldPen);