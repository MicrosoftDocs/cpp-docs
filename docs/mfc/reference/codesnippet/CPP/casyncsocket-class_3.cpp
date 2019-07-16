// CMyAsyncSocket is derived from CAsyncSocket and defines the
// following variables:
//    CString  m_sendBuffer;   //for async send
//    int      m_nBytesSent;
//    int      m_nBytesBufferSize;
void CMyAsyncSocket::OnSend(int nErrorCode)
{
   while (m_nBytesSent < m_nBytesBufferSize)
   {
      int dwBytes;

      if ((dwBytes = Send((LPCTSTR)m_sendBuffer + m_nBytesSent,
                          m_nBytesBufferSize - m_nBytesSent)) == SOCKET_ERROR)
      {
         if (GetLastError() == WSAEWOULDBLOCK)
         {
            break;
         }
         else
         {
            TCHAR szError[256];
            _stprintf_s(szError, _T("Server Socket failed to send: %d"),
                        GetLastError());
            Close();
            AfxMessageBox(szError);
         }
      }
      else
      {
         m_nBytesSent += dwBytes;
      }
   }

   if (m_nBytesSent == m_nBytesBufferSize)
   {
      m_nBytesSent = m_nBytesBufferSize = 0;
      m_sendBuffer = _T("");
   }

   CAsyncSocket::OnSend(nErrorCode);
}