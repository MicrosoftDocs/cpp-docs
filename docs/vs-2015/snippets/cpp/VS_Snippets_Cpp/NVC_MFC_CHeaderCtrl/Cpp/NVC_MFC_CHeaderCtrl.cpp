// NVC_MFC_CHeaderCtrl.cpp : Defines the class behaviors for the application.
//
// Topic                                                          Snippet
// CHeaderCtrl::CHeaderCtrl                                       1
// CHeaderCtrl::ClearAllFilters                                   2
// CHeaderCtrl::ClearFilters                                      3
// CHeaderCtrl::Create                                            4
// CHeaderCtrl::DeleteItem                                        5
// CHeaderCtrl::DrawItem                                          6
// CHeaderCtrl::EditFilter                                        7
// CHeaderCtrl::GetBitmapMargin                                   8
// CHeaderCtrl::GetImageList                                      9
// CHeaderCtrl::GetItem                                           10
// CHeaderCtrl::GetOrderArray                                     11
// CHeaderCtrl::InsertItem                                        12
// CHeaderCtrl::Layout                                            13
// CHeaderCtrl::SetBitmapMargin                                   14
// CHeaderCtrl::SetFilterChangeTimeout                            15
// CHeaderCtrl::SetHotDivider                                     16

#include "stdafx.h"
#include "NVC_MFC_CHeaderCtrl.h"
#include "HeaderDlg.h"

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

	CHeaderDlg dlg;
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
