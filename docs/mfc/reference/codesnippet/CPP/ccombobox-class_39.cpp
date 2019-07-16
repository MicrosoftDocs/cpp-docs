// Set the data pointer of each item to be NULL.
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   m_pComboBox->SetItemDataPtr(i, NULL);
}