void CMyRichEditView::OnUpdateLineNumber(CCmdUI *pCmdUI)
{
   int nLine = GetRichEditCtrl().LineFromChar(-1) + 1;

   CString string;
   string.Format(_T("Line %d"), nLine);
   pCmdUI->Enable(TRUE);
   pCmdUI->SetText(string);
}