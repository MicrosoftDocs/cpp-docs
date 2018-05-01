// NVC_MFCDocView.cpp : Defines the class behaviors for the application.
//
// Demonstrates various aspects of the document/view architecture with MFC
//
// Topic															Snippet
// Drawing in a View												1
// The ON_UPDATE_COMMAND_UI Macro							2
// The CCmdUI Class												3
// Exchanging Data												4
// Property Sheets as Wizards									5
// Special CWinApp Services									6
// Document Template Creation									7
// Idle Loop Processing											8
// MAPI Support in MFC											9
// Updating the Text of a Status-Bar Pane					10 - 13
// Changing the Styles of a Window Created by MFC		15 - 16
// TN001: Window Class Registration							17
// TN003: Mapping of Windows Handles to Objects			18 - 20
// CBrush::CBrush													21
// CBrush::CreateBrushIndirect								22
// CBrush::CreateDIBPatternBrush								23
// CBrush::CreateHatchBrush									24
// CBrush::CreatePatternBrush									25
// CBrush::CreateSysColorBrush								26
// CBrush::GetLogBrush											27
// CBrush::operator HBRUSH										28
// CDC::Arc															29
// CDC::BeginPath													30
// CDC::Chord														31
// CDC::CreateCompatibleDC										32
// CDC::Draw3dRect												33
// CDC::DrawFrameControl										34
// CDC::EnumObjects												35
// CDC::InvertRect												36
// CDC::Pie															37
// CDC::Polygon													38
// CDC::Rectangle													39
// CDC::RoundRect													40
// CDC::StartDoc													41
// CClientDC::CClientDC											42
// CCmdTarget::BeginWaitCursor                        43
// CCmdTarget::EndWaitCursor                          43
// CCmdTarget::OnCmdMsg                               44 - 45
// CCmdTarget::RestoreWaitCursor                      43
// CCmdUI::Enable                                     46 - 47
// CmdUI::SetText                                     48
// CColorDialog::CColorDialog                         49
// CColorDialog::GetColor                             50
// CColorDialog::GetSaveCustomColor                   51
// CColorDialog::OnColorOK                            52
// CColorDialog::m_cc                                 53
// CCommandLineInfo::CCommandLineInfo                 54
// CCommandLineInfo::m_nShellCommand                  55
// Creating an Active Document Container Application  56
// CDocument::DeleteContents                          57
// CDocument::GetDocTemplate                          58
// CDocument::GetFirstViewPosition                    59
// CDocument::GetNextView                             59
// CDocument::OnNewDocument                           60 - 62
// CDocument::OnOpenDocument                          60 - 63
// CDocument::UpdateAllViews                          64
// CFindReplaceDialog::CFindReplaceDialog             170
// CFindReplaceDialog::Create                         171 - 173
// CFindReplaceDialog::GetFindString                  69
// CFindReplaceDialog::GetNotifier                    69
// CFont::CFont                                       70
// CFont::CreateFont                                  71
// CFont::CreateFontIndirect                          72
// CFont::CreatePointFont                             73
// CFont::CreatePointFontIndirect                     74
// CFont::FromHandle                                  75
// CFont::GetLogFont                                  76
// CFont::operator HFONT                              77
// CFontDialog::CFontDialog                           78
// CFontDialog::GetColor                              79
// CFontDialog::GetCurrentFont                        80
// CFontDialog::GetFaceName                           81
// CFontDialog::GetSize                               82
// CFontDialog::GetStyleName                          83
// CFontDialog::GetWeight                             84
// CFontDialog::IsBold                                85
// CFontDialog::IsItalic                              86
// CFontDialog::IsStrikeOut                           87
// CFontDialog::IsUnderline                           88
// CFontDialog::m_cf                                  89
// CFormView::CFormView                               90 - 91
// CMultiDocTemplate::CMultiDocTemplate               92 - 93
// CPageSetupDialog::CPageSetupDialog                 94
// CPageSetupDialog::DoModal                          95
// CPageSetupDialog::OnDrawPage                       96
// CPaintDC::CPaintDC                                 97
// CPaintDC::m_hWnd                                   98
// CPen::CPen                                         99
// CPen::CreatePen                                    100
// CPen::CreatePenIndirect                            101
// CPen::FromHandle                                   105
// CPen::GetExtLogPen                                 102
// CPen::GetLogPen                                    103
// CPen::operator HPEN                                104
// CPrintDialog::CPrintDialog                         174
// CPrintDialog::CreatePrinterDC                      106
// CPrintDialog::GetDefaults                          107
// CPrintDialog::GetDeviceName                        108
// CPrintDialog::GetPrinterDC                         109
// CPrintDialog::PrintCollate                         110
// CPrintDialog::m_pd                                 111
// CPropertyPage::Construct                           112
// CPropertyPage::CPropertyPage                       113
// CPropertyPage::OnCancel                            114
// CPropertyPage::OnKillActive                        115
// CPropertyPage::OnOK                                116
// CPropertyPage::OnQueryCancel                       117
// CPropertyPage::OnWizardBack                        118
// CPropertyPage::OnWizardFinish                      119 - 122
// CPropertyPage::OnWizardNext                        123
// CPropertyPage::QuerySiblings                       124 - 126
// CPropertyPage::SetModified                         127
// CPropertyPage::m_psp                               128
// CPropertySheet::AddPage                            129
// CPropertySheet::Construct                          130
// CPropertySheet::CPropertySheet                     131
// CPropertySheet::Create                             132 - 133
// CPropertySheet::EnableStackedTabs                  134
// CPropertySheet::GetActivePage                      135
// CPropertySheet::GetTabControl                      136
// CPropertySheet::PressButton                        137
// CPropertySheet::SetFinishText                      138
// CPropertySheet::SetTitle                           139
// CPropertySheet::SetWizardButtons                   140 - 141, 138
// CPropertySheet::SetWizardMode                      142
// CPropertySheet::m_psh                              143
// CRgn::CombineRgn                                   144
// CRgn::CreateEllipticRgn                            145
// CRgn::CreatePolygonRgn                             146
// CRgn::CreateRectRgn                                147
// CRgn::CreateRectRgnIndirect                        148  
// CRgn::CreateRoundRectRgn                           149
// CRgn::EqualRgn                                     150
// CRichEditView::FindText                            151
// CRichEditView::GetCharFormatSelection              152
// CRichEditView::GetPaperSize                        153
// CRichEditView::GetPrintRect                        154
// CRichEditView::OnCharEffect                        155
// CRichEditView::OnParaAlign                         156
// CRichEditView::OnTextNotFound                      157
// CRichEditView::OnUpdateCharEffect                  158
// CRichEditView::OnUpdateParaAlign                   159
// CRichEditView::QueryAcceptData                     160
// CRichEditView::SetCharFormat                       152
// CRichEditView::SetPaperSize                        161
// CRichEditView::SetParaFormat                       162
// CRichEditView::WrapChanged                         163
// CScrollView::FillOutsideRect                       164
// CScrollView::ResizeParentToFit                     165
// CScrollView::SetScaleToFitSize                     165
// CScrollView::SetScrollSizes                        166 - 169
// CGdiObject::DeleteTempMap                          175
// CStatusBar::SetPaneText                            176 - 178
// CToolBar::Create                                   179
// CToolBar::CreateEx                                 180
// CMultiPageDHtmlDialog Class                        181 - 182
// CView::OnPrepareDC                                 183
// CView::OnPreparePrinting                           184 - 185
// CView::OnPrint                                     186
// CWinApp::OnIdle                                    187
// CWindowDC::CWindowDC                               188
// CWinThread::IsIdleMessage                          189
// AfxDrawDitheredBitmap                              190
// AfxDrawGrayBitmap                                  191
// AfxGetDitheredBitmap                               192
// AfxGetGrayBitmap                                   193
// ASSERT_KINDOF                                      194 - 195
// BEGIN_DHTML_URL_EVENT_MAP                          196
// STATIC_DOWNCAST                                    197

#include "stdafx.h"
#include "gdiplus.h"

#include "NVC_MFCDocView.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "MyDoc.h"
#include "MyView.h"
#include "BrushDoc.h"
#include "BrushView.h"
#include "DCDoc.h"
#include "DCView.h"
#include "MyRichEditDoc.h"
#include "MyRichEditView.h"
#include "ExampleDoc.h"
#include "ExampleView.h"
#include "MyEditDoc.h"
#include "MyEditView.h"
#include "FontDoc.h"
#include "FontView.h"
#include "SheetDoc.h"
#include "SheetView.h"
#include "RgnDoc.h"
#include "RgnView.h"
#include "MyScrollDoc.h"
#include "MyScrollView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace Gdiplus;

// CMyWinApp

BEGIN_MESSAGE_MAP(CMyWinApp, CWinApp)
   ON_COMMAND(ID_APP_ABOUT, &CMyWinApp::OnAppAbout)
   // Standard file based document commands
   ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
   ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
   // Standard print setup command
   ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinApp::OnFilePrintSetup)
   ON_UPDATE_COMMAND_UI(ID_EDIT_CLEARALL, &CMyWinApp::OnUpdateEditClearAll)
END_MESSAGE_MAP()


// CMyWinApp construction

CMyWinApp::CMyWinApp()
   : m_bClearAllAvailable(FALSE)
{
   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}

CMyWinApp::~CMyWinApp()
{
}

// The one and only CMyWinApp object

CMyWinApp theApp;


// CMyWinApp initialization

BOOL CMyWinApp::InitInstance()
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

   // Initialize OLE libraries
   if (!AfxOleInit())
   {
      AfxMessageBox(IDP_OLE_INIT_FAILED);
      return FALSE;
   }
   AfxEnableControlContainer();
   // Standard initialization
   // If you are not using these features and wish to reduce the size
   // of your final executable, you should remove from the following
   // the specific initialization routines you do not need
   // Change the registry key under which our settings are stored
   // TODO: You should modify this string to be something appropriate
   // such as the name of your company or organization
   SetRegistryKey(_T("Local AppWizard-Generated Applications"));
   LoadStdProfileSettings(4);  // Load standard INI file options (including MRU)
   // Register the application's document templates.  Document templates
   //  serve as the connection between documents, frame windows and views
// <Snippet7>
   CMultiDocTemplate* pDocTemplate;
   pDocTemplate = new CMultiDocTemplate(IDR_CMyDocTypeTYPE,
      RUNTIME_CLASS(CMyDoc),
      RUNTIME_CLASS(CChildFrame), // custom MDI child frame
      RUNTIME_CLASS(CMyView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);
// </Snippet7>

// <Snippet92>
   // Code fragment from CMyApp::InitInstance

   // Establish all of the document types
   // supported by the application

   AddDocTemplate(new CMultiDocTemplate(IDR_BRUSHDOCTYPE,
      RUNTIME_CLASS(CBrushDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CBrushView)));

   AddDocTemplate(new CMultiDocTemplate(IDR_DCDOCTYPE,
      RUNTIME_CLASS(CDCDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CDCView)));
// </Snippet92>

   pDocTemplate = new CMultiDocTemplate(IDR_RICHEDITDOCTYPE,
      RUNTIME_CLASS(CMyRichEditDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CMyRichEditView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

// <Snippet93>
   // Code fragment taken from CMyApp::InitInstance

   // Normally, an application creates a document 
   // template and registers it with MFC as a part
   // of its initialization.

   // IDR_EXAMPLEDOCTYPE is a resource ID string; see
   // the CDocTemplate class overview documentation
   // for more information on its format.

   // The next three parameters use the RUNTIME_CLASS()
   // macro to get runtime type information for the doc,
   // frame, and view classes that will be associated
   // by the template.

   pDocTemplate = new CMultiDocTemplate(IDR_EXAMPLEDOCTYPE,
      RUNTIME_CLASS(CExampleDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CExampleView));
   if (!pDocTemplate)
      return FALSE;

   // After the following call, MFC is aware of the doc
   // template and will free it when the application is
   // shut down. The doc templates known to MFC will
   // automatically be used when CWinApp:OnFileOpen()
   // or CWinApp::OnFileNew() are called.

   AddDocTemplate(pDocTemplate);
// </Snippet93>

   pDocTemplate = new CMultiDocTemplate(IDR_MYEDITDOCTYPE,
      RUNTIME_CLASS(CMyEditDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CMyEditView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

   pDocTemplate = new CMultiDocTemplate(IDR_FONTDOCTYPE,
      RUNTIME_CLASS(CFontDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CFontView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

   pDocTemplate = new CMultiDocTemplate(IDR_SHEETDOCTYPE,
      RUNTIME_CLASS(CPSheetDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CPSheetView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

   pDocTemplate = new CMultiDocTemplate(IDR_RGNDOCTYPE,
      RUNTIME_CLASS(CRgnDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CRgnView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

   pDocTemplate = new CMultiDocTemplate(IDR_MYSCROLLDOCTYPE,
      RUNTIME_CLASS(CMyScrollDoc),
      RUNTIME_CLASS(CChildFrame),
      RUNTIME_CLASS(CMyScrollView));
   if (!pDocTemplate)
      return FALSE;
   AddDocTemplate(pDocTemplate);

   // create main MDI Frame window
   CMainFrame* pMainFrame = new CMainFrame;
   if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
   {
      delete pMainFrame;
      return FALSE;
   }
   m_pMainWnd = pMainFrame;
   // call DragAcceptFiles only if there's a suffix
   //  In an MDI app, this should occur immediately after setting m_pMainWnd

// <Snippet55>
   // From CMyWinApp::InitInstance

   // Parse command line for standard shell commands, DDE, file open
// <Snippet54>
   CCommandLineInfo cmdInfo;
   ParseCommandLine(cmdInfo);
// </Snippet54>

   // DON'T display a new MDI child window during startup!!!
   cmdInfo.m_nShellCommand = CCommandLineInfo::FileNothing;

   // Dispatch commands specified on the command line
   if (!ProcessShellCommand(cmdInfo))
      return FALSE;
// </Snippet55>

   // The main window has been initialized, so show and update it
   pMainFrame->ShowWindow(m_nCmdShow);
   pMainFrame->UpdateWindow();

   return TRUE;
}


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
   CAboutDlg();

// Dialog Data
   enum { IDD = IDD_ABOUTBOX };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
   DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// App command to run the dialog
void CMyWinApp::OnAppAbout()
{
   CAboutDlg aboutDlg;
   aboutDlg.DoModal();
}


// CMyWinApp message handlers

// <Snippet3>
void CMyWinApp::OnUpdateEditClearAll(CCmdUI *pCmdUI)
{
   pCmdUI->Enable(m_bClearAllAvailable);
}
// </Snippet3>

// <Snippet6>
int CMyWinApp::Run()
{
   GdiplusStartupInput gdiSI;
   GdiplusStartupOutput gdiSO;
   ULONG_PTR gdiToken;
   ULONG_PTR gdiHookToken;

   gdiSI.SuppressBackgroundThread = TRUE;
   GdiplusStartup(&gdiToken,&gdiSI,&gdiSO);
   gdiSO.NotificationHook(&gdiHookToken);
   int nRet = CWinApp::Run();

   gdiSO.NotificationUnhook(gdiHookToken);
   GdiplusShutdown(gdiToken);

   return nRet;
}
// </Snippet6>

void CMyWinApp::SetLandscapeMode()
{
   PRINTDLG pd;
   pd.lStructSize = (DWORD)sizeof(PRINTDLG);
   BOOL bRet = GetPrinterDeviceDefaults(&pd);
   if(bRet)
   {
      // protect memory handle with ::GlobalLock and ::GlobalUnlock
      DEVMODE FAR *pDevMode=(DEVMODE FAR *)::GlobalLock(m_hDevMode);
      // set orientation to landscape
      pDevMode->dmOrientation=DMORIENT_LANDSCAPE;
      ::GlobalUnlock(m_hDevMode);
   }
}

void Task1()
{
   TRACE(_T("Task 1!"));
}
void Task2()
{
   TRACE(_T("Task 2!"));
}
void Task3()
{
   TRACE(_T("Task 3!"));
}
void Task4()
{
   TRACE(_T("Task 4!"));
}

// <Snippet187>
// In this example, four idle loop tasks are given various 
// opportunities to run:
// Task1 is always given a chance to run during idle time, provided
//   that no message has queued up while the framework was processing
//   its own idle loop tasks (at lCount levels 0 and 1).
// Task2 is given a chance to run only if Task1 has already run,
//   provided that no message has queued up while Task1 was running.
// Task3 and Task4 are given a chance to run only if both Task1 and
//   Task2 have already run, and no message has queued up in the mean
//   time.  If Task3 gets its chance to run, then Task4 always gets
//   a chance to run immediately after Task3.

BOOL CMyWinApp::OnIdle(LONG lCount)
{
   // In this example, as in most applications, you should let the
   // base class CWinApp::OnIdle complete its processing before you
   // attempt any additional idle loop processing.
   if (CWinApp::OnIdle(lCount))
      return TRUE;   

   // The base class CWinApp::OnIdle reserves the lCount values 0 
   // and 1 for the framework's own idle processing.   If you wish to
   // share idle processing time at a peer level with the framework,
   // then replace the above if-statement with a straight call to
   // CWinApp::OnIdle; and then add a case statement for lCount value
   // 0 and/or 1. Study the base class implementation first to 
   // understand how your idle loop tasks will compete with the 
   // framework's idle loop processing.

   switch (lCount)
   {
      case 2:
         Task1();
         return TRUE; // next time give Task2 a chance
      case 3:
         Task2();
         return TRUE; // next time give Task3 and Task4 a chance
      case 4:
         Task3();
         Task4();
         return FALSE; // cycle through the idle loop tasks again
   }
   return TRUE;
}
// </Snippet187>

// <Snippet189>
BOOL CMyWinApp::IsIdleMessage(MSG* pMsg)
{
   if (!CWinApp::IsIdleMessage(pMsg) || pMsg->message == WM_TIMER)
      return FALSE;
   else
      return TRUE;
}
// </Snippet189>