// Dump the selection text only if it contains at least one text character.
if (m_myRichEditCtrl.GetSelectionType() & (SEL_TEXT | SEL_MULTICHAR))
{
   CString strText = m_myRichEditCtrl.GetSelText();

   TRACE(_T("selection text is '%s'.\r\n"), strText);
}