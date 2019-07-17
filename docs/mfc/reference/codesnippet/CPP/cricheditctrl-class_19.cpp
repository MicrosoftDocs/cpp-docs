// Limit the number of characters to be the maximum number visible.

// Get the text metrics for the edit; needed for the
// average character width.
TEXTMETRIC tm;
CDC *pDC = m_myRichEditCtrl.GetDC();
pDC->GetTextMetrics(&tm);
m_myRichEditCtrl.ReleaseDC(pDC);

CRect r;
m_myRichEditCtrl.GetRect(&r);
m_myRichEditCtrl.LimitText(r.Width() / tm.tmAveCharWidth);