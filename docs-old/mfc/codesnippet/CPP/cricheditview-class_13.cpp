void CMyRichEditView::OnInitialUpdate()
{
   CRichEditView::OnInitialUpdate();

   // Turn on the horizontal scroll bar
   m_nWordWrap = WrapNone;
   WrapChanged();
}