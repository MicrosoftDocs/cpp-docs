// Want an item in the bottom half to be the first visible item.
int nTop = m_pComboBox->GetCount() / 2;
if (m_pComboBox->GetTopIndex() < nTop)
{
   m_pComboBox->SetTopIndex(nTop);
   ASSERT(m_pComboBox->GetTopIndex() == nTop);
}