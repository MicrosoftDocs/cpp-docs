// MyAsyncSocket.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCAsyncSocket.h"
#include "MyAsyncSocket.h"


// CMyAsyncSocket

CEvent CMyAsyncSocket::s_eventDone(FALSE, FALSE);

CMyAsyncSocket::CMyAsyncSocket()
   : m_nBytesSent(0)
   , m_nBytesBufferSize(0)
{
}

CMyAsyncSocket::~CMyAsyncSocket()
{
}


// CMyAsyncSocket member functions

// <Snippet1>
void CMyAsyncSocket::OnConnect(int nErrorCode)   // CMyAsyncSocket is 
                                                 // derived from CAsyncSocket
{
   if (0 != nErrorCode)
   {
      switch(nErrorCode)
      {
         case WSAEADDRINUSE: 
            AfxMessageBox(_T("The specified address is already in use.\n"));
            break;
         case WSAEADDRNOTAVAIL: 
            AfxMessageBox(_T("The specified address is not available from ")
            _T("the local machine.\n"));
            break;
         case WSAEAFNOSUPPORT: 
            AfxMessageBox(_T("Addresses in the specified family cannot be ")
            _T("used with this socket.\n"));
            break;
         case WSAECONNREFUSED: 
            AfxMessageBox(_T("The attempt to connect was forcefully rejected.\n"));
            break;
         case WSAEDESTADDRREQ: 
            AfxMessageBox(_T("A destination address is required.\n"));
            break;
         case WSAEFAULT: 
            AfxMessageBox(_T("The lpSockAddrLen argument is incorrect.\n"));
            break;
         case WSAEINVAL: 
            AfxMessageBox(_T("The socket is already bound to an address.\n"));
            break;
         case WSAEISCONN: 
            AfxMessageBox(_T("The socket is already connected.\n"));
            break;
         case WSAEMFILE: 
            AfxMessageBox(_T("No more file descriptors are available.\n"));
            break;
         case WSAENETUNREACH: 
            AfxMessageBox(_T("The network cannot be reached from this host ")
            _T("at this time.\n"));
            break;
         case WSAENOBUFS: 
            AfxMessageBox(_T("No buffer space is available. The socket ")
               _T("cannot be connected.\n"));
            break;
         case WSAENOTCONN: 
            AfxMessageBox(_T("The socket is not connected.\n"));
            break;
         case WSAENOTSOCK: 
            AfxMessageBox(_T("The descriptor is a file, not a socket.\n"));
            break;
         case WSAETIMEDOUT: 
            AfxMessageBox(_T("The attempt to connect timed out without ")
               _T("establishing a connection. \n"));
            break;
         default:
            TCHAR szError[256];
            _stprintf_s(szError, _T("OnConnect error: %d"), nErrorCode);
            AfxMessageBox(szError);
            break;
      }
      AfxMessageBox(_T("Please close the application"));
   }
   CAsyncSocket::OnConnect(nErrorCode);
}
// </Snippet1>

// <Snippet2>
void CMyAsyncSocket::OnReceive(int nErrorCode)   // CMyAsyncSocket is 
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
          AfxMessageBox (_T("Error occurred"));
          Close();
        }
        break;
      default:
        buff[nRead] = _T('\0'); //terminate the string
        CString szTemp(buff);
        m_strRecv += szTemp;   // m_strRecv is a CString declared 
                        // in CMyAsyncSocket
        if (szTemp.CompareNoCase(_T("bye")) == 0)
        {
           ShutDown();
           s_eventDone.SetEvent();
        }
   }
   CAsyncSocket::OnReceive(nErrorCode);
}
// </Snippet2>

// <Snippet3>
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
            AfxMessageBox (szError);
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
// </Snippet3>

void CMyAsyncSocket::OnAccept(int nErrorCode)
{
   UNREFERENCED_PARAMETER(nErrorCode);
}
