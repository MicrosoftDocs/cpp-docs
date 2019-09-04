// CMFCRibbonMiniToolBar* pFloaty
CList<UINT, UINT> lstCmds;

lstCmds.AddTail(ID_FONT_FONT);
lstCmds.AddTail(ID_FONT_FONTSIZE);
lstCmds.AddTail(ID_FONT_GROWFONT);
lstCmds.AddTail(ID_FONT_SHRINK);
lstCmds.AddTail(ID_WRITE_CHANGESTYLES);
lstCmds.AddTail(ID_EDIT_COPYFORMAT);
lstCmds.AddTail(ID_FONT_BOLD);
lstCmds.AddTail(ID_FONT_ITALIC);
lstCmds.AddTail(ID_PARA_CENTER);
lstCmds.AddTail(ID_FONT_TEXTHIGHLIGHT);
lstCmds.AddTail(ID_FONT_COLOR);
lstCmds.AddTail(ID_PARA_DECREASEINDENT);
lstCmds.AddTail(ID_PARA_INCREASEINDENT);
lstCmds.AddTail(ID_PARA_BULLETS);

pFloaty->SetCommands(((CMainFrame*)GetTopLevelFrame())->GetRibbonBar(), lstCmds);