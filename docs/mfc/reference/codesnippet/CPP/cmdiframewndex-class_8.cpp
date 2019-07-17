void CMainFrame::UpdateMDITabs(BOOL bResetMDIChild)
{
   CMDITabInfo params;
   HWND hwndActive = NULL;

   switch (theApp.m_Options.m_nMDITabsType)
   {
   case CMDITabOptions::None:
   {
      BOOL bCascadeMDIChild = FALSE;

      if (IsMDITabbedGroup())
      {
         EnableMDITabbedGroups(FALSE, params);
         bCascadeMDIChild = TRUE;
      }
      else if (AreMDITabs())
      {
         EnableMDITabs(FALSE);
         bCascadeMDIChild = TRUE;
      }

      if (bCascadeMDIChild)
      {
         // CMDIClientAreaWnd m_wndClientArea
         hwndActive = (HWND)m_wndClientArea.SendMessage(WM_MDIGETACTIVE);
         m_wndClientArea.PostMessage(WM_MDICASCADE);
         m_wndClientArea.UpdateTabs(false);
         m_wndClientArea.SetActiveTab(hwndActive);
         ::BringWindowToTop(hwndActive);
      }
   }
   break;

   case CMDITabOptions::MDITabsStandard:
      hwndActive = (HWND)m_wndClientArea.SendMessage(WM_MDIGETACTIVE);
      m_wndClientArea.PostMessage(WM_MDIMAXIMIZE, LPARAM(hwndActive), 0L);
      ::BringWindowToTop(hwndActive);

      EnableMDITabs(TRUE, theApp.m_Options.m_bMDITabsIcons, theApp.m_Options.m_bTabsOnTop ? CMFCTabCtrl::LOCATION_TOP : CMFCTabCtrl::LOCATION_BOTTOM, theApp.m_Options.m_nTabsStyle);

      GetMDITabs().EnableAutoColor(theApp.m_Options.m_bTabsAutoColor);
      GetMDITabs().EnableTabDocumentsMenu(theApp.m_Options.m_bMDITabsDocMenu);
      GetMDITabs().EnableTabSwap(theApp.m_Options.m_bDragMDITabs);
      GetMDITabs().SetTabBorderSize(theApp.m_Options.m_nMDITabsBorderSize);
      GetMDITabs().SetFlatFrame(theApp.m_Options.m_bFlatFrame);
      GetMDITabs().EnableCustomToolTips(theApp.m_Options.m_bCustomTooltips);
      GetMDITabs().EnableCustomToolTips(theApp.m_Options.m_bCustomTooltips);
      GetMDITabs().EnableActiveTabCloseButton(theApp.m_Options.m_bActiveTabCloseButton);
      break;