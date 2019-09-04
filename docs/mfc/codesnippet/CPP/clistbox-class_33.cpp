// Find the longest string in the list box.
CString str;
CSize sz;
int dx = 0;
TEXTMETRIC tm;
CDC *pDC = m_myListBox.GetDC();
CFont *pFont = m_myListBox.GetFont();

// Select the listbox font, save the old font
CFont *pOldFont = pDC->SelectObject(pFont);
// Get the text metrics for avg char width
pDC->GetTextMetrics(&tm);

for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   m_myListBox.GetText(i, str);
   sz = pDC->GetTextExtent(str);

   // Add the avg width to prevent clipping
   sz.cx += tm.tmAveCharWidth;

   if (sz.cx > dx)
      dx = sz.cx;
}
// Select the old font back into the DC
pDC->SelectObject(pOldFont);
m_myListBox.ReleaseDC(pDC);

// Set the horizontal extent so every character of all strings
// can be scrolled to.
m_myListBox.SetHorizontalExtent(dx);