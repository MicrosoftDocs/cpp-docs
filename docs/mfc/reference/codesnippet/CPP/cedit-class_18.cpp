// The string for replacing.
CString strString(_T("Hi, we're the replacements."));
int nBegin, nEnd;

// Replace the second line, if it exists, of the edit control
// with the text strString.
if ((nBegin = m_myEdit.LineIndex(1)) != -1)
{
   nEnd = nBegin + m_myEdit.LineLength(nBegin);
   m_myEdit.SetSel(nBegin, nEnd);
   m_myEdit.ReplaceSel(strString);
}