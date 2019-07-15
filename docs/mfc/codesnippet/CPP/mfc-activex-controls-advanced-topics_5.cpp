BOOL CMyAxUICtrl::PreTranslateMessage(MSG* pMsg)
{
   BOOL bHandleNow = FALSE;

   switch (pMsg->message)
   {
   case WM_KEYDOWN:
      switch (pMsg->wParam)
      {
      case VK_UP:
      case VK_DOWN:
      case VK_LEFT:
      case VK_RIGHT:
         bHandleNow = TRUE;
         break;
      }
      if (bHandleNow)
      {
         OnKeyDown((UINT)pMsg->wParam, LOWORD(pMsg->lParam), HIWORD(pMsg->lParam));
      }
      break;
   }
   return bHandleNow;
}