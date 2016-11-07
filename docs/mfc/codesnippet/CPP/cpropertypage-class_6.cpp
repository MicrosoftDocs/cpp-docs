// Accept the new color selection and dismiss the CPropertySheet
// dialog. The view's object will be painted with the new selected
// color. CColorPage is a CPropertyPage-derived class.
void CColorPage::OnOK() 
{
   // Store the new selected color to a member variable of 
   // document class.  m_Color is a member varible of CColorPage 
   // and it stores the new selected color.  doc->m_Color is 
   // the color saved in the document class and it is the color 
   // used by the view class.
   CMDIFrameWnd* pframe = (CMDIFrameWnd*) AfxGetMainWnd();
   CMDIChildWnd* pchild = pframe->MDIGetActive();
   CPSheetDoc* doc = (CPSheetDoc*) pchild->GetActiveDocument();
   doc->m_Color = m_Color;

   // Tell the view to paint with the new selected color.
   CView* view = pchild->GetActiveView();
   view->Invalidate();
  
   CPropertyPage::OnOK();
}

// The default MFC implementation of OnApply() would call OnOK().
BOOL CColorPage::OnApply() 
{
   return CPropertyPage::OnApply();
}