CPaneDivider *pDefaultPaneDivider = m_wndDlgBar.GetDefaultPaneDivider();
if (pDefaultPaneDivider == NULL)
{
   AfxMessageBox(_T ("The DialogBar is not docked."));
   return;
}

BOOL bLeftBar = FALSE;
CPaneContainer *pContainer = pDefaultPaneDivider->FindPaneContainer(&m_wndDlgBar, bLeftBar);