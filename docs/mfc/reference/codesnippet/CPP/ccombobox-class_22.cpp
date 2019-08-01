LPVOID lpmyPtr = m_pComboBox->GetItemDataPtr(5);

// Check all the items in the combo box; if an item's
// data pointer is equal to my pointer then reset it to NULL.
for (int i = 0; i < m_pComboBox->GetCount(); i++)
{
   if (m_pComboBox->GetItemDataPtr(i) == lpmyPtr)
   {
      m_pComboBox->SetItemDataPtr(i, NULL);
   }
}