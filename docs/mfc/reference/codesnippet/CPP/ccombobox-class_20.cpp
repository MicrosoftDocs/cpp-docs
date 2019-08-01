// Find the longest string in the combo box.
CString strText;
CSize sz;
UINT dxText = 0;
CDC *pDCCombo = m_pComboBox->GetDC();
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   m_pComboBox->GetLBText(i, strText);
   sz = pDCCombo->GetTextExtent(strText);

   if (sz.cx > (LONG)dxText)
      dxText = sz.cx;
}
m_pComboBox->ReleaseDC(pDCCombo);

// Set the horizontal extent only if the current extent is not large enough.
if (m_pComboBox->GetHorizontalExtent() < dxText)
{
   m_pComboBox->SetHorizontalExtent(dxText);
   ASSERT(m_pComboBox->GetHorizontalExtent() == dxText);
}