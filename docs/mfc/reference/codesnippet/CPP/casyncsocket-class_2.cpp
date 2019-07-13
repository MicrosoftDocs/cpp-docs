void CMyAsyncSocket::OnReceive(int nErrorCode) // CMyAsyncSocket is
                                               // derived from CAsyncSocket
{
  static int i = 0;

  i++;

  TCHAR buff[4096];
  int nRead;
  nRead = Receive(buff, 4096);

  switch (nRead)
  {
  case 0:
    Close();
    break;
  case SOCKET_ERROR:
    if (GetLastError() != WSAEWOULDBLOCK)
    {
      AfxMessageBox(_T("Error occurred"));
      Close();
    }
    break;
  default:
    buff[nRead] = _T('\0'); //terminate the string
    CString szTemp(buff);
    m_strRecv += szTemp; // m_strRecv is a CString declared
                         // in CMyAsyncSocket
    if (szTemp.CompareNoCase(_T("bye")) == 0)
    {
      ShutDown();
      s_eventDone.SetEvent();
    }
  }
  CAsyncSocket::OnReceive(nErrorCode);
}