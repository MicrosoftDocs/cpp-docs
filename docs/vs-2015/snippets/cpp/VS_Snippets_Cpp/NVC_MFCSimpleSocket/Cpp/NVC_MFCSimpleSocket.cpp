// NVC_MFCSimpleSocket.cpp : Defines the entry point for the console application.
//
// Demonstrates simple usage of sockets using CSocket with CSocketFile and CArchive
//
// Topic												Snippet
// Windows Sockets: Example of Sockets Using Archives	1
// Windows Sockets: How Sockets with Archives Work		2
// Windows Sockets: Using Class CAsyncSocket			3 - 4
// Windows Sockets: Byte Ordering						5 - 7


#define _CRT_RAND_S
#include <stdlib.h>
#include "stdafx.h"
#include "NVC_MFCSimpleSocket.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object

CWinApp theApp;

using namespace std;

class CMessageServer
{
// <Snippet5>
   struct Message
   {
      long MagicNumber;
      unsigned short Command;
      short Param1;
      long Param2;
   };
// </Snippet5>
};

// <Snippet6>
struct Message
{
    long m_lMagicNumber;
    short m_nCommand;
    short m_nParam1;
    long m_lParam2;

    void Serialize( CArchive& ar );
};
// </Snippet6>

// <Snippet7>
void Message::Serialize(CArchive& ar)
{
    if (ar.IsStoring())
    {
        ar << (DWORD)htonl(m_lMagicNumber);
        ar << (WORD)htons(m_nCommand);
        ar << (WORD)htons(m_nParam1);
        ar << (DWORD)htonl(m_lParam2);
    }
    else
    {
        WORD w;
        DWORD dw;
        ar >> dw;
        m_lMagicNumber = ntohl((long)dw);
        ar >> w ;
        m_nCommand = ntohs((short)w);
        ar >> w;
        m_nParam1 = ntohs((short)w);
        ar >> dw;
        m_lParam2 = ntohl((long)dw);
    }
}
// </Snippet7>

enum APPTYPE
{
   CLIENT,
   SERVER
};
static const TCHAR* s_szClient = _T("-client");
static const TCHAR* s_szServer = _T("-server");
static const UINT s_iPort = 1036;

void PrintUsage()
{
   _tprintf_s(_T("Must specify either %7s or %7s and number of packets."), s_szClient, s_szServer);
}

void DisplayMessage(LPCTSTR szMsg)
{
   _tprintf_s(szMsg);
   _tprintf_s(_T("\n"));
}

// <Snippet1>
void PacketSerialize(long nPackets, CArchive& arData, CArchive& arAck)
{
   BYTE bValue = 0;
   WORD nCopies = 0;

    if (arData.IsStoring())
    {
        CString strText;
        errno_t err;
        unsigned int number;

        for(int p = 0; p < nPackets; p++)
        {
            err = rand_s(&number);
            // if (err == 0)...
            bValue = (BYTE)(number%256);

            err = rand_s(&number);
            // if (err == 0)...
            nCopies = (WORD)(number%32000);

            // Send header information
            arData << bValue << nCopies;
            for(int c = 0; c < nCopies; c++)
            {
                // Send data
                arData << bValue;
            }

            strText.Format(_T("Sender sent packet %d of %d (Value = %d, Copies = %d)"),
            p + 1, nPackets, (int)bValue, nCopies);

            // Send receipt string
            arData << strText;
            arData.Flush();

            // Receive acknowledgment
            arAck >> strText;
            // display it
            DisplayMessage(strText);
        }
    }
    else
    {
        CString strText;
        BYTE bCheck;

        for(int p = 0; p < nPackets; p++)
        {
            // Receive header information
            arData >> bCheck >> nCopies;
            for(int c = 0; c < nCopies; c++)
            {
                // Receive data
                arData >> bValue;
                if (bCheck != bValue)
            {
               AfxMessageBox(_T("Packet Failure"));
            }
         }

         // Receive receipt string and display it
         arData >> strText;
         DisplayMessage(strText);

         strText.Format(_T("Recipient received packet %d of %d (Value = %d, Copies = %d)"), 
            p + 1, nPackets, (int)bValue, nCopies);

         // Send acknowledgment
         arAck << strText;
         arAck.Flush();
      }
    }
}
// </Snippet1>

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
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
      if (3 != argc)
      {
         PrintUsage();
         return FALSE;
      }

      APPTYPE appType;
      long nPackets = _ttol(argv[2]);

      if (0 == _tcsicmp(_T("-client"), argv[1]))
      {
         appType = CLIENT;
      }
      else if (0 == _tcsicmp(_T("-server"), argv[1]))
      {
         appType = SERVER;		
      }
      else
      {
         PrintUsage();
         return FALSE;
      }

      if (!AfxSocketInit())
      {
         DisplayMessage(_T("AfxSocketInit failed."));
         return FALSE;
      }

      CString strError(_T("An error occurred!"));
      CSocket sockSvr;
      CSocket sockComm;
      CSocketFile* pSockFile = NULL;
      CArchive* pArData = NULL;
      CArchive* pArAck = NULL;
      try
      {

         if (SERVER == appType)
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

            if (!sockSvr.Accept(sockComm))
            {
               strError.FormatMessage(_T("Accept failed, error %1!d!"),
                  GetLastError());
               AfxThrowUserException();
            }

            pSockFile = new CSocketFile(&sockComm);
            // server receives data on data archive
            pArData = new CArchive(pSockFile, CArchive::load);
            // server sends acknowledgement on ack archive
            pArAck = new CArchive(pSockFile, CArchive::store);
         }
         else
         {
            if (!sockComm.Create())
            {
               strError.FormatMessage(_T("Socket create failed, error %1!d!."),
                  GetLastError());
               AfxThrowUserException();
            }

            if (!sockComm.Connect(_T("A-LARENC1"), s_iPort))
            {
               strError.FormatMessage(_T("Couldn't connect socket, error %1!d!."),
                  GetLastError());
               AfxThrowUserException();
            }


            pSockFile = new CSocketFile(&sockComm);
            // client on data archive
            pArData = new CArchive(pSockFile, CArchive::store);
            // client receives on ack archive
            pArAck = new CArchive(pSockFile, CArchive::load);
         }

         PacketSerialize(nPackets, *pArData, *pArAck);
      }
      catch (CUserException* e)
      {
         DisplayMessage(strError);
         e->Delete();
      }

      delete pArData;
      delete pArAck;
      delete pSockFile;

      {
// <Snippet3>
         CAsyncSocket sock;
         sock.Create( );    // Use the default parameters					
// </Snippet3>
      }

      {
// <Snippet4>
         CAsyncSocket* pSocket = new CAsyncSocket;
         int nPort = 27;
         pSocket->Create( nPort, SOCK_DGRAM );					
// </Snippet4>
         delete pSocket;
      }

      {
         CFile file(_T("__test__file.txt"), CFile::modeCreate | CFile::modeReadWrite);
         CArchive arl(&file, CArchive::load);
         CArchive ars(&file, CArchive::store);
         Message msg = {10, 15, 20, 25};
         msg.Serialize(ars);
         ars.Flush();
         file.SeekToBegin();
         msg.Serialize(arl);
      }
   }

   return nRetCode;
}

// CMySocket

CMySocket::CMySocket()
{
}

CMySocket::~CMySocket()
{
}


// CMySocket member functions

// <Snippet2>
void CMySocket::OnReceive(int nErrorCode)
{
   if (0 == nErrorCode)
   {
      CSocketFile file(this);
      CArchive ar(&file, CArchive::load);
      CString str;

      ar >> str;
   }
}
// </Snippet2>