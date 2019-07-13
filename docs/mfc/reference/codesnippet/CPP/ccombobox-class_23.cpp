// Set the height of every item so the item
// is completely visible.
CString strLBText;
CSize size;
CDC *pDC = m_pComboBox->GetDC();
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   m_pComboBox->GetLBText(i, strLBText);
   size = pDC->GetTextExtent(strLBText);

   // Only want to set the item height if the current height
   // is not big enough.
   if (m_pComboBox->GetItemHeight(i) < size.cy)
      m_pComboBox->SetItemHeight(i, size.cy);
}
m_pComboBox->ReleaseDC(pDC);