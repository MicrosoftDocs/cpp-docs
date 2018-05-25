// NVC_MFCHtmlHelp.cpp : Defines the class behaviors for the application.
//
// Demonstrates usage of the HTML Help system.
//
// Topic																	                  Snippet
// Displaying Context-Sensitive Help										         1 - 3
// Adding HTML Help Context-Sensitive Help to an Existing MFC Application	4
// Receiving HTML Help Notification Messages in an MFC Application			5


#include "stdafx.h"
#include "shlwapi.h"
#include "NVC_MFCHtmlHelp.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNVC_MFCHtmlHelpApp

BEGIN_MESSAGE_MAP(CNVC_MFCHtmlHelpApp, CWinApp)
   ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CNVC_MFCHtmlHelpApp construction

CNVC_MFCHtmlHelpApp::CNVC_MFCHtmlHelpApp()
{
// <Snippet4>
   EnableHtmlHelp();
// </Snippet4>

   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}


// The one and only CNVC_MFCHtmlHelpApp object

CNVC_MFCHtmlHelpApp theApp;


// CNVC_MFCHtmlHelpApp initialization

BOOL CNVC_MFCHtmlHelpApp::InitInstance()
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

   size_t cch = _tcslen(m_pszHelpFilePath);
   PathRemoveFileSpec(const_cast<LPTSTR>(m_pszHelpFilePath));
   _tcsncat_s(const_cast<LPTSTR>(m_pszHelpFilePath), cch, _T("\\my_chm.chm"), 11);
   
   CMyDlg dlg;
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
