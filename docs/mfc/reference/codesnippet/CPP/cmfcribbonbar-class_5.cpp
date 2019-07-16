// Add quick access commands to the toolbar
CList<UINT, UINT> lstQATCmds;

lstQATCmds.AddTail(ID_FILE_NEW);
lstQATCmds.AddTail(ID_FILE_OPEN);
lstQATCmds.AddTail(ID_FILE_SAVE);
lstQATCmds.AddTail(ID_FILE_PRINT_DIRECT);

// CMFCRibbonBar m_wndRibbonBar
m_wndRibbonBar.SetQuickAccessCommands(lstQATCmds);