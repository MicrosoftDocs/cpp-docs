// Set the selection to be all characters after the current selection.
DWORD dwSel = m_myEdit.GetSel();
m_myEdit.SetSel(HIWORD(dwSel), -1);