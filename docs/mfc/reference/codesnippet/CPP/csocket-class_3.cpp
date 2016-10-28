BOOL CSockThread::InitInstance()
{
   // Attach the socket object to the socket handle
   // in the context of this thread.
   m_sConnected.Attach(m_hConnected);
   m_hConnected = NULL;

   return TRUE;
}