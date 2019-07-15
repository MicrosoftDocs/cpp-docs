void CMainFrame::OnMdiTabbedDocument()
{
   CMDIChildWndEx* pMDIChild = DYNAMIC_DOWNCAST(CMDIChildWndEx, MDIGetActive());
   if (pMDIChild == NULL)
   {
      ASSERT(FALSE);
      return;
   }

   TabbedDocumentToControlBar(pMDIChild);
}