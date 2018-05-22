// NVC_MFC_CEdit.cpp : Defines the class behaviors for the application.
//
// Topic                                                          Snippet
// CEdit::CEdit														         1
// CEdit::CharFromPos												         3
// CEdit::Clear														         4
// CEdit::Copy														            5
// CEdit::Create													            2
// CEdit::Cut														            6
// CEdit::EmptyUndoBuffer											         7
// CEdit::FmtLines													         8
// CEdit::GetFirstVisibleLine										         9
// CEdit::GetHandle													         10
// CEdit::GetLimitText												         11
// CEdit::GetLineCount												         12
// CEdit::GetModify													         13
// CEdit::GetPasswordChar											         14
// CEdit::GetSel													            15
// CEdit::LimitText													         17
// CEdit::LineFromChar												         18
// CEdit::LineIndex													         19
// CEdit::Paste														         20
// CEdit::SetCueBanner												         21
// CEdit::SetHandle													         22         
// CEdit::SetPasswordChar											         16
// CEdit::SetReadOnly												         23
// CEdit::SetRect													            24
// CEdit::Undo														            25

#include "stdafx.h"
#include "NVC_MFC_CEdit.h"
#include "EditDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyApp

BEGIN_MESSAGE_MAP(CMyApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
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

	CEditDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
