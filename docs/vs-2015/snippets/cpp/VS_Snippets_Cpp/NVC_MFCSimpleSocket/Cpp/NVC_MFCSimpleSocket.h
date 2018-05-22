#pragma once

#pragma once

// CMySocket command target

class CMySocket : public CSocket
{
public:
   CMySocket();
   virtual ~CMySocket();
public:
   virtual void OnReceive(int nErrorCode);
};


