RECT rectPane1;
VERIFY(m_wndSBC.GetRect(1, &rectPane1));

int borderArray[3];
VERIFY(m_wndSBC.GetBorders(borderArray));

int nHorz, nVert, nSpacing;
VERIFY(m_wndSBC.GetBorders(nHorz, nVert, nSpacing));