// NVC_MFCDatabase.cpp : Defines the class behaviors for the application.
//
// Demonstrates use of some of the the MFC database classes.
//
// Topic                                        Snippet
// CDaoRecordset::AddNew                        1
// CDaoRecordset::DoFieldExchange               2     
// CDaoRecordset::Find                          3
// CDaoRecordset::GetDefaultDBName              4     
// CDaoRecordset::IsFieldNull                   5
// CDaoRecordset::SetFieldDirty                 6 - 7  
// CDaoRecordset::SetFieldNull                  8
// CDaoRecordView::CDaoRecordView               35
// CDaoTableDef::SetValidationRule              34     
// CDatabase::CDatabase                         9 - 10
// CDatabase::Close                             12
// CDatabase::ExecuteSQL                        13
// CDatabase::Open                              14
// CDatabase::OpenEx                            11
// CDatabase::m_hdbc                            15
// CRecordset::Close                            17
// CRecordset::Delete                           18
// CRecordset::DoFieldExchange                  19
// CRecordset::Edit                             20
// CRecordset::FlushResultSet                   21 - 22
// CRecordset::GetFieldValue                    23
// CRecordset::GetRowsFetched                   24
// CRecordset::IsBOF                            25
// CRecordset::IsFieldNullable                  26 - 27
// CRecordset::Move                             28
// CRecordset::Open                             16
// CRecordset::Requery                          29
// CRecordset::SetFieldDirty                    26 - 27
// CRecordset::SetFieldNull                     26 - 27
// CRecordset::m_strFilter                      30
// CRecordset::m_strSort                        31
// CRecordView::CRecordView                     32
// CFieldExchange::SetFieldType                 33
// Exceptions: Database Exceptions              36 - 37
// COleDBRecordView::OnGetRowset                38
// AFX_ODBC_CALL                                39
// AFX_SQL_SYNC                                 40 - 41
// RFX_Text_Bulk                                42
// DDX_FieldText                                43
// DFX_Text                                     2

#include "stdafx.h"
#include "NVC_MFCDatabase.h"
#include "MainFrm.h"

#include "MyDaoDatabaseDoc.h"
#include "MyDaoDatabaseView.h"
#include "MyDatabaseDoc.h"
#include "MyDatabaseView.h"
#include "MyOleDbDoc.h"
#include "MyOleDbView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDatabaseApp

BEGIN_MESSAGE_MAP(CMyDatabaseApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CMyDatabaseApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
END_MESSAGE_MAP()


// CMyDatabaseApp construction

CMyDatabaseApp::CMyDatabaseApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CMyDatabaseApp object

CMyDatabaseApp theApp;


// CMyDatabaseApp initialization

BOOL CMyDatabaseApp::InitInstance()
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

	CoInitialize(NULL);
	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		AfxMessageBox(_T("AfxOleInit failed."));
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
		RUNTIME_CLASS(CMyDaoDatabaseDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CMyDaoDatabaseView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

   pDocTemplate = new CSingleDocTemplate(
		IDR_DATABASE,
		RUNTIME_CLASS(CMyDatabaseDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CMyDatabaseView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

   pDocTemplate = new CSingleDocTemplate(
		IDR_OLEDB,
		RUNTIME_CLASS(CMyOleDbDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CMyOleDbView));
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
void CMyDatabaseApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// CMyDatabaseApp message handlers

