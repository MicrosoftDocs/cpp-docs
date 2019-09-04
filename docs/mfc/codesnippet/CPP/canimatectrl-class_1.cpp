// This example creates a secondary thread that implements
// the methods of CAnimateCtrl. The procedure of the thread
// is MyClipThreadProc and the thread was created with the
// code AfxBeginThread( MyClipThreadProc, (LPVOID) pParentWnd).
// The example code creates and initializes an animation control,
// then proceeds to pump messages from the queue until one the
// private messages WM_STOPCLIP, WM_PLAYCLIP, WM_SHOWFIRSTFRAME or
// WM_SHOWLASTFRAME is received. The appropriate action is done for
// these messages. The thread ends when the WM_STOPCLIP is received.
// NOTE: the thread parameter, pParam, is a pointer to a CWnd object
// that will be the parent of the animation control.

#define WM_STOPCLIP WM_USER + 1
#define WM_PLAYCLIP WM_USER + 2
#define WM_SHOWFIRSTFRAME WM_USER + 3
#define WM_SHOWLASTFRAME WM_USER + 4

UINT MyClipThreadProc(LPVOID pParam)
{
   // NOTE: pParentWnd is the parent window of the animation control.
   CWnd *pParentWnd = (CWnd *)pParam;
   CAnimateCtrl cAnimCtrl;

   // Create the animation control.
   if (!cAnimCtrl.Create(WS_CHILD | WS_VISIBLE | ACS_CENTER,
                         CRect(10, 10, 100, 100), pParentWnd, 1))
   {
      return false;
   }

   // Open the AVI file.
   if (!cAnimCtrl.Open(_T("MyAvi.avi")))
   {
      return false;
   }

   // Pump message from the queue until the stop play message is received.
   MSG msg;
   while (GetMessage(&msg, NULL, 0, 0) && (msg.message != WM_STOPCLIP))
   {
      switch (msg.message)
      {
         // Start playing from the first frame to the last,
         // continuously repeating.
      case WM_PLAYCLIP:
         if (!cAnimCtrl.Play(0, (UINT)-1, (UINT)-1))
            return false;
         break;

         // Show the first frame.
      case WM_SHOWFIRSTFRAME:
         if (!cAnimCtrl.Seek(0))
            return false;
         cAnimCtrl.RedrawWindow();
         break;

         // Show the last frame.
      case WM_SHOWLASTFRAME:
         if (!cAnimCtrl.Seek((UINT)-1))
            return false;
         cAnimCtrl.RedrawWindow();
         break;
      }

      TranslateMessage(&msg);
      DispatchMessage(&msg);
   }

   cAnimCtrl.Stop();
   cAnimCtrl.Close();

   return true;
}