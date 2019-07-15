CString strText(_T("I'm an edit control!"));
UINT nLength = strText.GetLength() * sizeof(TCHAR);

// Want the text limit to be at least the size of the new string.
if (m_myEdit.GetLimitText() < nLength)
   m_myEdit.SetLimitText(nLength);

m_myEdit.SetWindowText(strText);