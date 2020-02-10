    {
        //Get information about the current tooltip. 
        TOOLINFO tInfo = {0};
        tInfo.cbSize = sizeof(TOOLINFO);
        CToolBarCtrl& m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
        CToolTipCtrl* m_toolTip = m_toolBarCtrl.GetToolTips();
        BOOL bRet = m_toolTip->GetCurrentTool( &tInfo );
    }