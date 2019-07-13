// The string for replacing.
LPCTSTR lpszmyString = _T("Hello, I'm the new second line.");

int nBegin, nEnd, nIndex;

// Replace the second line, if it exists, of the rich edit control
// with the text lpszmyString.
nIndex = m_myRichEditCtrl.LineIndex(1);
if ((nBegin = nIndex) != -1)
{
   nEnd = nBegin + m_myRichEditCtrl.LineLength(nIndex);
   m_myRichEditCtrl.SetSel(nBegin, nEnd);
   m_myRichEditCtrl.ReplaceSel(lpszmyString);
}