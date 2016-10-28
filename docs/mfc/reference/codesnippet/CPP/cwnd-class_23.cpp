// Create a 5x10 solid caret in the edit control.
void CMyDlg::OnCreateSolidCaret()
{
   m_MyEdit.CreateSolidCaret(5, 10);
   m_MyEdit.ShowCaret();
}