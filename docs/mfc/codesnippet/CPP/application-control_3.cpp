// Another example
//CWinApp-derived class
BOOL CCMFCAutomationApp::InitInstance()
{
   CWinApp::InitInstance();

   // Initialize OLE libraries
   if (!AfxOleInit())
   {
      AfxMessageBox(IDP_OLE_INIT_FAILED);
      return FALSE;
   }

   CWinThread *pThread = AfxGetThread();
   if (pThread != NULL)
   {
      // Destroy message filter, thereby unregistering it.
      delete pThread->m_pMessageFilter;
      pThread->m_pMessageFilter = NULL;

      // Create the new message filter object.
      //CMyMessageFilter is derived from COleMessageFilter
      pThread->m_pMessageFilter = new CMyMessageFilter;
      ASSERT(AfxOleGetMessageFilter() != NULL);

      // Register the new message filter object.
      AfxOleGetMessageFilter()->Register();
   }
   //...
   //...
   //...
}