BOOL CMyWinApp::IsIdleMessage(MSG* pMsg)
{
   if (!CWinApp::IsIdleMessage(pMsg) || pMsg->message == WM_TIMER)
      return FALSE;
   else
      return TRUE;
}