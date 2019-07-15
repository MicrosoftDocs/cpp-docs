// BOOL m_bPropListCustomColors
// set custom colors for various elements of the property grid control
if (m_bPropListCustomColors)
{
   m_wndPropList.SetCustomColors(RGB(228, 243, 254), RGB(46, 70, 165), RGB(200, 236, 209), RGB(33, 102, 49), RGB(255, 229, 216), RGB(128, 0, 0), RGB(159, 159, 255));
}
else
{
   COLORREF c = (COLORREF)-1;
   m_wndPropList.SetCustomColors(c, c, c, c, c, c, c);
}

m_wndPropList.RedrawWindow();