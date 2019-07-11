// The string to match.
LPCTSTR lpszmyString = _T("item");

// Delete all items that begin with the specified string.
int nIndex = 0;
while ((nIndex = m_myListBox.FindString(nIndex, lpszmyString)) != LB_ERR)
{
   m_myListBox.DeleteString(nIndex);
}