#pragma once

// CListeningSocket command target

class CListeningSocket : public CSocket
{
public:
	CListeningSocket();
	virtual ~CListeningSocket();
public:
   virtual void OnAccept(int nErrorCode);
};


