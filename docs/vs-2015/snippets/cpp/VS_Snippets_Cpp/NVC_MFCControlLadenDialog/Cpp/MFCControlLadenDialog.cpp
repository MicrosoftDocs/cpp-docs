// MFCControlLadenDialog.cpp : Defines the class behaviors for the application.
//
// Demonstrates use of MFC Dialog and Control classes
//
// Topic															               Snippet
// Adding Controls By Hand											         1 - 2
// Deriving Controls from a Standard Control						      3
// Receiving Notification from Common Controls						   4
// Accessing the Embedded Month Calendar Control					   5 - 6
// Using Custom Format Strings in a Date and Time Picker Control	7
// Using Callback Fields in a Date and Time Picker Control			8 - 9
// Using Image Lists in an Extended Combo Box Control				   10 - 11
// Setting the Images for an Individual Item						      12 - 13
// Header Control and List Control									      14
// Using Image Lists with Header Controls							      15 - 17
// Global Hot Keys													         18
// List Items and Image Lists										         19
// Implementing Working Areas in List Controls						   20 - 21
// Changing List Control Styles										      22
// Virtual List Controls											         23 - 25
// Setting the Day State of a Month Calendar Control				   26
// Rebar Controls and Bands											      27
// Using an Image List with a Rebar Control							   28
// Using a Dialog Bar with a Rebar Control							   29 - 30
// Initializing the Parts of a CStatusBarCtrl Object				   31
// Tabs and Tab Control Attributes									      32
// Creating the Tab Control											      33 - 34
// Using Image Lists in a Toolbar Control							      35
// Using Drop-Down Buttons in a Toolbar Control						   36 - 39
// Handling Tool Tip Notifications									      40
// Manipulating the Tool Tip Control								      41
// Tree Control Item States Overview								      71
// Example: Displaying a Dialog Box via a Menu Command				42 - 48
// Dialog Data Exchange												         49
// Type-Safe Access to Controls Without Code Wizards				   50 - 51
// Type-Safe Access to Controls With Code Wizards					   52
// Handling TTN_NEEDTEXT Notification for Tool Tips					40, 53 - 55
// CAnimateCtrl::CAnimateCtrl										         56
// CBitmapButton::CBitmapButton										      57
// CBitmapButton::LoadBitmaps										         58
// CBitmapButton::SizeToContent										      59
// CCheckListBox::CCheckListBox										      60
// CControlBar::SetBorders											         61
// CDialog::Create													         62
// CDialog::DoModal													         63
// CDialog::EndDialog												         64 - 65
// CDialog::OnCancel												            66
// CDialog::OnInitDialog											         67
// CDialog::OnOK													            68
// CHotKeyCtrl::GetKeyName                                        69
// CDataExchange::CDataExchange                                   70
// CToolBarCtrl::AddStrings                                       72 - 73
// CToolTipCtrl::CToolTipCtrl                                     74
// CBitmapButton::AutoLoad                                        75

#include "stdafx.h"
#include "MFCControlLadenDialog.h"
#include "MFCControlLadenDialogDlg.h"

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

   AfxEnableControlContainer();

   // Initialize OLE 2.0 libraries
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

   CMyDialog dlg;
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
