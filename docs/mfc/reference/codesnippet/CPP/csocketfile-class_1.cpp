void CChatSocket::OnReceive(int nErrorCode)
{
   CSocket::OnReceive(nErrorCode);

   DWORD dwReceived;

   if (IOCtl(FIONREAD, &dwReceived))
   {
      if (dwReceived >= m_dwExpected) // Process only if you have enough data
         m_pDoc->ProcessPendingRead();
   }
   else
   {
      // Error handling here
   }
}