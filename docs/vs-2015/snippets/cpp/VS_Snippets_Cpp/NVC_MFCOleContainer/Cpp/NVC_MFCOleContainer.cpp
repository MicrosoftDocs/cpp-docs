// NVC_MFCOleContainer.cpp : Defines the class behaviors for the application.
//
// Snippets to show MFC OLE classes.
//
// Topic                                     Snippet
// COleDocument::GetNextClientItem           1
// COleDocument::GetNextItem                 2
// COleDispatchDriver::AttachDispatch        3
// COleDispatchDriver::CreateDispatch        4
// COleDispatchDriver::DetachDispatch        5
// COleDispatchDriver::GetProperty           6
// COleDispatchDriver::SetProperty           7
// COleDispatchDriver::operator LPDISPATCH   8
// COleDispatchDriver::m_bAutoRelease        9
// COleCurrency::COleCurrency                10
// COleCurrency::Format                      11
// COleCurrency::GetStatus                   12
// COleCurrency::ParseCurrency               13
// COleCurrency::SetCurrency                 14
// COleCurrency::operator =                  15
// COleCurrency::operator +, -               16
// COleCurrency::operator +=, -=             17
// COleCurrency::operator *, /               18
// COleCurrency::operator *=, /=             19
// COleCurrency Relational Operators         20
// COleDropTarget::OnDragOver                21
// COleException::m_sc                       22
// COleLinkingDoc Class                      23 - 25
// COleSafeArray::AccessData                 26
// COleSafeArray::Create                     27
// COleSafeArray::CreateOneDim               28
// COleSafeArray::GetDim                     27
// COleSafeArray::GetElement                 29
// COleSafeArray::GetLBound                  30
// COleSafeArray::GetUBound                  31
// COleSafeArray::PutElement                 32
// AfxCheckError                             33

#include "stdafx.h"
#include "NVC_MFCOleContainer.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "OleContainerDoc.h"
#include "OleContainerView.h"
#include "MyLinkDoc.h"
#include "MyLinkView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COleContainerApp

// {D75B1E88-6172-4460-B1FF-A9BA6307B2B8}
static const GUID clsid = 
{ 0xd75b1e88, 0x6172, 0x4460, { 0xb1, 0xff, 0xa9, 0xba, 0x63, 0x7, 0xb2, 0xb8 } };

BEGIN_MESSAGE_MAP(COleContainerApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &COleContainerApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
END_MESSAGE_MAP()


// COleContainerApp construction

COleContainerApp::COleContainerApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only COleContainerApp object

COleContainerApp theApp;

// <Snippet34>
// COleContainerApp initialization
BOOL COleContainerApp::InitInstance()
{
	AfxEnableControlContainer();
// </Snippet34>
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

   // <Snippet24>
   // CMyLinkDoc is derived from COleLinkingDoc
   CMultiDocTemplate* pDocTemplate = new CMultiDocTemplate(IDR_LINKDOCTYPE,
      RUNTIME_CLASS(CMyLinkDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CMyLinkView));
	if (!pDocTemplate)
		return FALSE;
   pDocTemplate->SetContainerInfo(IDR_OLECONTTYPE_CNTR_IP);
   AddDocTemplate(pDocTemplate);
// </Snippet24>

// <Snippet25>
   m_server.ConnectTemplate(clsid, pDocTemplate, FALSE);
   COleTemplateServer::RegisterAll();
// </Snippet25>

	pDocTemplate = new CMultiDocTemplate(IDR_NVC_MFCOleContaTYPE,
		RUNTIME_CLASS(COleContainerDoc),
		RUNTIME_CLASS(CChildFrame), // custom MDI child frame
		RUNTIME_CLASS(COleContainerView));
	if (!pDocTemplate)
		return FALSE;
	pDocTemplate->SetContainerInfo(IDR_OLECONTTYPE_CNTR_IP);
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
// <Snippet35>
}
// </Snippet35>



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
void COleContainerApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// COleContainerApp message handlers

