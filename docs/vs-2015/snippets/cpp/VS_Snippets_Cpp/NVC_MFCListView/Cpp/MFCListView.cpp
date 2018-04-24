// MFCListView.cpp : Defines the class behaviors for the application.
//
// Demonstrates CListView and related classes in MFC, also some drag and drop.
//
// Topic														            Snippet
// Data Objects and Data Sources: Creation and Destruction	1
// Clipboard: Using the Windows Clipboard						   2
// Clipboard: Using the OLE Clipboard Mechanism					3
// List Control and List View									      4
// An Example of the Comments									      5
// Toolbar Fundamentals											      6
// CListView::GetListCtrl                                   7
// CToolBar::SetSizes                                       8
// CWinApp::InitInstance                                    9
// BEGIN_MESSAGE_MAP                                        10
// ON_COMMAND                                               11
// ON_COMMAND_RANGE                                         12
// AfxSetAmbientActCtx                                      13
// _ATL_ENABLE_PTM_WARNING                                  14, 11

#include "stdafx.h"
#include "MFCListView.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "MFCListViewDoc.h"
#include "MyListView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCListViewApp

BEGIN_MESSAGE_MAP(CMFCListViewApp, CWinApp)
   ON_COMMAND(ID_APP_ABOUT, &CMFCListViewApp::OnAppAbout)
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
END_MESSAGE_MAP()


// CMFCListViewApp construction

CMFCListViewApp::CMFCListViewApp()
{
   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}


// The one and only CMFCListViewApp object

CMFCListViewApp theApp;


// CMFCListViewApp initialization

// <Snippet9>
// AppWizard implements the InitInstance overridable function 
// according to options you select.  For example, the multiple document
// interface (MDI) option was chosen for the AppWizard code created
// below. You can add other per-instance initializations to the code
// created by AppWizard.

// <Snippet13>
BOOL CMFCListViewApp::InitInstance()
{
   AfxSetAmbientActCtx(FALSE);
   // Remainder of function definition omitted.
// </Snippet13>

   CWinApp::InitInstance();

   // Initialize OLE libraries
   if (!AfxOleInit())
   {
      AfxMessageBox(_T("OleInit failed."));
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
   CMultiDocTemplate* pDocTemplate;
   pDocTemplate = new CMultiDocTemplate(IDR_MFCListViewTYPE,
      RUNTIME_CLASS(CMFCListViewDoc),
      RUNTIME_CLASS(CChildFrame), // custom MDI child frame
      RUNTIME_CLASS(CMyListView));
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
// </Snippet9>


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
void CMFCListViewApp::OnAppAbout()
{
   CAboutDlg aboutDlg;
   aboutDlg.DoModal();
}


// CMFCListViewApp message handlers

