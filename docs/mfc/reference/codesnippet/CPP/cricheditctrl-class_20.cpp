// The index of the char to get information on.
int nIndex = 11;

CString strText;

m_myRichEditCtrl.GetWindowText(strText);
strText = strText.Mid(nIndex, 1);

// Dump the index, character and line number.
TRACE(_T("nIndex = %d, character = %c, line = %d\r\n"),
      nIndex, strText[0], m_myRichEditCtrl.LineFromChar(nIndex));