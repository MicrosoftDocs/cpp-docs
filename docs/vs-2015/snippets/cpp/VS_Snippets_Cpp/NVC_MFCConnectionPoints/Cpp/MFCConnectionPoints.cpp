// MFCConnectionPoints.cpp : Defines the entry point for the console application.
//
// Demonstrates use of ConnectionPoints with MFC
//
// Topic											Snippet
// Connection Points							1 - 4
// COM Interface Entry Points				5
// Exported DLL Function Entry Points	6
// CConnectionPoint Class              7, 2, 4
// CConnectionPoint::GetNextConnection 4
// AfxConnectionAdvise                 8
// AfxConnectionUnadvise               9
// CONNECTION_IID                      10
// CONNECTION_PART                     2
// METHOD_PROLOGUE                     11, 5

#include "stdafx.h"
#include "afxctl.h"
#include "MFCConnectionPoints.h"
#include "MyClass.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


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
      CMyClass myclass;
      IID iidCPC = IID_IConnectionPointContainer;
      DWORD dwCookie = 0;

      IConnectionPointContainer* pUnkSrc;
      myclass.InternalQueryInterface(&iidCPC, (void**)&pUnkSrc); // does addref

// <Snippet8>
      //CMySink is a CCmdTarget-derived class supporting automation.
      //Instantiate the sink class.
      CMySink mysink;

      //Get a pointer to sink's IUnknown, no AddRef done.
      IID iid = IID_IUnknown;
      IUnknown* pUnkSink = mysink.GetInterface(&iid);

      //Establish a connection between source and sink.
      //pUnkSrc is IUnknown of server obtained by CoCreateInstance().
      //dwCookie is a cookie identifying the connection, and is needed
      //to terminate this connection.
      AfxConnectionAdvise(pUnkSrc, IID_ISampleSink, pUnkSink, FALSE, &dwCookie);
// </Snippet8>

      myclass.CallSinkFunc();

      {
// <Snippet9>
      //mysink is a CCmdTarget-derived class supporting automation.
      //Get a pointer to sink's IUnknown, no AddRef done.
      IID iid = IID_IUnknown;
      IUnknown* pUnkSink = mysink.GetInterface(&iid);

      //Terminate a connection between source and sink.
      //pUnkSrc is IUnknown of server obtained by CoCreateInstance().
      //dwCookie is a value obtained through AfxConnectionAdvise().
      AfxConnectionUnadvise(pUnkSrc, IID_ISampleSink, pUnkSink, FALSE, dwCookie);
// </Snippet9>
      }

      pUnkSrc->Release();
   }

   return nRetCode;
}
