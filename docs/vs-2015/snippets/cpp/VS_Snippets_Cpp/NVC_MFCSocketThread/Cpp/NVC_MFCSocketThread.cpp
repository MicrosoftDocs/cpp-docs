// NVC_MFCSocketThread.cpp : Defines the entry point for the console application.
//
// Snippets for sockets in MFC.
//
// Topic                   Snippet
// CSocket Class           4
// CSocket::Attach         1 - 3
// CSocketFile Class       4

#include "stdafx.h"
#include "NVC_MFCSocketThread.h"

#include "ChatSocket.h"
#include "ListeningSocket.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

static const int s_iPort = 1036;

// The one and only application object

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
   UNREFERENCED_PARAMETER(argc);
   UNREFERENCED_PARAMETER(argv);
   UNREFERENCED_PARAMETER(envp);

	int nRetCode = 0;

	// initialize MFC and print and error on failure
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: change error code to suit your needs
		_tprintf(_T("Fatal Error: MFC initialization failed\n"));
		nRetCode = 1;
	}
	else
	{
      if (!AfxSocketInit())
      {
         AfxMessageBox(_T("AfxSocketInit failed."));
         return FALSE;
      }

      CString strError(_T("An error occurred!"));
      CSimpleSocket sockSend;
      CListeningSocket sockListen;
      try
      {
         if (!sockListen.Create(s_iPort))
         {
            strError.FormatMessage(_T("Couldn't create socket, error %1!d!"),
               GetLastError());
            AfxThrowUserException();
         }

         if (!sockListen.Listen())
         {
            strError.FormatMessage(_T("Listen failed, error %1!d!"),
               GetLastError());
            AfxThrowUserException();
         }

         if (!sockSend.Create())
         {
            strError.FormatMessage(_T("Socket create failed, error %1!d!."),
               GetLastError());
            AfxThrowUserException();
         }

         if (!sockSend.Connect(_T("A-LARENC1"), s_iPort))
         {
            strError.FormatMessage(_T("Couldn't connect socket, error %1!d!."),
               GetLastError());
            AfxThrowUserException();
         }

         CSocketFile sockFile(&sockSend);
         CArchive ar(&sockFile, CArchive::store);

         sockSend.m_str = _T("Here's some stuff.");
         sockSend.Serialize(ar);
         ar.Flush();

         AfxMessageBox(_T("I'm a message loop!"));
      }
      catch (CUserException* e)
      {
         AfxMessageBox(strError);
         e->Delete();
      }
	}

	return nRetCode;
}
