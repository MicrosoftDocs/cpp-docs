// The following demonstrates trivial usage of the CEvent class.
// A CEvent object is created and passed as a parameter to another
// thread.  The other thread will wait for the event to be signaled
// and then exit

UINT __cdecl MyThreadProc(LPVOID lpParameter)
{
   CEvent *pEvent = (CEvent *)(lpParameter);
   VERIFY(pEvent != NULL);

   // Wait for the event to be signaled
   ::WaitForSingleObject(pEvent->m_hObject, INFINITE);

   // Terminate the thread
   ::AfxEndThread(0, FALSE);
   return 0L;
}

void CEvent_Test()
{
   // Create the CEvent object that will be passed to the thread routine
   CEvent *pEvent = new CEvent(FALSE, FALSE);

   // Create a thread that will wait on the event
   CWinThread *pThread;
   pThread = ::AfxBeginThread(&MyThreadProc, pEvent, 0, 0, CREATE_SUSPENDED, NULL);
   pThread->m_bAutoDelete = FALSE;
   pThread->ResumeThread();

   // Signal the thread to do the next work item
   pEvent->SetEvent();

   // Wait for the thread to consume the event and return
   ::WaitForSingleObject(pThread->m_hThread, INFINITE);
   delete pThread;
   delete pEvent;
}