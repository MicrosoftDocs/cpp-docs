// CRect rect
// CDC* pDC
CDrawingManager dm(*pDC);
// The last parameter is the angle that specifies the direction of the color gradient.
dm.FillGradient2(rect, RGB(102, 200, 238), RGB(0, 129, 185), 45);