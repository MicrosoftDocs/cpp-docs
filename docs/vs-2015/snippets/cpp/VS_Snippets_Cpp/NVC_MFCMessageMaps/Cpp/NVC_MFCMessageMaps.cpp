// NVC_MFCMessageMaps.cpp : Defines the class behaviors for the application.
//
// Demonstrates various message map usages with MFC
//
// Topic										Snippet
// TN006: Message Maps					1 - 12
// CDialogBar::Create               13
// ON_MESSAGE                       14
// ON_REGISTERED_MESSAGE            15
// Message Maps                     16

#include "stdafx.h"
#include "NVC_MFCMessageMaps.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "MyDoc.h"
#include "MyView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyApp

BEGIN_MESSAGE_MAP(CMyApp, CWinApp)
   ON_COMMAND(ID_APP_ABOUT, &CMyApp::OnAppAbout)
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
END_MESSAGE_MAP()


// CMyApp construction

CMyApp::CMyApp()
{
   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}


// The one and only CMyApp object

CMyApp theApp;


// CMyApp initialization

BOOL CMyApp::InitInstance()
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
   CMultiDocTemplate* pDocTemplate;
   pDocTemplate = new CMultiDocTemplate(IDR_NVC_MFCMessageMTYPE,
      RUNTIME_CLASS(CMyDoc),
      RUNTIME_CLASS(CChildFrame), // custom MDI child frame
      RUNTIME_CLASS(CMyView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

   // create main MDI Frame window
   CMainFrame* pMainFrame = new CMainFrame;
   if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
   {
      delete pMainFrame;
      return FALSE;
   }
   m_pMainWnd = pMainFrame;
   // call DragAcceptFiles only if there's a suffix
   //  In an MDI app, this should occur immediately after setting m_pMainWnd


   // Parse command line for standard shell commands, DDE, file open
   CCommandLineInfo cmdInfo;
   ParseCommandLine(cmdInfo);


   // Dispatch commands specified on the command line.  Will return FALSE if
   // app was launched with /RegServer, /Register, /Unregserver or /Unregister.
   if (!ProcessShellCommand(cmdInfo))
      return FALSE;
   // The main window has been initialized, so show and update it
   pMainFrame->ShowWindow(m_nCmdShow);
   pMainFrame->UpdateWindow();

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
void CMyApp::OnAppAbout()
{
   CAboutDlg aboutDlg;
   aboutDlg.DoModal();
}


// CMyApp message handlers

