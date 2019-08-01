// If the tree control does not have a tooltips control,
// then use m_ToolTips as the tooltips for the tree control.
if (m_TreeCtrl.GetToolTips() == NULL)
{
   m_TreeCtrl.SetToolTips(&m_ToolTips);
}