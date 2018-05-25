// NVC_MFCDocViewSDI.cpp : Defines the class behaviors for the application.
//
// Demonstrates usage of SDI Doc/View architecture with MFC
//
// Topic												            Snippet
// Adding Multiple Views to a Single Document			1 - 4
// Graphic Objects										      5
// One-Stage and Two-Stage Construction of Objects		6
// Selecting a Graphic Object into a Device Context	7
// CImage Limitations with Earlier Operating Systems	8 - 9
// Docking and Floating Toolbars						      10
// Changing the Styles of a Window Created by MFC		11
// CDocument::AddView                                 12
// CSingleDocTemplate::CSingleDocTemplate             13 - 14
// CToolBar::GetToolBarCtrl                           15
// CFrameWnd::OnContextHelp                           16

#include "stdafx.h"
#include "NVC_MFCDocViewSDI.h"
#include "MainFrm.h"

#include "MyDoc.h"
#include "MyView.h"
#include "NewView.h"

// <Snippet2>
#include <AFXPRIV.H>
// </Snippet2>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyWinApp

BEGIN_MESSAGE_MAP(CMyWinApp, CWinApp)
   ON_COMMAND(ID_APP_ABOUT, &CMyWinApp::OnAppAbout)
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
   // Standard print setup command
   ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinApp::OnFilePrintSetup)
   ON_COMMAND(ID_FILE_SWITCHVIEW, &CMyWinApp::OnFileSwitchview)
END_MESSAGE_MAP()


// CMyWinApp construction

CMyWinApp::CMyWinApp()
   : m_pOldView(NULL)
   , m_pNewView(NULL)
{
   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}


// The one and only CMyWinApp object

CMyWinApp theApp;


// CMyWinApp initialization

BOOL CMyWinApp::InitInstance()
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

   // Initialize OLE libraries
   if (!AfxOleInit())
   {
      AfxMessageBox(IDP_OLE_INIT_FAILED);
      return FALSE;
   }
   AfxEnableControlContainer();
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

// <Snippet13>
   // The following code fragment is from CMyWinApp::InitInstance.
   // CMyWinApp is derived from CWinApp.

   // Establish the document type
   // supported by the application
   AddDocTemplate(new CSingleDocTemplate(IDR_MAINFRAME,
      RUNTIME_CLASS(CMyDoc),
      RUNTIME_CLASS(CMainFrame),       // main SDI frame window
      RUNTIME_CLASS(CMyView)));
// </Snippet13>

// <Snippet14>
   // The following code fragment is from CMyWinApp::InitInstance.
   // CMyWinApp is derived from CWinApp.

   // Normally, an application creates a document
   // template and registers it with MFC as a part
   // of its initialization.

   // IDR_SAMPLERESOURCE is a resource ID string;
   // see the CDocTemplate class overview documentation
   // for more information on its format.

   // The next three parameters use the RUNTIME_CLASS()
   // macro to get runtime type information for the doc,
   // frame, and view classes that will be associated by
   // the template.

   CSingleDocTemplate* pDocTemplate;
   pDocTemplate = new CSingleDocTemplate(IDR_MAINFRAME,
      RUNTIME_CLASS(CMyDoc),
      RUNTIME_CLASS(CMainFrame),       // main SDI frame window
      RUNTIME_CLASS(CMyView));
   if (!pDocTemplate)
      return FALSE;

   // After the following call, MFC is aware of the doc
   // template and will free it when the application is
   // shut down. The doc templates known to MFC will
   // automatically be used when CWinApp:OnFileOpen() or 
   // CWinApp::OnFileNew() are called.
   AddDocTemplate(pDocTemplate);
// </Snippet14>


   // Parse command line for standard shell commands, DDE, file open
   CCommandLineInfo cmdInfo;
   ParseCommandLine(cmdInfo);


   // Dispatch commands specified on the command line.  Will return FALSE if
   // app was launched with /RegServer, /Register, /Unregserver or /Unregister.
   if (!ProcessShellCommand(cmdInfo))
      return FALSE;

// <Snippet3>
   CView* pActiveView = ((CFrameWnd*) m_pMainWnd)->GetActiveView();
   m_pOldView = pActiveView;
   m_pNewView = (CView*) new CNewView;
   if (NULL == m_pNewView)
      return FALSE;

   CDocument* pCurrentDoc = ((CFrameWnd*)m_pMainWnd)->GetActiveDocument();

   // Initialize a CCreateContext to point to the active document.
   // With this context, the new view is added to the document
   // when the view is created in CView::OnCreate().
   CCreateContext newContext;
   newContext.m_pNewViewClass = NULL;
   newContext.m_pNewDocTemplate = NULL;
   newContext.m_pLastView = NULL;
   newContext.m_pCurrentFrame = NULL;
   newContext.m_pCurrentDoc = pCurrentDoc;

   // The ID of the initial active view is AFX_IDW_PANE_FIRST.
   // Incrementing this value by one for additional views works
   // in the standard document/view case but the technique cannot
   // be extended for the CSplitterWnd case.
   UINT viewID = AFX_IDW_PANE_FIRST + 1;
   CRect rect(0, 0, 0, 0); // Gets resized later.

   // Create the new view. In this example, the view persists for
   // the life of the application. The application automatically
   // deletes the view when the application is closed.
   m_pNewView->Create(NULL, _T("AnyWindowName"), WS_CHILD, rect, m_pMainWnd, viewID, &newContext);

   // When a document template creates a view, the WM_INITIALUPDATE
   // message is sent automatically. However, this code must
   // explicitly send the message, as follows.
   m_pNewView->SendMessage(WM_INITIALUPDATE, 0, 0);
// </Snippet3>

   // The one and only window has been initialized, so show and update it
   m_pMainWnd->ShowWindow(SW_SHOW);
   m_pMainWnd->UpdateWindow();
   // call DragAcceptFiles only if there's a suffix
   //  In an SDI app, this should occur after ProcessShellCommand
   return TRUE;
}

// <Snippet4>
CView* CMyWinApp::SwitchView( )
{
   CView* pActiveView = ((CFrameWnd*) m_pMainWnd)->GetActiveView();

   CView* pNewView = NULL;
   if(pActiveView == m_pOldView)
      pNewView = m_pNewView;
   else
      pNewView = m_pOldView;

   // Exchange view window IDs so RecalcLayout() works.
   #ifndef _WIN32
   UINT temp = ::GetWindowWord(pActiveView->m_hWnd, GWW_ID);
   ::SetWindowWord(pActiveView->m_hWnd, GWW_ID, ::GetWindowWord(pNewView->m_hWnd, GWW_ID));
   ::SetWindowWord(pNewView->m_hWnd, GWW_ID, temp);
   #else
   UINT temp = ::GetWindowLong(pActiveView->m_hWnd, GWL_ID);
   ::SetWindowLong(pActiveView->m_hWnd, GWL_ID, ::GetWindowLong(pNewView->m_hWnd, GWL_ID));
   ::SetWindowLong(pNewView->m_hWnd, GWL_ID, temp);
   #endif

   pActiveView->ShowWindow(SW_HIDE);
   pNewView->ShowWindow(SW_SHOW);
   ((CFrameWnd*) m_pMainWnd)->SetActiveView(pNewView);
   ((CFrameWnd*) m_pMainWnd)->RecalcLayout();
   pNewView->Invalidate();
   return pActiveView;
} 
// </Snippet4>


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
void CMyWinApp::OnAppAbout()
{
   CAboutDlg aboutDlg;
   aboutDlg.DoModal();
}


// CMyWinApp message handlers


void CMyWinApp::OnFileSwitchview()
{
   SwitchView();
}
