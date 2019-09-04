CView *CMyWinApp::SwitchView()
{
   CView *pActiveView = ((CFrameWnd *)m_pMainWnd)->GetActiveView();

   CView *pNewView = NULL;
   if (pActiveView == m_pOldView)
      pNewView = m_pNewView;
   else
      pNewView = m_pOldView;

      // Exchange view window IDs so RecalcLayout() works.
#ifndef _WIN32
   UINT temp = ::GetWindowWord(pActiveView->m_hWnd, GWW_ID);
   ::SetWindowWord(pActiveView->m_hWnd, GWW_ID, ::GetWindowWord(pNewView->m_hWnd, GWW_ID));
   ::SetWindowWord(pNewView->m_hWnd, GWW_ID, temp);
#else
   UINT temp = ::GetWindowLong(pActiveView->m_hWnd, GWL_ID);
   ::SetWindowLong(pActiveView->m_hWnd, GWL_ID, ::GetWindowLong(pNewView->m_hWnd, GWL_ID));
   ::SetWindowLong(pNewView->m_hWnd, GWL_ID, temp);
#endif

   pActiveView->ShowWindow(SW_HIDE);
   pNewView->ShowWindow(SW_SHOW);
   ((CFrameWnd *)m_pMainWnd)->SetActiveView(pNewView);
   ((CFrameWnd *)m_pMainWnd)->RecalcLayout();
   pNewView->Invalidate();
   return pActiveView;
}