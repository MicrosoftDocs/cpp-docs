BOOL CMyApp::OnIdle(LONG lCount)
{
   BOOL bMore = CWinApp::OnIdle(lCount);

   if (lCount == 0)
   {
      TRACE(_T("App idle for short period of time\n"));
      bMore = TRUE;
   }
   else if (lCount == 10)
   {
      TRACE(_T("App idle for longer amount of time\n"));
      bMore = TRUE;
   }
   else if (lCount == 100)
   {
      TRACE(_T("App idle for even longer amount of time\n"));
      bMore = TRUE;
   }
   else if (lCount == 1000)
   {
      TRACE(_T("App idle for quite a long period of time\n"));
      // bMore is not set to TRUE, no longer need idle
      // IMPORTANT: bMore is not set to FALSE since CWinApp::OnIdle may
      // have more idle tasks to complete.
   }

   return bMore;
   // return TRUE as long as there are any more idle tasks
}