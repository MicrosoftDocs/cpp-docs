// Limit the number of characters to be the maximum number visible.

// Get the text metrics for the edit; needed for the
// average character width.
TEXTMETRIC tm;
CDC *pDC = m_myEdit.GetDC();
pDC->GetTextMetrics(&tm);
m_myEdit.ReleaseDC(pDC);

CRect r;
m_myEdit.GetRect(&r);
m_myEdit.LimitText(r.Width() / tm.tmAveCharWidth);