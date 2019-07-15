// Add 10 items to the combo box.
CString strItem;
for (int i = 0; i < 10; i++)
{
   strItem.Format(_T("item %d"), i);
   m_pComboBox->AddString(strItem);
}

// Verify the 10 items were added to the combo box.
ASSERT(m_pComboBox->GetCount() == 10);