// Find the longest string in the combo box.
CString str;
CSize sz;
int dx = 0;
TEXTMETRIC tm;
CDC *pDC = m_pComboBox->GetDC();
CFont *pFont = m_pComboBox->GetFont();

// Select the listbox font, save the old font
CFont *pOldFont = pDC->SelectObject(pFont);
// Get the text metrics for avg char width
pDC->GetTextMetrics(&tm);

for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   m_pComboBox->GetLBText(i, str);
   sz = pDC->GetTextExtent(str);

   // Add the avg width to prevent clipping
   sz.cx += tm.tmAveCharWidth;

   if (sz.cx > dx)
      dx = sz.cx;
}
// Select the old font back into the DC
pDC->SelectObject(pOldFont);
m_pComboBox->ReleaseDC(pDC);

// Set the horizontal extent so every character of all strings can
// be scrolled to.
m_pComboBox->SetHorizontalExtent(dx);