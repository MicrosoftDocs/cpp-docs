CMDITabInfo mdiTabParams;
mdiTabParams.m_style = CMFCTabCtrl::STYLE_3D_ONENOTE;
// set to FALSE to place close button at right of tab area
mdiTabParams.m_bActiveTabCloseButton = FALSE;
// set to TRUE to enable document icons on MDI taba
mdiTabParams.m_bTabIcons = TRUE;
// set to FALSE to disable auto-coloring of MDI tabs
mdiTabParams.m_bAutoColor = FALSE;
// set to TRUE to enable the document menu at the right edge of the tab area
mdiTabParams.m_bDocumentMenu = TRUE;
//set to TRUE to enable the user to change the tabs positions by dragging the tabs
mdiTabParams.m_bEnableTabSwap = TRUE;
// set to TRUE to give each tab window has a flat frame
mdiTabParams.m_bFlatFrame = TRUE;
// set to TRUE to enable each tab window to display the Close button on the right edge of the tab.
mdiTabParams.m_bTabCloseButton = FALSE;
// set to TRUE to enable the tabs to display tooltips.
mdiTabParams.m_bTabCustomTooltips = TRUE;
// Specifies that the tabs labels are located at the top of the page
mdiTabParams.m_tabLocation = CMFCTabCtrl::LOCATION_TOP;
EnableMDITabbedGroups(TRUE, mdiTabParams);