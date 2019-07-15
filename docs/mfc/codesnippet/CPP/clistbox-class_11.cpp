// The string to match.
LPCTSTR lpszmyString = _T("item string 3");

// Delete all items that exactly match the specified string.
int nIndex = 0;
while ((nIndex = m_myListBox.FindStringExact(nIndex, lpszmyString)) != LB_ERR)
{
   m_myListBox.DeleteString(nIndex);
}