// Turn the marquee animation on or off.
void CCProgressCtrl_s1Dlg::OnSetmarqueeOn()
{
   m_progressCtrl.SetMarquee(TRUE, nMarqueeInterval);
}

void CCProgressCtrl_s1Dlg::OnSetmarqueeOff()
{
   m_progressCtrl.SetMarquee(FALSE, nMarqueeInterval);
}