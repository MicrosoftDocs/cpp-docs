// This listening socket has been constructed
// in the primary thread.
void CListeningSocket::OnAccept(int nErrorCode)
{
   UNREFERENCED_PARAMETER(nErrorCode);

   // This CSocket object is used just temporarily
   // to accept the incoming connection.
   CSocket sConnected;
   Accept(sConnected);

   // Start the other thread.
   CSockThread *pSockThread = (CSockThread*)AfxBeginThread(
       RUNTIME_CLASS(CSockThread), THREAD_PRIORITY_NORMAL, 0, CREATE_SUSPENDED);
   if (NULL != pSockThread)
   {
      // Detach the newly accepted socket and save
      // the SOCKET handle in our new thread object.
      // After detaching it, it should no longer be
      // used in the context of this thread.
      pSockThread->m_hConnected = sConnected.Detach();
      pSockThread->ResumeThread();
   }
}