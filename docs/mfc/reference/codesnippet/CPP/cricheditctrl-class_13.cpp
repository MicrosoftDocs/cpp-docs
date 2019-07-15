int nLineLength, nLineIndex, nLineCount = m_myRichEditCtrl.GetLineCount();
CString strText, strLine;

// Dump every line of text of the rich edit control.
for (int i = 0; i < nLineCount; i++)
{
   nLineIndex = m_myRichEditCtrl.LineIndex(i);
   nLineLength = m_myRichEditCtrl.LineLength(nLineIndex);
   m_myRichEditCtrl.GetLine(i, strText.GetBufferSetLength(nLineLength + 1),
                            nLineLength);
   strText.SetAt(nLineLength, _T('\0')); // null terminate
   strText.ReleaseBuffer(nLineLength + 1);

   TRACE(_T("line %d: '%s'\r\n"), i, strText);
}