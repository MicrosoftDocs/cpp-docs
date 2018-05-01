#pragma once

// CMyAsyncSocket command target

class CMyAsyncSocket : public CAsyncSocket
{
public:
   CMyAsyncSocket();
   virtual ~CMyAsyncSocket();

   static CEvent s_eventDone;

public:
   CString m_sendBuffer;   //for async send
   int m_nBytesSent;
   int m_nBytesBufferSize;
   CString m_strRecv;

public:
   virtual void OnConnect(int nErrorCode);
public:
   virtual void OnReceive(int nErrorCode);
public:
   virtual void OnSend(int nErrorCode);
public:
   virtual void OnAccept(int nErrorCode);
};


