CMDITabInfo mdiTabParams;
mdiTabParams.m_bTabCustomTooltips = TRUE;

if (bMDITabsVS2005Look)
{
   mdiTabParams.m_style = CMFCTabCtrl::STYLE_3D_VS2005;
   mdiTabParams.m_bDocumentMenu = TRUE;
}
else if (bOneNoteTabs)
{
   mdiTabParams.m_style = CMFCTabCtrl::STYLE_3D_ONENOTE;
   mdiTabParams.m_bAutoColor = bMDITabColors;
}

if (bActiveTabCloseButton)
{
   mdiTabParams.m_bTabCloseButton = FALSE;
   mdiTabParams.m_bActiveTabCloseButton = TRUE;
}

EnableMDITabbedGroups(TRUE, mdiTabParams);