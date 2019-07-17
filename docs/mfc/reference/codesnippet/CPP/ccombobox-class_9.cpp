// Delete every item from the combo box.
for (int i = m_pComboBox->GetCount() - 1; i >= 0; i--)
{
   m_pComboBox->DeleteString(i);
}