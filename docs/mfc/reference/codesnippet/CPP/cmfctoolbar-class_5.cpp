// CMenu menuHistory
// CString str
m_wndToolBar.ReplaceButton(ID_GO_BACK,
                           CMFCToolBarMenuButton(ID_GO_BACK, menuHistory,
                                                 GetCmdMgr()->GetCmdImage(ID_GO_BACK), str));