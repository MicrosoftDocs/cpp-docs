// The string to match.
LPCTSTR lpszSelect = _T("item");

// Select the item that begins with the specified string.
int nSel = m_pComboBox->SelectString(0, lpszSelect);
ASSERT(nSel != CB_ERR);