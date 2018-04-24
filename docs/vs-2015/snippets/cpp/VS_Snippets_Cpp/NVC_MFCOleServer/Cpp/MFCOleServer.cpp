// MFCOleServer.cpp : Defines the class behaviors for the application.
//
// Demonstrates MFC classes pertaining to OLE Servers
//
// Topic											            Snippet
// Servers: Implementing In-Place Frame Windows		1
// COleDocument::GetNextServerItem                 2
// COleServerDoc::GetDocObjectServer               3


#include "stdafx.h"
#include "MFCOleServer.h"
#include "MainFrm.h"

#include "IpFrame.h"
#include "MFCOleServerDoc.h"
#include "MFCOleServerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCOleServerApp

BEGIN_MESSAGE_MAP(CMFCOleServerApp, CWinApp)
   ON_COMMAND(ID_APP_ABOUT, &CMFCOleServerApp::OnAppAbout)
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
END_MESSAGE_MAP()


// CMFCOleServerApp construction

CMFCOleServerApp::CMFCOleServerApp()
{
   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}


// The one and only CMFCOleServerApp object

CMFCOleServerApp theApp;
// This identifier was generated to be statistically unique for your app
// You may change it if you prefer to choose a specific identifier

// {7CB34334-9D3F-47FD-8DEC-3E689C8CAB5C}
static const CLSID clsid =
{ 0x7CB34334, 0x9D3F, 0x47FD, { 0x8D, 0xEC, 0x3E, 0x68, 0x9C, 0x8C, 0xAB, 0x5C } };


// CMFCOleServerApp initialization

BOOL CMFCOleServerApp::InitInstance()
{
   CWinApp::InitInstance();

   // Initialize OLE libraries
   if (!AfxOleInit())
   {
      AfxMessageBox(IDP_OLE_INIT_FAILED);
      return FALSE;
   }
   // Standard initialization
   // If you are not using these features and wish to reduce the size
   // of your final executable, you should remove from the following
   // the specific initialization routines you do not need
   // Change the registry key under which our settings are stored
   // TODO: You should modify this string to be something appropriate
   // such as the name of your company or organization
   SetRegistryKey(_T("Local AppWizard-Generated Applications"));
   LoadStdProfileSettings(4);  // Load standard INI file options (including MRU)
   // Register the application's document templates.  Document templates
   //  serve as the connection between documents, frame windows and views
   CSingleDocTemplate* pDocTemplate;
   pDocTemplate = new CSingleDocTemplate(
      IDR_MAINFRAME,
      RUNTIME_CLASS(CMFCOleServerDoc),
      RUNTIME_CLASS(CMainFrame),       // main SDI frame window
      RUNTIME_CLASS(CMFCOleServerView));
   if (!pDocTemplate)
      return FALSE;
   pDocTemplate->SetServerInfo(
      IDR_SRVR_EMBEDDED, IDR_SRVR_INPLACE,
      RUNTIME_CLASS(CInPlaceFrame));
   AddDocTemplate(pDocTemplate);
   // Connect the COleTemplateServer to the document template
   //  The COleTemplateServer creates new documents on behalf
   //  of requesting OLE containers by using information
   //  specified in the document template
   m_server.ConnectTemplate(clsid, pDocTemplate, TRUE);
      // Note: SDI applications register server objects only if /Embedding
      //   or /Automation is present on the command line



   // Parse command line for standard shell commands, DDE, file open
   CCommandLineInfo cmdInfo;
   ParseCommandLine(cmdInfo);

   // App was launched with /Embedding or /Automation switch.
   // Run app as automation server.
   if (cmdInfo.m_bRunEmbedded || cmdInfo.m_bRunAutomated)
   {
      // Register all OLE server factories as running.  This enables the
      //  OLE libraries to create objects from other applications
      COleTemplateServer::RegisterAll();

      // Don't show the main window
      return TRUE;
   }
   // App was launched with /Unregserver or /Unregister switch.  Unregister
   // typelibrary.  Other unregistration occurs in ProcessShellCommand().
   else if (cmdInfo.m_nShellCommand == CCommandLineInfo::AppUnregister)
   {
      m_server.UpdateRegistry(OAT_INPLACE_SERVER, NULL, NULL, FALSE);
   }
   // App was launched standalone or with other switches (e.g. /Register
   // or /Regserver).  Update registry entries, including typelibrary.
   else
   {
      m_server.UpdateRegistry(OAT_INPLACE_SERVER);
   }

   // Dispatch commands specified on the command line.  Will return FALSE if
   // app was launched with /RegServer, /Register, /Unregserver or /Unregister.
   if (!ProcessShellCommand(cmdInfo))
      return FALSE;

   // The one and only window has been initialized, so show and update it
   m_pMainWnd->ShowWindow(SW_SHOW);
   m_pMainWnd->UpdateWindow();
   // call DragAcceptFiles only if there's a suffix
   //  In an SDI app, this should occur after ProcessShellCommand
   return TRUE;
}



// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
   CAboutDlg();

// Dialog Data
   enum { IDD = IDD_ABOUTBOX };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
   DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// App command to run the dialog
void CMFCOleServerApp::OnAppAbout()
{
   CAboutDlg aboutDlg;
   aboutDlg.DoModal();
}


// CMFCOleServerApp message handlers

