// NVC_MFC_CStatusBarCtrl.cpp : Defines the class behaviors for the application.
//
// Topic                                                          Snippet
// CStatusBarCtrl::Create                                         1
// CStatusBarCtrl::GetBorders                                     2
// CStatusBarCtrl::GetParts                                       3
// CStatusBarCtrl::GetRect                                        4
// CStatusBarCtrl::GetText                                        5
// CStatusBarCtrl::GetTextLength                                  6
// CStatusBarCtrl::GetTipText                                     7
// CStatusBarCtrl::SetBkColor                                     8
// CStatusBarCtrl::SetMinHeight                                   9
// CStatusBarCtrl::SetParts                                       10
// CStatusBarCtrl::SetText                                        11
// CStatusBarCtrl::SetTipText                                     12

#include "stdafx.h"
#include "NVC_MFC_CStatusBarCtrl.h"
#include "StatusBarCtrlDlg.h"

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

	CStatusBarCtrlDlg dlg;
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
