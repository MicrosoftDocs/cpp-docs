int CMyWinApp::Run()
{
   GdiplusStartupInput gdiSI;
   GdiplusStartupOutput gdiSO;
   ULONG_PTR gdiToken;
   ULONG_PTR gdiHookToken;

   gdiSI.SuppressBackgroundThread = TRUE;
   GdiplusStartup(&gdiToken, &gdiSI, &gdiSO);
   gdiSO.NotificationHook(&gdiHookToken);
   int nRet = CWinApp::Run();

   gdiSO.NotificationUnhook(gdiHookToken);
   GdiplusShutdown(gdiToken);

   return nRet;
}