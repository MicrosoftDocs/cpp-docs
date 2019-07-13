CString strText;

// Add soft line-break breaks.
m_myEdit.FmtLines(TRUE);

// Dump the text of the edit control.
m_myEdit.GetWindowText(strText);
AFXDUMP(strText);

// Remove soft line-break breaks.
m_myEdit.FmtLines(FALSE);