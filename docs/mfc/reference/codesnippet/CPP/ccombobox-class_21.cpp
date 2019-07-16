// If any item's data is equal to zero then reset it to -1.
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   if (m_pComboBox->GetItemData(i) == 0)
   {
      m_pComboBox->SetItemData(i, (DWORD)-1);
   }
}