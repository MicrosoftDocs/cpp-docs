CMFCToolBarButton *pOffice2007 = NULL;
int nIndex = -1;

for (UINT uiCmd = ID_VIEW_APPLOOK_2007_1; uiCmd <= ID_VIEW_APPLOOK_2007_4; uiCmd++)
{
   // CMFCToolBar m_wndToolBarTheme
   nIndex = m_wndToolBarTheme.CommandToIndex(uiCmd);

   CMFCToolBarButton *pButton = m_wndToolBarTheme.GetButton(nIndex);

   if (pButton != NULL)
   {
      pOffice2007 = pButton;
      break;
   }
}