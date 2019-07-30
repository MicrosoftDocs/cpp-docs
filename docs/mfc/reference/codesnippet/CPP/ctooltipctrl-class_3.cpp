{
   // Display the most recent tooltip.
   CToolBarCtrl &m_toolBarCtrl = m_wndToolBar.GetToolBarCtrl();
   CToolTipCtrl *m_toolTip = m_toolBarCtrl.GetToolTips();
   m_toolTip->Popup();
}