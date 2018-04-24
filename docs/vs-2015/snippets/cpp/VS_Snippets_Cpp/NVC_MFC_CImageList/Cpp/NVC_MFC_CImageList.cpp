// NVC_MFC_CImageList.cpp : Defines the class behaviors for the application.
//
// CImageList::Add                                                1
// CImageList::Attach                                             2
// CImageList::BeginDrag                                          3
// CImageList::Copy                                               6
// CImageList::Create                                             7
// CImageList::DeleteImageList                                    8
// CImageList::DeleteTempMap                                      9
// CImageList::DragMove                                           4
// CImageList::DrawEx                                             10
// CImageList::DrawIndirect                                       11
// CImageList::EndDrag                                            5
// CImageList::ExtractIcon                                        12
// CImageList::FromHandle                                         13
// CImageList::FromHandlePermanent                                14
// CImageList::GetSafeHandle                                      15
// CImageList::operator HIMAGELIST                                16
// CImageList::Read                                               18
// CImageList::Remove                                             19
// CImageList::SetBkColor                                         20
// CImageList::SetImageCount                                      21
// CImageList::SetOverlayImage                                    22
// CImageList::Write                                              17   
// CImageList::m_hImageList                                       23 

#include "stdafx.h"
#include "NVC_MFC_CImageList.h"
#include "ImageListDlg.h"

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

	CImageListDlg dlg;
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
