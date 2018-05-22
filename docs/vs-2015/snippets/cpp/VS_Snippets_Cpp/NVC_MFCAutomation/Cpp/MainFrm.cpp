// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "CMFCAutomation.h"

#include "MainFrm.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	ON_WM_CREATE()
   ON_COMMAND(ID_SNIPPETS_AFXOLECANEXITAPP, &CMainFrame::OnAfxOleCanExitApp)
   ON_COMMAND(ID_SNIPPETS_AFXOLEGETMESSAGEFILTER, &CMainFrame::OnSnippetsAfxOleGetMessageFilter)
   ON_COMMAND(ID_SNIPPETS_AFXOLELOCKCONTROL, &CMainFrame::OnSnippetsAfxolelockcontrol)
   ON_COMMAND(ID_SNIPPETS_AFXOLEUNLOCKCONTROL, &CMainFrame::OnSnippetsAfxoleunlockcontrol)
   ON_COMMAND(ID_SNIPPETS_CMyDlg, &CMainFrame::OnCMyDlg)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};


// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}


// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG


// CMainFrame message handlers

// <Snippet2>
// Helper exit function for automation server
BOOL CMainFrame::CanExit()
{
   if (AfxOleCanExitApp())
   {
      // No outstanding object counts - go ahead and exit
      return TRUE;
   } 
   else
   {
      // There are outstanding OLE object counts...
      // hide app to give user impression that application has exited.
      ShowWindow(SW_HIDE);
      // take user out of control of the app
      AfxOleSetUserCtrl(FALSE);
      return FALSE;
   }
}
// </Snippet2>

void CMainFrame::OnAfxOleCanExitApp()
{
   CanExit();
}


void CMainFrame::OnSnippetsAfxOleGetMessageFilter()
{
// <Snippet3>
   COleMessageFilter* pFilter = AfxOleGetMessageFilter();
   ASSERT_VALID(pFilter);
   pFilter->BeginBusyState();
   // do things requiring a busy state
   pFilter->EndBusyState();
// </Snippet3>
}

void CMainFrame::OnSnippetsAfxolelockcontrol()
{
// <Snippet6>
   // Starts and locks control's (Microsoft Calendar) class factory. 
   // Control will remain in memory for lifetime of
   // application or until AfxOleUnlockControl() is called.
   
   AfxOleLockControl(_T("MSCAL.Calendar"));
// </Snippet6>
}

void CMainFrame::OnSnippetsAfxoleunlockcontrol()
{
// <Snippet9>
   // Unlock control's (Microsoft Calendar Control) class factory.

   AfxOleUnlockControl(_T("MSCAL.Calendar"));
// </Snippet9>
}

void CMainFrame::OnCMyDlg()
{
   CMyDlg dlg;
   dlg.DoModal();
}