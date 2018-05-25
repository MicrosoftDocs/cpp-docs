// MFCMessageHandling.cpp : Defines the class behaviors for the application.
//
// This project contains snippets demonstrating the use of message maps in MFC.
//
// Topic											Snippet
// Where to Find Message Maps						1
// Derived Message Maps								2
// Handlers for Standard Windows Messages			3
// Handlers for Commands and Control Notifications	4, 5
// Handlers for Message-Map Ranges					6 - 11
// 

#include "stdafx.h"
#include "MFCMessageHandling.h"
#include "MainFrm.h"

#include "MFCMessageHandlingDoc.h"
#include "MFCMessageHandlingView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCMessageHandlingApp

BEGIN_MESSAGE_MAP(CMFCMessageHandlingApp, CWinApp)
   ON_COMMAND(ID_APP_ABOUT, &CMFCMessageHandlingApp::OnAppAbout)
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
END_MESSAGE_MAP()


// CMFCMessageHandlingApp construction

CMFCMessageHandlingApp::CMFCMessageHandlingApp()
{
   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}


// The one and only CMFCMessageHandlingApp object

CMFCMessageHandlingApp theApp;


// CMFCMessageHandlingApp initialization

BOOL CMFCMessageHandlingApp::InitInstance()
{
   // InitCommonControlsEx() is required on Windows XP if an application
   // manifest specifies use of ComCtl32.dll version 6 or later to enable
   // visual styles.  Otherwise, any window creation will fail.
   INITCOMMONCONTROLSEX InitCtrls;
   InitCtrls.dwSize = sizeof(InitCtrls);
   // Set this to include all the common control classes you want to use
   // in your application.
   InitCtrls.dwICC = ICC_WIN95_CLASSES;
   InitCommonControlsEx(&InitCtrls);

   CWinApp::InitInstance();

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
      RUNTIME_CLASS(CMFCMessageHandlingDoc),
      RUNTIME_CLASS(CMainFrame),       // main SDI frame window
      RUNTIME_CLASS(CMyView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);



   // Parse command line for standard shell commands, DDE, file open
   CCommandLineInfo cmdInfo;
   ParseCommandLine(cmdInfo);


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
void CMFCMessageHandlingApp::OnAppAbout()
{
   CAboutDlg aboutDlg;
   aboutDlg.DoModal();
}


// CMFCMessageHandlingApp message handlers

