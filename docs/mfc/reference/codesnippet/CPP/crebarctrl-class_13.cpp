// Set the width of each band.
m_rebar.GetClientRect(&rect);
int iWidth = rect.Width() / TOTAL_BANDS;
for (int iIndex = 0; iIndex < TOTAL_BANDS; iIndex++)
   bRet = m_rebar.SetBandWidth(iIndex, iWidth);