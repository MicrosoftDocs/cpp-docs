// MFCWinInet.cpp : Defines the entry point for the console application.
//
// Demonstrates usage of the various WinInet classes in MFC
//
// Topic											   Snippet
// WinInet Basics									1 - 4
// CAsyncMonikerFile::OnDataAvailable		5
// CAsyncMonikerFile::Open						6 - 7
// CFtpFileFind Class                     8
// CHttpFile::SendRequestEx               9

#include "stdafx.h"
#include "MFCWinInet.h"
#include "StdFile.h"
#include "HttpFile.h"
#include "FtpFile.h"
#include "GopherDir.h"
#include "MyMoniker.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// The one and only application object

CWinApp theApp;

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
      bool bContinue = true;
      TCHAR szURL[64];
      TCHAR szRemoteFile[64];
      TCHAR szLocalFile[64];
      CMyMoniker* pMon = NULL;
      int nChoice = 0;
      while (bContinue)
      {
         printf_s("1 = raw URL\n"
                "2 = HTTP URL\n"
                "3 = FTP File\n"
                "4 = Gopher File\n"
                "5 = Moniker\n"
                "6 = Enum ftp.microsoft.com\n"
                "7 = Write to MfcIsapi.dll\n"
                "10 = Quit\n"
                "Whaddya want: ");
         _tscanf_s(L"%d", &nChoice);
         switch (nChoice)
         {
         case 1:
            printf_s("Enter a raw URL: ");
            _tscanf_s(L"%63s", szURL, 64);
            DisplayPage(szURL);
            break;

         case 2:
            printf_s("Enter an HTTP server: ");
            _tscanf_s(L"%63s", szURL, 64);
            printf_s("Now the file name: ");
            _tscanf_s(L"%63s", szRemoteFile, 64);
            DisplayHttpPage(szURL, szRemoteFile);
            break;

         case 3:
            printf_s("Enter an FTP server: ");
            _tscanf_s(L"%63s", szURL, 64);
            printf_s("Now the remote filename: ");
            _tscanf_s(L"%63s", szRemoteFile, 64);
            printf_s("Now the local filename: ");
            _tscanf_s(L"%63s", szLocalFile, 64);
            GetFtpFile(szURL, szRemoteFile, szLocalFile);
            break;

         case 4:
            printf_s("Enter a Gopher server: ");
            _tscanf_s(L"%63s", szURL, 64);
            printf_s("Now the filename: ");
            _tscanf_s(L"%63s", szRemoteFile, 64);
            RetrieveGopherFile(szURL, szRemoteFile);
            break;

         case 5:
         {
            delete pMon;
            pMon = NULL;

            printf_s("Enter a moniker file: ");
            CString strMonFile;
            LPTSTR pszMonFile = strMonFile.GetBufferSetLength(64);
            _tscanf_s(L"%63s", pszMonFile, 64);
            strMonFile.ReleaseBuffer();
            
            if (0 == strMonFile.Compare(_T("mscom")))
            {
// <Snippet6>
               CMyMoniker* pMyMoniker = new CMyMoniker();
               pMyMoniker->Open(_T("http://www.microsoft.com"));
// </Snippet6>

               pMon = pMyMoniker;
            }
            else if (0 == strMonFile.Compare(_T("file")))
            {
// <Snippet7>
               CMyMoniker* pMyMoniker = new CMyMoniker();
               pMyMoniker->Open(_T("file:c:\\mydata.dat"));
// </Snippet7>

               pMon = pMyMoniker;
            }
            else
            {
               CMyMoniker* pMyMoniker = new CMyMoniker();
               pMyMoniker->Open(strMonFile);

               pMon = pMyMoniker;
            }
            
            break;
         }

         case 6:
            EnumFtpMicrosoftCom();
            break;

         case 7:
            WriteToMfcIsapi();
            break;

         case 10:
            printf_s("Bye now.");
            bContinue = false;
            break;

         default:
            printf_s("That's not a valid choice!\n");
            break;
         }

         printf_s("\n\n");
      }

      delete pMon;
   }

   return nRetCode;
}
