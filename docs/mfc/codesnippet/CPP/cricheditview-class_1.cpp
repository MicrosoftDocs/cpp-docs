void CMyRichEditView::OnReplaceAll(LPCTSTR lpszFind, LPCTSTR lpszReplace,
   BOOL bCase, BOOL bWord)
{
   CWaitCursor wait;
   // no selection or different than what we are looking for
   if (!FindText(lpszFind, bCase, bWord))
   {
      OnTextNotFound(lpszFind);
      return;
   }

   GetRichEditCtrl().HideSelection(TRUE, FALSE);
   m_nNumReplaced = 0;
   do
   {
      GetRichEditCtrl().ReplaceSel(lpszReplace);
      m_nNumReplaced++;  // Record the number of replacements

   } while (FindTextSimple(lpszFind));
   GetRichEditCtrl().HideSelection(FALSE, FALSE);
}