// NVC_MFC_CTreeCtrl.cpp : Defines the class behaviors for the application.
//
// Topic                                                          Snippet
// CTreeCtrl::Create                                              1
// CTreeCtrl::CreateDragImage                                     2
// CTreeCtrl::DeleteAllItems                                      3
// CTreeCtrl::DeleteItem                                          4
// CTreeCtrl::EditLabel                                           5
// CTreeCtrl::EnsureVisible                                       6
// CTreeCtrl::GetChildItem                                        7
// CTreeCtrl::GetCount                                            8
// CTreeCtrl::GetDropHighlightItem                                9
// CTreeCtrl::GetEditControl                                      10
// CTreeCtrl::GetImageList                                        11
// CTreeCtrl::GetIndent                                           12
// CTreeCtrl::GetInsertMarkColor                                  13
// CTreeCtrl::GetItemData                                         14
// CTreeCtrl::GetItemHeight                                       15
// CTreeCtrl::GetItemImage                                        16
// CTreeCtrl::GetItemRect                                         17
// CTreeCtrl::GetItemState                                        18
// CTreeCtrl::GetLineColor                                        19
// CTreeCtrl::GetNextItem                                         20
// CTreeCtrl::GetNextSiblingItem                                  21
// CTreeCtrl::GetPrevSiblingItem                                  22
// CTreeCtrl::GetPrevVisibleItem                                  23
// CTreeCtrl::GetSelectedItem                                     24
// CTreeCtrl::GetToolTips                                         25
// CTreeCtrl::HitTest                                             26
// CTreeCtrl::InsertItem                                          27
// CTreeCtrl::SelectDropTarget                                    9
// CTreeCtrl::SelectItem                                          26
// CTreeCtrl::SelectSetFirstVisible                               28
// CTreeCtrl::SetCheck                                            29 - 30
// CTreeCtrl::SetInsertMark                                       31
// CTreeCtrl::SetItem                                             32
// CTreeCtrl::SetItemData                                         33
// CTreeCtrl::SetItemText                                         34
// CTreeCtrl::SetLineColor                                        35
// CTreeCtrl::SetTextColor                                        36
// CTreeCtrl::SortChildren                                        37
// CTreeCtrl::SortChildrenCB                                      38 - 39

#include "stdafx.h"
#include "NVC_MFC_CTreeCtrl.h"
#include "TreeDlg.h"

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

	CTreeDlg dlg;
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
