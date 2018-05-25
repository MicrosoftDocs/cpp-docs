// NVC_MFC_CRichEditCtrl.cpp : Defines the class behaviors for the application.
//
// Topic                                                          Snippet
// CRichEditCtrl::CanPaste                                        1
// CRichEditCtrl::CanUndo                                         2
// CRichEditCtrl::Clear                                           3
// CRichEditCtrl::Copy                                            4
// CRichEditCtrl::Create                                          5
// CRichEditCtrl::CRichEditCtrl                                   6
// CRichEditCtrl::Cut                                             7
// CRichEditCtrl::EmptyUndoBuffer                                 8
// CRichEditCtrl::FindText                                        9
// CRichEditCtrl::FormatRange                                     10
// CRichEditCtrl::GetFirstVisibleLine                             11 
// CRichEditCtrl::GetLimitText                                    12
// CRichEditCtrl::GetLineCount                                    13
// CRichEditCtrl::GetModify                                       14
// CRichEditCtrl::GetSel                                          15
// CRichEditCtrl::GetSelectionType                                16
// CRichEditCtrl::GetTextLength                                   17
// CRichEditCtrl::HideSelection                                   18
// CRichEditCtrl::LimitText                                       19
// CRichEditCtrl::LineFromChar                                    20
// CRichEditCtrl::LineIndex                                       21
// CRichEditCtrl::Paste                                           22
// CRichEditCtrl::PasteSpecial                                    23
// CRichEditCtrl::SetBackgroundColor                              24
// CRichEditCtrl::SetDefaultCharFormat                            25  
// CRichEditCtrl::SetEventMask                                    26
// CRichEditCtrl::SetOptions                                      27
// CRichEditCtrl::SetParaFormat                                   28
// CRichEditCtrl::SetReadOnly                                     29
// CRichEditCtrl::SetRect                                         30
// CRichEditCtrl::SetSelectionCharFormat                          31    
// CRichEditCtrl::SetTargetDevice                                 32
// CRichEditCtrl::SetWordCharFormat                               33
// CRichEditCtrl::StreamIn                                        34 - 35
// CRichEditCtrl::StreamOut                                       36 - 37
//_AFX_SECURE_NO_WARNINGS                                         38 - 39

#include "stdafx.h"
#include "NVC_MFC_CRichEditCtrl.h"
#include "RichEditDlg.h"

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

	CRichEditDlg dlg;
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
