void CMyEditView::OnInitialUpdate()
{
   CEditView::OnInitialUpdate();

   // get the edit control and set some initial properties for it
   CEdit &theEdit = GetEditCtrl();

   // adjust the left margin without changing the right margin
   DWORD dwMargins = theEdit.GetMargins();
   theEdit.SetMargins(20, HIWORD(dwMargins));

   // only accept 10k of text
   theEdit.SetLimitText(10 * 1024);
}