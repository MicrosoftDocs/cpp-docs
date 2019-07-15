// Initialize the storage of the combo box to be 256 strings with
// about 10 characters per string, performance improvement.
int nAlloc = pmyComboBox->InitStorage(256, 10);
ASSERT(nAlloc != CB_ERRSPACE);

// Add 256 items to the combo box.
CString strAdd;
for (int i = 0; i < 256; i++)
{
   strAdd.Format(_T("item string %d"), i);
   m_pComboBox->AddString(strAdd);
}