BOOL CMyWinApp::InitInstance()
{
#ifdef _DEBUG
   // Disable tracking of memory for the scope of the InitInstance()
   AfxEnableMemoryTracking(FALSE);
#endif  // _DEBUG

   // ...

#ifdef _DEBUG
   // Re-enable tracking of memory
   AfxEnableMemoryTracking(TRUE);
#endif  // _DEBUG

   return TRUE;
}