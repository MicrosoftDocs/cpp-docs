// Find the longest string in the list box.
CString str;
CSize sz;
int dx = 0;
CDC *pDC = m_myListBox.GetDC();
for (int i = 0; i < m_myListBox.GetCount(); i++)
{
   m_myListBox.GetText(i, str);
   sz = pDC->GetTextExtent(str);

   if (sz.cx > dx)
      dx = sz.cx;
}
m_myListBox.ReleaseDC(pDC);

// Set the horizontal extent only if the current extent is not large enough.
if (m_myListBox.GetHorizontalExtent() < dx)
{
   m_myListBox.SetHorizontalExtent(dx);
   ASSERT(m_myListBox.GetHorizontalExtent() == dx);
}