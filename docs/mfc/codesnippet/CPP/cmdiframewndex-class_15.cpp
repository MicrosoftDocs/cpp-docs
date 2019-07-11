void COutputList1::OnViewOutput()
{
   CBasePane* pParentBar = DYNAMIC_DOWNCAST(CBasePane, GetOwner());
   CFrameWndEx* pMainFrame = DYNAMIC_DOWNCAST(CFrameWndEx, GetTopLevelFrame());

   if (pMainFrame != NULL && pParentBar != NULL)
   {
      pMainFrame->SetFocus();
      pMainFrame->ShowPane(pParentBar, FALSE, FALSE, FALSE);
   }
}