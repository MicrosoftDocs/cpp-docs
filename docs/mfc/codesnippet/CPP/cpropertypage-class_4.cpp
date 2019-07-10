// Discard any selection the user made to this page.  The object
// in the view will be painted with the initial color when the
// CPropertySheet dialog is first shown. CColorPage is a 
// CPropertyPage-derived class.
void CColorPage::OnCancel()
{
   // Reset the color saved in the document class.  m_InitialColor
   // is a member variable of CColorPage and it is the color shown 
   // in the view before CPropertySheet is shown.
   // doc->m_Color is the color saved in the document class, and 
   // this is the color to be used by the view class.
   CMDIFrameWnd* pFrame = (CMDIFrameWnd*)AfxGetMainWnd();
   CMDIChildWnd* pChild = pFrame->MDIGetActive();
   CPSheetDoc* doc = (CPSheetDoc*)pChild->GetActiveDocument();
   doc->m_Color = m_InitialColor;

   // Tell the view to paint with the initial color.
   CView* view = pChild->GetActiveView();
   view->Invalidate();

   CPropertyPage::OnCancel();
}

// The default MFC implementation of OnReset() would call OnCancel().
void CColorPage::OnReset()
{
   CPropertyPage::OnReset();
}