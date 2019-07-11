BOOL CMyDialog::PreTranslateMessage(MSG* pMsg)
{
   if (pMsg->message == WM_LBUTTONDOWN ||
      pMsg->message == WM_LBUTTONUP ||
      pMsg->message == WM_MOUSEMOVE)
   {
      m_ToolTipCtrl.RelayEvent(pMsg);
   }

   return CDialog::PreTranslateMessage(pMsg);
}