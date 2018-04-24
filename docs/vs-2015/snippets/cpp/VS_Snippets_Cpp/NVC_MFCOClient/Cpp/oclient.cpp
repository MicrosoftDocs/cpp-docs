// oclient.cpp : Defines the class behaviors for the application.
//
// Demonstrates Ole Client using MFC
// 
// Topic											Snippet
// How to: Implement Tracking in Your Code			1 - 5
// Rubber-Banding and Trackers						6

#include "stdafx.h"
#include <stddef.h>
#include "oclient.h"

#include "frame.h"
#include "maindoc.h"
#include "mainview.h"
#include "splitfra.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// The one and only COleClientApp object

COleClientApp NEAR theApp;

// this is the GUID for OCLIENT documents
static const GUID BASED_CODE clsid =
   { 0x00021842, 0, 0, { 0xC0, 0, 0, 0, 0, 0, 0, 0x46 } };

/////////////////////////////////////////////////////////////////////////////
// COleClientApp

BEGIN_MESSAGE_MAP(COleClientApp, CWinApp)
   //{{AFX_MSG_MAP(COleClientApp)
   ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
   //}}AFX_MSG_MAP
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
   // Standard print setup command
   ON_COMMAND(ID_FILE_PRINT_SETUP, CWinApp::OnFilePrintSetup)
   // Global help commands
   ON_COMMAND(ID_HELP_INDEX, CWinApp::OnHelpIndex)
   ON_COMMAND(ID_HELP, CWinApp::OnHelp)
   ON_COMMAND(ID_DEFAULT_HELP, CWinApp::OnHelpIndex)
   ON_COMMAND(ID_CONTEXT_HELP, CWinApp::OnContextHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COleClientApp construction
// Place all significant initialization in InitInstance

COleClientApp::COleClientApp()
{
      EnableHtmlHelp();
}

/////////////////////////////////////////////////////////////////////////////
// COleClientApp initialization

BOOL COleClientApp::InitInstance()
{
#if defined(_DEBUG) && !defined(_AFX_NO_DEBUG_CRT)
   // turn on extra memory tracking
   afxMemDF |= checkAlwaysMemDF;
#endif

   // Initialize OLE 2.0 libraries
   if (!AfxOleInit())
   {
      AfxMessageBox(IDP_AFXOLEINIT_FAILED);
      return FALSE;
   }

   // Standard initialization
   LoadStdProfileSettings();  // Load standard INI file options (including MRU)

   // Register document templates
   CMultiDocTemplate* pDocTemplate = new CMultiDocTemplate(IDR_OCLIENTTYPE,
         RUNTIME_CLASS(CMainDoc),
         RUNTIME_CLASS(CSplitFrame),
         RUNTIME_CLASS(CMainView));
   pDocTemplate->SetContainerInfo(IDR_OCLIENTTYPE_CNTR_IP);
   AddDocTemplate(pDocTemplate);

   // create main MDI Frame window
   CMainFrame* pMainFrame = new CMainFrame;
   if (!pMainFrame->LoadFrame(IDR_MAINFRAME))
   {
      delete pMainFrame;
      return FALSE;
   }
   m_pMainWnd = pMainFrame;

   // enable file manager drag/drop and DDE Execute open
   m_pMainWnd->DragAcceptFiles();

   EnableShellOpen();
   RegisterShellFileTypes(TRUE);

   // connect the COleTemplate server to the document template
   m_server.ConnectTemplate(clsid, pDocTemplate, FALSE);
   COleTemplateServer::RegisterAll();
      // Note: MDI applications register all class objects regardless of
      //  the /Embedding on the command line.

   // Parse command line for standard shell commands, DDE, file open
   CCommandLineInfo cmdInfo;
   ParseCommandLine(cmdInfo);

   if (RunEmbedded())
   {
      // application was run with /Embedding flag.  Instead of showing
      //  the window, the application waits to receive OLE requests.
      return TRUE;
   }
   // always update system registry when run non-embedded
   m_server.UpdateRegistry(OAT_CONTAINER);

   // Dispatch commands specified on the command line
   if (!ProcessShellCommand(cmdInfo))
      return FALSE;

   pMainFrame->ShowWindow(m_nCmdShow);
   pMainFrame->UpdateWindow();

   return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// COleClientApp commands

void COleClientApp::OnAppAbout()
{
   CDialog(IDD_ABOUTBOX).DoModal();
}
