BOOL bDoingBackgroundProcessing = TRUE;
while (bDoingBackgroundProcessing)
{
   MSG msg;
   while (::PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE))
   {
      if (!AfxGetApp()->PumpMessage())
      {
         bDoingBackgroundProcessing = FALSE;
         ::PostQuitMessage(0);
         break;
      }
   }
   // let MFC do its idle processing
   LONG lIdle = 0;
   while (AfxGetApp()->OnIdle(lIdle++))
      ;
   // Perform some background processing here 
   // using another call to OnIdle
}