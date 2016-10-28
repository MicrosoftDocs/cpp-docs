LRESULT CMyWindow::OnMsg(UINT nMsg, WPARAM wParam, LPARAM lParam, 
   BOOL& bHandled)
{
   MSG msg = { m_hWnd, nMsg, wParam, lParam, 0, { 0, 0 } };
   LRESULT lRet = SendMessage(m_hWndOther, WM_FORWARDMSG, 0, (LPARAM)&msg);
   if(lRet == 0)   // not handled
      bHandled = FALSE;
   return 0;
}