// NVC_MFC_DLLUser.cpp : Defines the class behaviors for the application.
//
// Topic                      Snippet
// AfxLoadLibrary             1&2&3

#include "stdafx.h"
#include "NVC_MFC_DLLUser.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "UserDoc.h"
#include "UserView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUserApp

BEGIN_MESSAGE_MAP(CUserApp, CWinApp)
   ON_COMMAND(ID_APP_ABOUT, &CUserApp::OnAppAbout)
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
   ON_COMMAND(ID_TEST_REGISTERMYNEWCLASS, &CUserApp::OnTestRegistermynewclass)
END_MESSAGE_MAP()


// CUserApp construction

CUserApp::CUserApp()
{
   m_hViewDll = NULL;
}


// The one and only CUserApp object

CUserApp theApp;


// CUserApp initialization

static TCHAR* szMyViewDllPath = _T("..\\..\\NVC_MFC_DLL\\Cpp\\Debug\\NVC_MFC_DLL.dll");

// <Snippet1>
// The following shows how to create a MDI based application
// using a generic CView derived class that is implemented in
// a dynamically loaded MFC Extension DLL.

typedef CRuntimeClass * (*GETDLLVIEW)();

BOOL CUserApp::InitInstance()
{
   // Standard Application Wizard generated initialization excluded.

// </Snippet1>

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
   
// <Snippet2>   
   // Register the application's document templates.  Document templates
   //  serve as the connection between documents, frame windows and views

   //Load MFC Extension DLL based view class.
   m_hViewDll = AfxLoadLibrary(szMyViewDllPath);
   if (!m_hViewDll)
   {
      CString str;
      str.Format(_T("Error: Cannot find component %s"), szMyViewDllPath);
      AfxMessageBox(str);
      return FALSE;
   }

   GETDLLVIEW GetMyView = (GETDLLVIEW)GetProcAddress(m_hViewDll, "GetMyView");
   ASSERT(GetMyView != NULL);

   CMultiDocTemplate* pDocTemplate;
   pDocTemplate = new CMultiDocTemplate(IDR_NVC_MFC_DLLUserTYPE,
      RUNTIME_CLASS(CUserDoc),
      RUNTIME_CLASS(CChildFrame), // custom MDI child frame
      GetMyView());
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

   // Standard Application Wizard generated initalization excluded.

// </Snippet2>

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

// <Snippet3>
   return TRUE;
}

int CUserApp::ExitInstance()
{
   if (NULL != m_hViewDll)
   {
      AfxFreeLibrary(m_hViewDll);
      m_hViewDll = NULL;
   }

   return CWinApp::ExitInstance();
}
// </Snippet3>



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
void CUserApp::OnAppAbout()
{
   CAboutDlg aboutDlg;
   aboutDlg.DoModal();
}


// CUserApp message handlers

typedef void (*pfn_RegisterMyNewClass)();

void CUserApp::OnTestRegistermynewclass()
{
   pfn_RegisterMyNewClass RegisterMyNewClass = 
      (pfn_RegisterMyNewClass)GetProcAddress(m_hViewDll, "RegisterMyNewClass");
   RegisterMyNewClass();
}
