// Simulate the selection of OK and Cancel buttons when Alt+K and
// Alt+C are pressed.  CMyPropertySheet is a CPropertySheet-derived 
// class.
BOOL CMyPropertySheet::PreTranslateMessage(MSG* pMsg)
{
   if (pMsg->message >= WM_KEYFIRST && pMsg->message <= WM_KEYLAST)
   {
      BOOL altkey = GetKeyState(VK_MENU) < 0;
      if (altkey)
      {
         BOOL handled = TRUE;
         switch (toupper((int)pMsg->wParam))
         {
         case 'C':                     // for Alt+C - Cancel button
            PressButton(PSBTN_CANCEL);   // or EndDialog(IDCANCEL);
            break;

         case 'K':                     // for Alt+K - OK button
            PressButton(PSBTN_OK);      // or EndDialog(IDOK);
            break;

         default:
            handled = FALSE;
         }

         if (handled)
            return TRUE;
      }
   }

   return CPropertySheet::PreTranslateMessage(pMsg);
}