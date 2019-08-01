void CMyApp::OnHideApplication()
{
   //m_pMainWnd is the main application window, a member of CMyApp
   ASSERT_VALID(m_pMainWnd);

   // hide the application's windows before closing all the documents
   m_pMainWnd->ShowWindow(SW_HIDE);
   m_pMainWnd->ShowOwnedPopups(FALSE);

   // put the window at the bottom of z-order, so it isn't activated
   m_pMainWnd->SetWindowPos(&CWnd::wndBottom, 0, 0, 0, 0,
                            SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
}