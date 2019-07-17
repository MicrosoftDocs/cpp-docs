int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
      return -1;

   EnableDocking(CBRS_ALIGN_ANY);

   // m_wndDlgBar is a CDialogBar member of CMainFrame
   // IDD_DIALOGBAR - Resource ID of the dialog
   // template. This dialog template should be created
   // with  the  style  WS_CHILD and no other style.
   // The template must not have the style WS_VISIBLE.
   if (!m_wndDlgBar.Create(this, IDD_DIALOGBAR,
                           CBRS_LEFT | CBRS_TOOLTIPS | CBRS_FLYBY, IDD_DIALOGBAR))
   {
      TRACE0("Failed to create DlgBar\n");
      return -1; // Fail to create.
   }

   return 0;
}