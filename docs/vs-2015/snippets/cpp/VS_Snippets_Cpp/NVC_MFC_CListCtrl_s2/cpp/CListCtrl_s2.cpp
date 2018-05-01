// CListCtrl_s2.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "CListCtrl_s2.h"
#include "CListCtrl_s2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCListCtrl_s2App

BEGIN_MESSAGE_MAP(CCListCtrl_s2App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CCListCtrl_s2App construction

CCListCtrl_s2App::CCListCtrl_s2App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CCListCtrl_s2App object

CCListCtrl_s2App theApp;


// CCListCtrl_s2App initialization

BOOL CCListCtrl_s2App::InitInstance()
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

	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CCListCtrl_s2Dlg dlg;
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
