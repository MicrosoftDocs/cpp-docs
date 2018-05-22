// SockThread.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCSocketThread.h"
#include "ChatSocket.h"
#include "SockThread.h"


// CSockThread

IMPLEMENT_DYNCREATE(CSockThread, CWinThread)

CSockThread::CSockThread()
   : m_hConnected(NULL)
{
}

CSockThread::~CSockThread()
{
}

// <Snippet2>
BOOL CSockThread::InitInstance()
{
   // Attach the socket object to the socket handle
   // in the context of this thread.
   m_sConnected.Attach(m_hConnected);
   m_hConnected = NULL;

   return TRUE;
}
// </Snippet2>

int CSockThread::ExitInstance()
{
	// TODO:  perform any per-thread cleanup here
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(CSockThread, CWinThread)
END_MESSAGE_MAP()


// CSockThread message handlers
