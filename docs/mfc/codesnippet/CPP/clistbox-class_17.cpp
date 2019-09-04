// Set the height of every item so the item
// is completely visible.
CString str;
CSize sz;
CDC *pDC = m_myListBox.GetDC();
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   m_myListBox.GetText(i, str);
   sz = pDC->GetTextExtent(str);

   // Only want to set the item height if the current height
   // is not big enough.
   if (m_myListBox.GetItemHeight(i) < sz.cy)
      m_myListBox.SetItemHeight(i, sz.cy);
}
m_myListBox.ReleaseDC(pDC);