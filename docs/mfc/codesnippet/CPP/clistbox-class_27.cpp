// The string to match.
LPCTSTR lpszmyString = _T("item 5");

// Select the item that begins with the specified string.
int nIndex = m_myListBox.SelectString(0, lpszmyString);
ASSERT(nIndex != LB_ERR);