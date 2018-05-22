// NVC_MFCAsyncSocket.cpp : Defines the entry point for the console application.
//
// Demonstrates usage of CAsyncSocket.
//
// Topic										      Snippet
// CAsyncSocket::OnConnect						1
// CAsyncSocket::OnReceive						2
// CAsyncSocket::OnSend							3
// AfxSocketInit                          4

#include "stdafx.h"
#include "NVC_MFCAsyncSocket.h"
#include "MyAsyncSocket.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

const int s_iPort = 1441;

// The one and only application object

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
   UNREFERENCED_PARAMETER(envp);
   UNREFERENCED_PARAMETER(argv);
   UNREFERENCED_PARAMETER(argc);

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
// <Snippet4>
      if (!AfxSocketInit())
      {
         AfxMessageBox(_T("Failed to Initialize Sockets"), MB_OK | MB_ICONSTOP);
         return FALSE;
      }
// </Snippet4>

      CString strError(_T("An error occurred!"));
      CMyAsyncSocket sockSvr;
      CMyAsyncSocket sockClient;
      CMyAsyncSocket sockAccept;
      try
      {
         if (!sockSvr.Create(s_iPort))
         {
            strError.FormatMessage(_T("Couldn't create socket, error %1!d!"),
               GetLastError());
            AfxThrowUserException();
         }

         if (!sockSvr.Listen())
         {
            strError.FormatMessage(_T("Listen failed, error %1!d!"),
               GetLastError());
            AfxThrowUserException();
         }

         if (!sockClient.Create())
         {
            strError.FormatMessage(_T("Socket create failed, error %1!d!."),
               GetLastError());
            AfxThrowUserException();
         }

         if (!sockClient.Connect(_T("A-LARENC1"), s_iPort))
         {
            DWORD dwErr = GetLastError();
            if (WSAEWOULDBLOCK != dwErr)
            {
               strError.FormatMessage(_T("Couldn't connect socket, error %1!d!."),
                  dwErr);
               AfxThrowUserException();
            }
         }

         if (!sockSvr.Accept(sockAccept))
         {
            DWORD dwErr = GetLastError();
            if (WSAEWOULDBLOCK != dwErr)
            {
               strError.FormatMessage(_T("Accept failed, error %1!d!"),
                  dwErr);
               AfxThrowUserException();
            }
         }

         LPTSTR szStuff = _T("Here's some stuff.");
         sockClient.m_sendBuffer += _T("Buffered stuff.");
         sockClient.m_nBytesBufferSize = sockClient.m_sendBuffer.GetLength();
         sockClient.Send(szStuff, 38);

         AfxMessageBox(_T("I exist solely for my message loop!"));
      }
      catch (CUserException* e)
      {
         AfxMessageBox(strError);
         e->Delete();
      }
   }

   return nRetCode;
}
