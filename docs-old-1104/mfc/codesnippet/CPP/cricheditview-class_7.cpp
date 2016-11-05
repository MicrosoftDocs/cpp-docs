void CMyRichEditView::OnTextNotFound(LPCTSTR lpszFind)
{
   // Replace the beep with a message box
   CString str;
   str.Format(_T("'%s' was not found."), lpszFind);
   AfxMessageBox(str);
}