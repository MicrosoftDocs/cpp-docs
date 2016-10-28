   // m_sizeExtent is a member of CComControlBase that holds the 
   // control's extents in HIMETRIC units.
   // Use AtlHiMetricToPixel to find the extent of the control in pixels.
   AtlHiMetricToPixel(&m_sizeExtent, &sz);
   ATLTRACE("Width = %d, Height = %d\n", sz.cx, sz.cy);