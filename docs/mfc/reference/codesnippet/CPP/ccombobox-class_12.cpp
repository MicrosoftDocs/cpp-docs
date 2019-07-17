// The string to match.
LPCTSTR lpszmyString = _T("item");

// Delete all items that begin with the specified string.
int nItem = 0;
while ((nItem = m_pComboBox->FindString(nItem, lpszmyString)) != CB_ERR)
{
   m_pComboBox->DeleteString(nItem);
}