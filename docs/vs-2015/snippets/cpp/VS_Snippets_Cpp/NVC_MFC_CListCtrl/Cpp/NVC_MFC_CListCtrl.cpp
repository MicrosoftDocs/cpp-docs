// NVC_MFC_CListCtrl.cpp : Defines the class behaviors for the application.
//
// Topic                                                          Snippet
// CListCtrl::Arrange                                             2
// CListCtrl::Create                                              1
// CListCtrl::CreateDragImage                                     3
// CListCtrl::DeleteAllItems                                      4
// CListCtrl::DeleteColumn                                        5
// CListCtrl::DeleteItem                                          6
// CListCtrl::EditLabel                                           7
// CListCtrl::EnsureVisible                                       8
// CListCtrl::FindItem                                            9
// CListCtrl::GetBkImage                                          10
// CListCtrl::GetColumn                                           11
// CListCtrl::GetColumnOrderArray                                 12
// CListCtrl::GetColumnWidth                                      13
// CListCtrl::GetEditControl                                      14
// CListCtrl::GetFirstSelectedItemPosition                        15
// CListCtrl::GetHotCursor                                        17
// CListCtrl::GetHotItem                                          18
// CListCtrl::GetHoverTime                                        19
// CListCtrl::GetImageList                                        20
// CListCtrl::GetItemData                                         21
// CListCtrl::GetItemPosition                                     22
// CListCtrl::GetItemRect                                         23
// CListCtrl::GetNextSelectedItem                                 25
// CListCtrl::GetNumberOfWorkAreas                                25 
// CListCtrl::GetSelectedCount                                    26
// CListCtrl::GetSelectionMark                                    27
// CListCtrl::GetStringWidth                                      28
// CListCtrl::GetToolTips                                         29
// CListCtrl::GetTopIndex                                         30
// CListCtrl::HitTest                                             31
// CListCtrl::SetBkColor                                          32
// CListCtrl::SetCallbackMask                                     33 
// CListCtrl::SetExtendedStyle                                    16     
// CListCtrl::SetIconSpacing                                      34
// CListCtrl::SetItemCount                                        35
// CListCtrl::SetItemCountEx                                      36
// CListCtrl::SetItemData                                         37
// CListCtrl::SetTextBkColor                                      24
// CListCtrl::SetTextColor                                        38
// CListCtrl::SetWorkAreas                                        39
// CListCtrl::SortItems                                           40
// CListCtrl::SubItemHitTest                                      41
// CListCtrl::InsertItem                                          42
// CListCtrl::SetCheck                                            43

#include "stdafx.h"
#include "NVC_MFC_CListCtrl.h"
#include "ListCtrlDlg.h"

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

	CListCtrlDlg dlg;
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
