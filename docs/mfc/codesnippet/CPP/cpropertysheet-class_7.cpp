// The code fragment below sets the last active page (i.e. the 
// active page when the propertysheet was closed) to be the first 
// visible page when the propertysheet is shown. The last active 
// page was saved in m_LastActivePage, (a member variable of 
// CDocument-derived class) when OK was selected from the 
// propertysheet. CMyPropertySheet is a CPropertySheet-derived class.
BOOL CMyPropertySheet::OnInitDialog()
{
   BOOL bResult = CPropertySheet::OnInitDialog();

   CMDIFrameWnd* pframe = (CMDIFrameWnd*)AfxGetMainWnd();
   CMDIChildWnd* pchild = pframe->MDIGetActive();
   CPSheetDoc* doc = (CPSheetDoc*)pchild->GetActiveDocument();
   SetActivePage(doc->m_LastActivePage);

   return bResult;
}

BOOL CMyPropertySheet::OnCommand(WPARAM wParam, LPARAM lParam)
{
   if (LOWORD(wParam) == IDOK)
   {
      CMDIFrameWnd* pframe = (CMDIFrameWnd*)AfxGetMainWnd();
      CMDIChildWnd* pchild = pframe->MDIGetActive();
      CPSheetDoc* doc = (CPSheetDoc*)pchild->GetActiveDocument();
      doc->m_LastActivePage = GetPageIndex(GetActivePage()); // or GetActiveIndex()
   }

   return CPropertySheet::OnCommand(wParam, lParam);
}