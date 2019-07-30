// in StatusBarDemoView.h
CMFCStatusBar &GetStatusBar() const
{
   return ((CMainFrame *)AfxGetMainWnd())->GetStatusBar();
}