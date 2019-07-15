TBBUTTONINFO tbi;

tbi.dwMask = TBIF_STYLE;
tbi.cbSize = sizeof(TBBUTTONINFO);
m_ToolBarCtrl.GetButtonInfo(0, &tbi);
tbi.fsStyle |= TBSTYLE_DROPDOWN;
m_ToolBarCtrl.SetButtonInfo(0, &tbi);