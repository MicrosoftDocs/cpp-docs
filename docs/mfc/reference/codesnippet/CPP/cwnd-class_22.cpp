// Create a 5x10 gray caret in the edit control.
void CMyDlg::OnCreateGrayCaret()
{
   m_MyEdit.CreateGrayCaret(5, 10);
   m_MyEdit.ShowCaret();
}