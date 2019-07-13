// CDC* pDC
// CRect rectHeader
CDrawingManager dm(*pDC);
// Draw a shadow for a rectangular area.
// second parameter is the depth of the shadow
dm.DrawShadow(rectHeader, 2);