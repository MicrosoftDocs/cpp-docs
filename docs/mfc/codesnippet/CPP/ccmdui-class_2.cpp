void CMyDoc::OnUpdateFileSave(CCmdUI *pCmdUI)
{
   // Enable the menu item if the file has been modified.
   pCmdUI->Enable(m_bModified);
}