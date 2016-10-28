HRESULT CPolyCtl::OnDraw(ATL_DRAWINFO& di)
{
   RECT& rc = *(RECT*)di.prcBounds;
   HDC hdc  = di.hdcDraw;

   COLORREF    colFore;
   HBRUSH      hOldBrush, hBrush;
   HPEN        hOldPen, hPen;

   // Translate m_colFore into a COLORREF type
   OleTranslateColor(m_clrFillColor, NULL, &colFore);

   // Create and select the colors to draw the circle
   hPen = (HPEN)GetStockObject(BLACK_PEN);
   hOldPen = (HPEN)SelectObject(hdc, hPen);
   hBrush = (HBRUSH)GetStockObject(WHITE_BRUSH);
   hOldBrush = (HBRUSH)SelectObject(hdc, hBrush);

   Ellipse(hdc, rc.left, rc.top, rc.right, rc.bottom);

   // Create and select the brush that will be used to fill the polygon
   hBrush    = CreateSolidBrush(colFore);
   SelectObject(hdc, hBrush);

   CalcPoints(rc);
   Polygon(hdc, &m_arrPoint[0], m_nSides);

   // Select back the old pen and brush and delete the brush we created
   SelectObject(hdc, hOldPen);
   SelectObject(hdc, hOldBrush);
   DeleteObject(hBrush);

   return S_OK;
}