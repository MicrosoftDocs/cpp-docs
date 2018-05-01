// CMFCAutomation.cpp : Defines the class behaviors for the application.
//
// Contains snippets pertaining to MFC Automation
//
// Topic									      Snippet
// Automation Servers						1
// AfxOleCanExitApp                    2
// AfxOleGetMessageFilter              3 - 4
// AfxOleLockApp                       5
// AfxOleLockControl                   6
// AfxOleRegisterTypeLib               7 - 8
// AfxOleUnlockControl                 9
// DECLARE_DISPATCH_MAP                10
// ON_EVENT                            11
// ON_EVENT_RANGE                      11 - 13
// ON_EVENT_REFLECT                    11
// ON_PROPNOTIFY                       11
// DISP_FUNCTION                       14

#include "stdafx.h"
#include "CMFCAutomation.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "CMFCAutomationDoc.h"
#include "CMFCAutomationView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCMFCAutomationApp

BEGIN_MESSAGE_MAP(CCMFCAutomationApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CCMFCAutomationApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
   ON_COMMAND(ID_SNIPPETS_AFXOLEREGISTERTYPELIB, &CCMFCAutomationApp::OnAfxOleRegisterTypeLib)
END_MESSAGE_MAP()


// CCMFCAutomationApp construction

CCMFCAutomationApp::CCMFCAutomationApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CCMFCAutomationApp object

CCMFCAutomationApp theApp;
// This identifier was generated to be statistically unique for your app
// You may change it if you prefer to choose a specific identifier

// {BE2A65F8-94E3-44BD-AAA8-071263C5B578}
static const CLSID clsid =
{ 0xBE2A65F8, 0x94E3, 0x44BD, { 0xAA, 0xA8, 0x7, 0x12, 0x63, 0xC5, 0xB5, 0x78 } };

// <Snippet7>
// Type library guid definition.
const GUID CDECL BASED_CODE _tlid =
   { 0x77E58ED8, 0xA2C0, 0x4C13, { 0xB6, 0xC1, 0xBA, 0xD1, 0x19, 0xAF, 0xE3, 0xF1 } };
// </Snippet7>
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;

class CMyMessageFilter : public COleMessageFilter
{
public:
   CMyMessageFilter() {};
};

// CCMFCAutomationApp initialization

// <Snippet4>
// Another example
//CWinApp-derived class
BOOL CCMFCAutomationApp::InitInstance()
{
	CWinApp::InitInstance();

	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}

   CWinThread* pThread = AfxGetThread();
   if (pThread != NULL)
   {
      // Destroy message filter, thereby unregistering it.
      delete pThread->m_pMessageFilter;
      pThread->m_pMessageFilter = NULL;

      // Create the new message filter object.
      //CMyMessageFilter is derived from COleMessageFilter
      pThread->m_pMessageFilter = new CMyMessageFilter;
      ASSERT(AfxOleGetMessageFilter() != NULL);

      // Register the new message filter object.
      AfxOleGetMessageFilter()->Register();
   }
   //...
   //...
   //...
// </Snippet4>


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
	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(IDR_CMFCAutomationTYPE,
		RUNTIME_CLASS(CCMFCAutomationDoc),
		RUNTIME_CLASS(CChildFrame), // custom MDI child frame
		RUNTIME_CLASS(CCMFCAutomationView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);
	// Connect the COleTemplateServer to the document template
	//  The COleTemplateServer creates new documents on behalf
	//  of requesting OLE containers by using information
	//  specified in the document template
	m_server.ConnectTemplate(clsid, pDocTemplate, FALSE);
	// Register all OLE server factories as running.  This enables the
	//  OLE libraries to create objects from other applications
	COleTemplateServer::RegisterAll();
		// Note: MDI applications register all server objects without regard
		//  to the /Embedding or /Automation on the command line

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

	// App was launched with /Embedding or /Automation switch.
	// Run app as automation server.
	if (cmdInfo.m_bRunEmbedded || cmdInfo.m_bRunAutomated)
	{
		// Don't show the main window
		return TRUE;
	}
	// App was launched with /Unregserver or /Unregister switch.  Unregister
	// typelibrary.  Other unregistration occurs in ProcessShellCommand().
	else if (cmdInfo.m_nShellCommand == CCommandLineInfo::AppUnregister)
	{
		m_server.UpdateRegistry(OAT_DISPATCH_OBJECT, NULL, NULL, FALSE);
		AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor);
	}
	// App was launched standalone or with other switches (e.g. /Register
	// or /Regserver).  Update registry entries, including typelibrary.
	else
	{
		m_server.UpdateRegistry(OAT_DISPATCH_OBJECT);
		COleObjectFactory::UpdateRegistryAll();
		AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid);
	}

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
void CCMFCAutomationApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// CCMFCAutomationApp message handlers

HRESULT DoAfxOleRegisterTypeLib()
{
// <Snippet8>
   // Registers type library and the interfaces
   // in it, afxctl.h needs to be included
   if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
     return ResultFromScode(SELFREG_E_TYPELIB);


   // CMFCAutomation.tlb should be in the same directory as exe module.
   // last param can be null if help file associated w/ tlb is in same dir as .tlb
   if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid, 
      _T("CMFCAutomation.tlb"), NULL))
   {
      return ResultFromScode(SELFREG_E_TYPELIB);
   }
// </Snippet8>

   return S_OK;
}

void CCMFCAutomationApp::OnAfxOleRegisterTypeLib()
{
   DoAfxOleRegisterTypeLib();
}