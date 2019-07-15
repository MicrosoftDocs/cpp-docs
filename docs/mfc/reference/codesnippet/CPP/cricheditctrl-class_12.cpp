// The new text of the rich edit control.
LPCTSTR lpszmyString = _T("Here's some text in our rich edit control!");
long nLength = (long)_tcslen(lpszmyString);

// Want the text limit to be at least the size of the new string.
if (m_myRichEditCtrl.GetLimitText() < nLength)
   m_myRichEditCtrl.LimitText(nLength);

m_myRichEditCtrl.SetWindowText(lpszmyString);