// The string to match.
LPCTSTR lpszmyExactString = _T("item 5");

// Delete all items that exactly match the specified string.
int nDex = 0;
while ((nDex = m_pComboBox->FindStringExact(nDex, lpszmyExactString)) != CB_ERR)
{
   m_pComboBox->DeleteString(nDex);
}