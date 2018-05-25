// NVC_MFC_CListBox.cpp : Defines the class behaviors for the application.
//
// Topic                                                          Snippet
// CListBox::AddString                                            3
// CListBox::CharToItem                                           4
// CListBox::CListbox                                             1
// CListBox::CompareItem                                          5
// CListBox::Create                                               2
// CListBox::DeleteItem                                           6
// CListBox::DeleteString                                         7
// CListBox::Dir                                                  8
// CListBox::DrawItem                                             9
// CListBox::FindString                                           10
// CListBox::FindStringExact                                      11
// CListBox::GetCount                                             12
// CListBox::GetCurSel                                            13
// CListBox::GetHorizontalExtent                                  14
// CListBox::GetItemData                                          15
// CListBox::GetItemDataPtr                                       16
// CListBox::GetItemHeight                                        17
// CListBox::GetItemRect                                          18
// CListBox::GetSel                                               19
// CListBox::GetSelItems                                          20
// CListBox::GetText                                              21
// CListBox::GetTopIndex                                          22
// CListBox::InitStorage                                          23
// CListBox::InsertString                                         24
// CListBox::MeasureItem                                          25
// CListBox::ResetContent                                         26
// CListBox::SelectString                                         27
// CListBox::SelItemRange                                         28
// CListBox::SetAnchorIndex                                       29
// CListBox::SetCaretIndex                                        30
// CListBox::SetColumnWidth                                       31
// CListBox::SetCurSel                                            32 
// CListBox::SetHorizontalExtent                                  33 
// CListBox::SetItemData                                          34
// CListBox::SetItemDataPtr                                       35
// CListBox::SetItemHeight                                        36
// CListBox::SetLocale                                            37
// CListBox::SetSel                                               38
// CListBox::SetTabStops                                          39
// CListBox::SetTopIndex                                          40
// CListBox::VKeyToItem                                           41
// How to: Create a Message Map for a Template Class              42 - 48

#include "stdafx.h"
#include "NVC_MFC_CListBox.h"
#include "ListBoxDlg.h"

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

	CListBoxDlg dlg;
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
