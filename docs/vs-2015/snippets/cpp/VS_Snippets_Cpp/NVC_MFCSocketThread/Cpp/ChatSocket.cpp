// ChatSocket.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCSocketThread.h"
#include "ChatSocket.h"


// CChatSocket

CChatSocket::CChatSocket()
   : m_dwExpected(2)
{
   m_pDoc = new CDataHolder(this);
}

CChatSocket::~CChatSocket()
{
   delete m_pDoc;
}


// CChatSocket member functions

// <Snippet4>
void CChatSocket::OnReceive(int nErrorCode)
{
   CSocket::OnReceive(nErrorCode);

   DWORD dwReceived;

   if (IOCtl(FIONREAD, &dwReceived))
   {
      if (dwReceived >= m_dwExpected)   // Process only if you have enough data
         m_pDoc->ProcessPendingRead();
   }
   else
   {
      // Error handling here
   }
}
// </Snippet4>

CSimpleSocket::CSimpleSocket()
{
}

CSimpleSocket::~CSimpleSocket()
{
}

void CSimpleSocket::Serialize(CArchive& ar)
{
   if (ar.IsStoring())
   {	// storing code
      ar << m_str;
      TRACE(_T("Stored: %s\n"), m_str);
   }
   else
   {	// loading code
      ar >> m_str;
      TRACE(_T("Loaded: %s\n"), m_str);
   }
}

void CDataHolder::ProcessPendingRead()
{
   m_pSock->Receive(&m_UnicodeTag, sizeof(m_UnicodeTag));
   m_pSock->Receive(&m_cch, sizeof(m_cch));
   m_cch = min(m_cch, sizeof(m_szData) / sizeof(TCHAR));
   m_pSock->Receive(m_szData, m_cch * sizeof(TCHAR));
   m_szData[m_cch] = _T('\0');
   TRACE(_T("Received: %s\n"), m_szData);
}