void CMyApp::SetLandscapeMode()
{
   PRINTDLG pd;
   pd.lStructSize = (DWORD)sizeof(PRINTDLG);
   BOOL bRet = GetPrinterDeviceDefaults(&pd);
   if (bRet)
   {
      // protect memory handle with ::GlobalLock and ::GlobalUnlock
      DEVMODE FAR *pDevMode = (DEVMODE FAR*)::GlobalLock(pd.hDevMode);
      // set orientation to landscape
      pDevMode->dmOrientation = DMORIENT_LANDSCAPE;
      ::GlobalUnlock(pd.hDevMode);
   }
}