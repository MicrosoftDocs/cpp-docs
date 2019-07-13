// Set the progress bar color to red, green, blue, or
// the system default. The SetBarColor method has an
// effect only if the Windows system theme is Classic.
void CCProgressCtrl_s1Dlg::OnSetbarcolorRed()
{
   m_progressCtrl.SetBarColor(RGB(255, 0, 0));
}

void CCProgressCtrl_s1Dlg::OnSetbarcolorGreen()
{
   m_progressCtrl.SetBarColor(RGB(0, 255, 0));
}

void CCProgressCtrl_s1Dlg::OnSetbarcolorBlue()
{
   m_progressCtrl.SetBarColor(RGB(0, 0, 255));
}

void CCProgressCtrl_s1Dlg::OnSetbarcolorOri()
{
   m_progressCtrl.SetBarColor(CLR_DEFAULT);
}