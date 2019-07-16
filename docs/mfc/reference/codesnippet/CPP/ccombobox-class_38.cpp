// Set the data of each item to be equal to its index.
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   m_pComboBox->SetItemData(i, i);
}