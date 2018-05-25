// NVC_MFCWindowing.cpp : Defines the class behaviors for the application.
//
// Demonstrates use of windowing classes in MFC.
//
// Topic                                           Snippet
// CFrameWnd::ActivateFrame                        1
// CFrameWnd::GetActiveView                        2
// CFrameWnd::m_bAutoMenuEnable                    3
// CSplitterWnd::CreateView                        4
// CSplitterWnd::IdFromRowCol                      5
// CSplitterWnd::SetColumnInfo                     6
// CMDIChildWnd::Create                            7 - 9
// CMDIChildWnd::MDIDestroy                        10
// CMDIChildWnd::MDIMaximize                       11
// CMDIChildWnd::MDIRestore                        12
// CMDIFrameWnd::CMDIFrameWnd                      13
// CMDIFrameWnd::CreateClient                      14
// CMDIFrameWnd::CreateNewChild                    15
// CMDIFrameWnd::GetWindowMenuPopup                16
// CMDIFrameWnd::MDICascade                        17
// CMDIFrameWnd::MDINext                           18
// CMDIFrameWnd::MDISetMenu                        19 - 20
// CMenu::Attach                                   21
// CMenu::CreateMenu                               22
// CMenu::DeleteTempMap                            23
// CMenu::Detach                                   21
// CMenu::DrawItem                                 24
// CMenu::EnableMenuItem                           25
// CMenu::GetMenuItemInfo                          26
// CMenu::GetMenuState                             27
// CMenu::InsertMenu                               28
// CMenu::LoadMenu                                 29
// CMenu::LoadMenuIndirect                         30
// CMenu::MeasureItem                              31
// CMenu::SetMenuItemBitmaps                       32 - 33
// CMenu::TrackPopupMenu                           34
// CWinApp::AddDocTemplate                         35
// CWinApp::AddToRecentFileList                    36
// CWinApp::DoWaitCursor                           37
// CWinApp::EnableShellOpen                        38
// CWinApp::ExitInstance                           39
// CWinApp::GetPrinterDeviceDefaults               40
// CWinApp::GetProfileBinary                       41
// CWinApp::GetProfileInt                          42
// CWinApp::GetProfileString                       43
// CWinApp::LoadCursor                             44
// CWinApp::LoadOEMCursor                          45 - 46
// CWinApp::LoadStandardCursor                     47
// CWinApp::OnDDECommand                           48
// CWinApp::OnFileNew                              49 - 50
// CWinApp::OnFileOpen                             49 - 50
// CWinApp::OnFilePrintSetup                       49 - 50
// CWinApp::OnIdle                                 51
// CWinApp::OpenDocumentFile                       52
// CWinApp::WinHelp                                53
// CWinApp::WriteProfileBinary                     54
// CWinApp::WriteProfileInt                        43
// CWinApp::WriteProfileString                     43
// CWinApp::m_hInstance                            55
// CWinApp::m_lpCmdLine                            52
// CWinApp::m_nCmdShow                             56
// CWinApp::m_pszAppName                           57, 65
// CWinApp::m_pszExeName                           58
// CWinApp::m_pszHelpFilePath                      59
// CWinApp::m_pszProfileName                       60
// CWinApp::m_pszRegistryKey                       61
// CWaitCursor Class                               62
// CWaitCursor::CWaitCursor                        63
// CWaitCursor::Restore                            64
// CWnd::ArrangeIconicWindows                      66
// CWnd::Attach                                    67 - 69
// CWnd::BeginPaint                                70
// CWnd::BringWindowToTop                          71
// CWnd::CalcWindowRect                            72
// CWnd::CancelToolTips                            73
// CWnd::CenterWindow                              74
// CWnd::CheckDlgButton                            75
// CWnd::CheckRadioButton                          76
// CWnd::ChildWindowFromPoint                      77
// CWnd::ClientToScreen                            78
// CWnd::Create                                    79
// CWnd::CreateCaret                               80
// CWnd::CreateControl                             81
// CWnd::CreateEx                                  82
// CWnd::CreateGrayCaret                           83
// CWnd::CreateSolidCaret                          84
// CWnd::Default                                   85
// CWnd::DeleteTempMap                             86
// CWnd::DestroyWindow                             87
// CWnd::DlgDirList                                88
// CWnd::DlgDirListComboBox                        89
// CWnd::DoDataExchange                            90
// CWnd::EnableToolTips                            91 - 92
// CWnd::EnableWindow                              93
// CWnd::FindWindow                                94
// CWnd::FlashWindow                               95
// CWnd::GetControlUnknown                         96
// CWnd::GetDlgItem                                97
// CWnd::GetMenu                                   98
// CWnd::GetSystemMenu                             99
// CWnd::IsDialogMessage                           100
// CWnd::IsIconic                                  101
// CWnd::IsWindowEnabled                           102
// CWnd::IsWindowVisible                           103
// CWnd::MessageBox                                104
// CWnd::ModifyStyle                               105
// CWnd::ModifyStyleEx                             106
// CWnd::OnCtlColor                                107
// CWnd::OnHScroll                                 108
// CWnd::OnSize                                    109
// CWnd::OnSizing                                  110
// CWnd::OpenClipboard                             111
// CWnd::PreCreateWindow                           112
// CWnd::SendDlgItemMessage                        113
// CWnd::SendMessage                               101
// CWnd::SendMessageToDescendants                  114
// CWnd::SetCaretPos                               115
// CWnd::SetDlgItemText                            116
// CWnd::SetRedraw                                 117
// CWnd::SetTimer                                  118
// CWnd::SetWindowContextHelpId                    119
// CWnd::SetWindowPos                              120
// CWnd::SetWindowText                             121
// CWnd::SubclassDlgItem                           122
// CWnd::SubclassWindow                            123
// CWnd::UpdateWindow                              124
// CSplitterWnd::Create                            125
// AfxGetApp                                       126
// AfxGetAppName                                   127
// AfxGetInstanceHandle                            128
// AfxGetMainWnd                                   129
// AfxGetResourceHandle                            130
// AfxGetStaticModuleState                         131
// AfxGetThread                                    132
// AfxMessageBox                                   133
// AfxRegisterWndClass                             134
// AfxSetResourceHandle                            135
// DECLARE_MESSAGE_MAP                             136

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "MyDoc.h"
#include "MyView.h"
#include "SplitChildFrm.h"
#include "MdiDoc.h"
#include "MdiView.h"
#include "MdiChildFrame.h"
#include "CDTPicker.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyApp

BEGIN_MESSAGE_MAP(CMyApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CMyApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
   ON_COMMAND(ID_WINAPP_GETPRINTERDEVICEDEFAULTS, &CMyApp::SetLandscapeMode)
   ON_COMMAND(ID_WINAPP_M_HINSTANCE, &CMyApp::Onm_hInstance)
   ON_COMMAND(ID_WINAPP_CHANGESTRINGS, &CMyApp::OnChangeStrings)
   ON_COMMAND(ID_WINAPP_APPNAME, &CMyApp::OnAppName)
   ON_COMMAND(ID_CWND_FINDWINDOW, &CMyApp::OnFirstInstance)
   ON_COMMAND(ID_CWND_HIDEAPP, &CMyApp::OnHideApplication)
END_MESSAGE_MAP()


// CMyApp construction

CMyApp::CMyApp()
   : m_pMySampleMem(NULL)
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

   AfxEnableControlContainer();

	CWinApp::InitInstance();

   SetRegistryKey(_T("MyApp"));

   HINSTANCE hOldRes = AfxGetResourceHandle();

// <Snippet135>
   // This code is taken from CMyApp::InitInstance
   HINSTANCE hRes = NULL;
   hRes = LoadLibrary(_T("Resource.dll"));
   if(hRes)
      AfxSetResourceHandle(hRes);
// </Snippet135>

   AfxSetResourceHandle(hOldRes);

   {
// <Snippet44>
   HCURSOR hCursor;
  
   // Load a cursor resource that was originally created using
   // the Graphics Editor and assigned the i.d. IDC_MYCURSOR.
   hCursor = AfxGetApp()->LoadCursor(IDC_MYCURSOR);
// </Snippet44>
   }

   {
// <Snippet46>
   HCURSOR hCursor;
   // Load the predefined WIndows "size all" cursor.
   hCursor = AfxGetApp()->LoadOEMCursor(OCR_SIZEALL);
// </Snippet46>
   }

   {
// <Snippet47>
   HCURSOR hCursor;
  
   // Load the predefined Windows "up arrow" cursor.
   hCursor = AfxGetApp()->LoadStandardCursor(IDC_UPARROW);   
// </Snippet47>
   }

   LoadStdProfileSettings(4);  // Load standard INI file options (including MRU)
	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views

   m_pMySampleMem = new CMemFile();

// <Snippet35>
   // The following code is produced by the Application Wizard when you
   // choose the MDI (multiple document interface) option.
	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(IDR_MYTYPE,
		RUNTIME_CLASS(CMyDoc),
		RUNTIME_CLASS(CChildFrame), // custom MDI child frame
		RUNTIME_CLASS(CMyView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);
// </Snippet35>

	pDocTemplate = new CMultiDocTemplate(IDR_SPLITTYPE,
		RUNTIME_CLASS(CMyDoc),
		RUNTIME_CLASS(CSplitChildFrm), // custom MDI child frame
		RUNTIME_CLASS(CMyView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

	pDocTemplate = new CMultiDocTemplate(IDR_MDITYPE,
		RUNTIME_CLASS(CMdiDoc),
		RUNTIME_CLASS(CMdiChildFrame), // custom MDI child frame
		RUNTIME_CLASS(CMdiView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

   // <Snippet13>
   // Create main MDI Frame window. CMainFrame is a CMDIFrameWnd-derived 
   // class. The default CFrameWnd::PostNcDestroy() handler will delete this 
   // object when destroyed.
   CMainFrame* pMainFrame = new CMainFrame;
// </Snippet13>
	if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
	{
		delete pMainFrame;
		return FALSE;
	}
	m_pMainWnd = pMainFrame;
	// call DragAcceptFiles only if there's a suffix
	//  In an MDI app, this should occur immediately after setting m_pMainWnd

// <Snippet38>
   // The following code fragment is from CMyApp::InitInstance.
   // CMyApp is a CWinApp-derived class.

   // enable file manager drag/drop and DDE Execute open
   EnableShellOpen();
   RegisterShellFileTypes();
// </Snippet38>

// <Snippet52>
   if (m_lpCmdLine[0] == _T('\0'))
   {
      // Create a new (empty) document.
      OnFileNew();
   }
   else
   {
      // Open a file passed as the first command line parameter.
      OpenDocumentFile(m_lpCmdLine);
   }
// </Snippet52>

	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);


	// Dispatch commands specified on the command line.  Will return FALSE if
	// app was launched with /RegServer, /Register, /Unregserver or /Unregister.
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
// <Snippet56>
   // The following code fragment is taken from CMyApp::InitInstance.
   // CMyApp is derived from CWinApp.

	// The main window has been initialized, so show and update it
   // using the nCmdShow parameter passed to the application when it
   // was first launched.
   // pMainFrame is the main MDI frame window of our app and is derived 
   // from CMDIFrameWnd.
	pMainFrame->ShowWindow(m_nCmdShow);
	pMainFrame->UpdateWindow();
// </Snippet56>

	return TRUE;
}



// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

   HICON m_hIcon;

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
public:
   virtual BOOL PreTranslateMessage(MSG* pMsg);
public:
   afx_msg void OnPaint();
public:
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

CAboutDlg::CAboutDlg() 
   : CDialog(CAboutDlg::IDD)
{
   m_hIcon = ::LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_HELLO));
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
   ON_WM_PAINT()
   ON_WM_CREATE()
   ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// App command to run the dialog
void CMyApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// CMyApp message handlers

void DoCleanup()
{
   TRACE(_T("Cleaning..."));
}

// <Snippet39>
int CMyApp::ExitInstance()
{
  if (m_pMySampleMem)
     delete m_pMySampleMem;
   
   DoCleanup();

   return CWinApp::ExitInstance();
}
// </Snippet39>

// <Snippet40>
void CMyApp::SetLandscapeMode()
{
   PRINTDLG pd;
   pd.lStructSize = (DWORD)sizeof(PRINTDLG);
   BOOL bRet = GetPrinterDeviceDefaults(&pd);
   if(bRet)
   {
      // protect memory handle with ::GlobalLock and ::GlobalUnlock
      DEVMODE FAR *pDevMode = (DEVMODE FAR *)::GlobalLock(pd.hDevMode);
      // set orientation to landscape
      pDevMode->dmOrientation = DMORIENT_LANDSCAPE;
      ::GlobalUnlock(pd.hDevMode);
   }
}
// </Snippet40>

// <Snippet48>
BOOL CMyApp::OnDDECommand(LPTSTR lpszCommand)
{
   if (CWinApp::OnDDECommand(lpszCommand))
      return TRUE;

   // Handle any DDE commands recognized by your application
   // and return TRUE.  See implementation of CWinApp::OnDDEComand
   // for example of parsing the DDE command string.

   // Return FALSE for any DDE commands you do not handle.
   return FALSE;
 }
// </Snippet48>

// <Snippet51>
BOOL CMyApp::OnIdle(LONG lCount)
{
   BOOL bMore = CWinApp::OnIdle(lCount);

   if (lCount == 0)
   {
      TRACE(_T("App idle for short period of time\n"));
      bMore = TRUE;
   }
   else if (lCount == 10)
   {
      TRACE(_T("App idle for longer amount of time\n"));
      bMore = TRUE;
   }
   else if (lCount == 100)
   {
      TRACE(_T("App idle for even longer amount of time\n"));
      bMore = TRUE;
   }
   else if (lCount == 1000)
   {
      TRACE(_T("App idle for quite a long period of time\n"));
      // bMore is not set to TRUE, no longer need idle
      // IMPORTANT: bMore is not set to FALSE since CWinApp::OnIdle may
      // have more idle tasks to complete.
   }

   return bMore;
   // return TRUE as long as there are any more idle tasks
}
// </Snippet51>

void CMyApp::Onm_hInstance()
{
// <Snippet55>
   // Typically you do not need to pass the application's hInstance
   // to Windows APIs directly because there are equivalent MFC
   // member functions that pass the hInstance for you.  The following
   // example is not typical:

   HCURSOR hCursor;
   hCursor = ::LoadCursor(AfxGetApp()->m_hInstance, 
      MAKEINTRESOURCE(IDC_MYCURSOR));

   // A more direct way to get the application's hInstance is to
   // call AfxGetInstanceHandle:
   hCursor = ::LoadCursor(AfxGetInstanceHandle(), 
      MAKEINTRESOURCE(IDC_MYCURSOR));

   // If you need the hInstance to load a resource, it is better
   // to call AfxGetResourceHandle instead of AfxGetInstanceHandle:
   hCursor = ::LoadCursor(AfxGetResourceHandle(), 
      MAKEINTRESOURCE(IDC_MYCURSOR));

   // A better way to load the cursor resource is to call
   // CWinApp::LoadCursor
   hCursor = AfxGetApp()->LoadCursor(IDC_MYCURSOR);
// </Snippet55>
}

void CMyApp::OnChangeStrings()
{
// <Snippet57>
   //First free the string allocated by MFC at CWinApp startup.
   //The string is allocated before InitInstance is called.
   free((void*)m_pszAppName);
   //Change the name of the application file.
   //The CWinApp destructor will free the memory.
   m_pszAppName = _tcsdup(_T("c:\\somedir\\myapp.exe"));
// </Snippet57>

// <Snippet58>
   //First free the string allocated by MFC at CWinApp startup.
   //The string is allocated before InitInstance is called.
   free((void*)m_pszExeName);
   //Change the name of the .EXE file.
   //The CWinApp destructor will free the memory.
   m_pszExeName = _tcsdup(_T("c:\\somedir\\myapp"));
// </Snippet58>

// <Snippet59>
   //First free the string allocated by MFC at CWinApp startup.
   //The string is allocated before InitInstance is called.
   free((void*)m_pszHelpFilePath);
   //Change the name of the .HLP file.
   //The CWinApp destructor will free the memory.
   m_pszHelpFilePath = _tcsdup(_T("c:\\somedir\\myhelp.hlp"));
// </Snippet59>

// <Snippet60>
   //First free the string allocated by MFC at CWinApp startup.
   //The string is allocated before InitInstance is called.
   free((void*)m_pszProfileName);
   //Change the name of the .INI file.
   //The CWinApp destructor will free the memory.
   m_pszProfileName = _tcsdup(_T("c:\\somedir\\myini.ini"));
// </Snippet60>

// <Snippet61>
   //First free the string allocated by MFC at CWinApp startup.
   //The string is allocated before InitInstance is called.
   free((void*)m_pszRegistryKey);
   //Change the name of the registry key.
   //The CWinApp destructor will free the memory.
   m_pszRegistryKey = _tcsdup(
      _T("HKEY_CURRENT_USER\\Software\\mycompany\\myapp\\thissection\\thisvalue"));
// </Snippet61>
}

void CMyApp::OnAppName()
{
// <Snippet65>
   CWnd* pWnd = AfxGetMainWnd();
   // Set pWnd to some CWnd object whose window has already
   // been created.

   // The following call to CWnd::MessageBox uses the application
   // title as the message box caption.
   pWnd->MessageBox(_T("Some message"), AfxGetApp()->m_pszAppName);

   // A more direct way to get the application title is to 
   // call AfxGetAppName:
   pWnd->MessageBox(_T("Some message"), AfxGetAppName());

   // An easier way to display a message box using the application
   // title as the message box caption is to call AfxMessageBox:
   AfxMessageBox(_T("Some message"));
// </Snippet65>
}

// <Snippet74>
BOOL CAboutDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   CenterWindow();

   return TRUE;
}
// </Snippet74>

void CMyApp::OnFirstInstance()
{
   FirstInstance();
}

// <Snippet94>
// activate an application with a window with a specific class name
BOOL CMyApp::FirstInstance()
{
   CWnd *pWndPrev, *pWndChild;

   // Determine if a window with the class name exists...
   pWndPrev = CWnd::FindWindow(_T("MyNewClass"), NULL);
   if (NULL != pWndPrev)
   {
      // If so, does it have any popups?
      pWndChild = pWndPrev->GetLastActivePopup();

      // If iconic, restore the main window
      if (pWndPrev->IsIconic())
         pWndPrev->ShowWindow(SW_RESTORE);

      // Bring the main window or its popup to the foreground
      pWndChild->SetForegroundWindow();

      // and you are done activating the other application
      return FALSE;
   }

   return TRUE;
}
// </Snippet94>

// <Snippet100>
BOOL CAboutDlg::PreTranslateMessage(MSG* pMsg)
{
   if(IsDialogMessage(pMsg))
      return TRUE;
   else
      return CDialog::PreTranslateMessage(pMsg);
}
// </Snippet100>

// <Snippet101>
void CAboutDlg::OnPaint()
{
   // This code, normally emitted by the Application Wizard for a dialog-
   // based project for the dialog's WM_PAINT handler, runs only if the 
   // window is iconic. The window erases the icon's area, then
   // paints the icon referenced by m_hIcon.
   if (IsIconic())
   {
      CPaintDC dc(this); // device context for painting

      SendMessage(WM_ICONERASEBKGND, (WPARAM)dc.GetSafeHdc(), 0);

      // Center icon in client rectangle
      int cxIcon = GetSystemMetrics(SM_CXICON);
      int cyIcon = GetSystemMetrics(SM_CYICON);
      CRect rect;
      GetClientRect(&rect);
      int x = (rect.Width() - cxIcon + 1) / 2;
      int y = (rect.Height() - cyIcon + 1) / 2;

      // Draw the icon
      dc.DrawIcon(x, y, m_hIcon);
   }
   else
   {
      CDialog::OnPaint();   
   }
}
// </Snippet101>

// <Snippet106>
// This example would make the dialog box transparent by
// changing the dialog window's extended styles.
int CAboutDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CDialog::OnCreate(lpCreateStruct) == -1)
      return -1;

   ModifyStyleEx(0, WS_EX_TRANSPARENT);   
   
   return 0;
}
// </Snippet106>

void CAboutDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   ModifyStyle(0, WS_MINIMIZEBOX);
}

// <Snippet120>
void CMyApp::OnHideApplication()
{
   //m_pMainWnd is the main application window, a member of CMyApp
   ASSERT_VALID(m_pMainWnd);

   // hide the application's windows before closing all the documents
   m_pMainWnd->ShowWindow(SW_HIDE);
   m_pMainWnd->ShowOwnedPopups(FALSE);

   // put the window at the bottom of z-order, so it isn't activated
   m_pMainWnd->SetWindowPos(&CWnd::wndBottom, 0, 0, 0, 0,
      SWP_NOMOVE|SWP_NOSIZE|SWP_NOACTIVATE);
}
// </Snippet120>
