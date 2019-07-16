// Changes the caret of the edit control in this dialog box
void CMyDlg::OnChangeCaret()
{
   m_pBitmapCaret = new CBitmap;
   m_pBitmapCaret->LoadBitmap(IDB_HAPPY_BITMAP);
   m_MyEdit.CreateCaret(m_pBitmapCaret);
   m_MyEdit.ShowCaret();
}