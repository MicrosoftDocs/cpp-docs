// m_pFRDlg is a pointer to a class derived from CFindReplaceDialog
// which defines variables used by the FINDREPLACE structure.
// InitFindReplaceDlg creates a CFindReplaceDialog and initializes
// the m_fr with the data members from the derived class
void CMyRichEditView::InitFindReplaceDlg()
{
   if (NULL == m_pFRDlg)
   {
      m_pFRDlg = new CMyFindReplaceDialog(); // Must be created on the heap

      m_pFRDlg->Create(TRUE, _T(""), _T(""), FR_DOWN, this);

      m_pFRDlg->m_fr.lStructSize = sizeof(FINDREPLACE);
      m_pFRDlg->m_fr.hwndOwner = this->m_hWnd;
      m_pFRDlg->m_fr.lpstrFindWhat = m_pFRDlg->GetFindWhatStr();
      m_pFRDlg->m_fr.lpstrReplaceWith = m_pFRDlg->GetReplaceWithStr();
      m_pFRDlg->m_fr.wFindWhatLen = m_pFRDlg->GetFindWhatStrLen();
      m_pFRDlg->m_fr.wReplaceWithLen = m_pFRDlg->GetReplaceWithStrLen();
   }
}