// Limit the number of characters in the combo box's edit control to
// be the maximum number visible.

// Get the text metrics for the combo box; needed for the
// average character width.
TEXTMETRIC tm;
CDC *pDCCB = m_pComboBox->GetDC();
pDCCB->GetTextMetrics(&tm);
m_pComboBox->ReleaseDC(pDCCB);

CRect rect;
m_pComboBox->GetClientRect(&rect);

m_pComboBox->LimitText(rect.Width() / tm.tmAveCharWidth);