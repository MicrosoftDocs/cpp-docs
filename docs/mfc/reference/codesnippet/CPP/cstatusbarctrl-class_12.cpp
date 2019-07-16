const int c_nParts = 4;
CRect rect;

m_wndSBC.GetClientRect(&rect);
int aWidths[c_nParts] = {rect.right - 300, rect.right - 200, rect.right - 100,
                         -1};

VERIFY(m_wndSBC.SetParts(c_nParts, aWidths));