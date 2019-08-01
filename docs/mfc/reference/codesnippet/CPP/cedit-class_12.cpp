int i, nLineCount = m_myEdit.GetLineCount();
CString strText, strLine;
// Dump every line of text of the edit control.
for (i = 0; i < nLineCount; i++)
{
   // length of line i:
   int len = m_myEdit.LineLength(m_myEdit.LineIndex(i));
   m_myEdit.GetLine(i, strText.GetBuffer(len), len);
   strText.ReleaseBuffer(len);
   strLine.Format(_T("line %d: '%s'\n"), i, strText);
   AFXDUMP(strLine);
}