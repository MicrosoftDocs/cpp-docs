#pragma once

class CSimpleSocket : public CSocket
{
public:
   CSimpleSocket();
	virtual ~CSimpleSocket();

   CString m_str;
public:
   virtual void Serialize(CArchive& ar);
};

// CChatSocket command target

class CChatSocket;

class CDataHolder
{
public:
   CDataHolder(CChatSocket* pSock) : m_pSock(pSock) { };
   void ProcessPendingRead();
   CChatSocket* m_pSock;

   BYTE m_UnicodeTag[3];
   BYTE m_cch;
   TCHAR m_szData[64];
};

class CChatSocket : public CSocket
{
public:
   CChatSocket();
   virtual ~CChatSocket();

   CDataHolder* m_pDoc;
   DWORD m_dwExpected;

public:
   virtual void OnReceive(int nErrorCode);
};
