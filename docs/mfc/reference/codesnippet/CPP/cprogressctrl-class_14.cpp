// Set the progrees control to normal or paused state.
void CCProgressCtrl_s1Dlg::OnSetstateNormal()
{
   m_progressCtrl.SetState(PBST_NORMAL);
}

void CCProgressCtrl_s1Dlg::OnSetstatePaused()
{
   m_progressCtrl.SetState(PBST_PAUSED);
}