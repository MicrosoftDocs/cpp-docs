// The index of the char to get information on.
int nIndex = 4;
CString strText;

m_myEdit.GetWindowText(strText);
strText = strText.Mid(nIndex, 1);

// Get the text extent of the character.
CDC *pDC = m_myEdit.GetDC();
CSize sz = pDC->GetTextExtent(strText);
m_myEdit.ReleaseDC(pDC);

CPoint pt = m_myEdit.PosFromChar(nIndex);

// Dump the index, character, line number, and character bounds.
TRACE(_T("nIndex = %d, character = %c, line = %d, bounds = ")
      _T("{%d, %d, %d, %d}\r\n"),
      nIndex, strText[0], m_myEdit.LineFromChar(nIndex),
      pt.x /* left */, pt.y /* top */,
      pt.x + sz.cx /* right */, pt.y + sz.cy /* bottom */);