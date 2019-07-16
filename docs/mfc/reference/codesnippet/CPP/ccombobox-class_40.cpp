// Set the height of every item to be the
// vertical size of the item's text extent.
CString str;
CSize sz;
CDC *pDC = m_pComboBox->GetDC();
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   m_pComboBox->GetLBText(i, str);
   sz = pDC->GetTextExtent(str);

   m_pComboBox->SetItemHeight(i, sz.cy);
}
m_pComboBox->ReleaseDC(pDC);