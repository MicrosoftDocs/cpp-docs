LRESULT CMainFrame::OnGetTabToolTip(WPARAM /*wp*/, LPARAM lp)
{
   CMFCTabToolTipInfo *pInfo = (CMFCTabToolTipInfo*)lp;
   ASSERT(pInfo != NULL);

   if (pInfo)
   {
      ASSERT_VALID(pInfo->m_pTabWnd);
      if (!pInfo->m_pTabWnd->IsMDITab())
      {
         return 0;
      }
      pInfo->m_strText.Format(_T("Tab #%d Custom Tooltip"), pInfo->m_nTabIndex + 1);
   }

   return 0;
}