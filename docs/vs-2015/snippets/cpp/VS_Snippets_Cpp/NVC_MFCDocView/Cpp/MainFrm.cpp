// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"

#include "MainFrm.h"

#include "MyMultiPageDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
// <Snippet13>
   ON_UPDATE_COMMAND_UI(ID_INDICATOR_PAGE, &CMainFrame::OnUpdatePage)
// </Snippet13>
   ON_COMMAND(ID_VIEW_SETPANETEXT, &CMainFrame::OnSetPaneText)
// <Snippet177>
   //UI handler in the message map updates the status bar text:
   ON_UPDATE_COMMAND_UI(ID_INDICATOR_SCRL, &CMainFrame::OnUpdatePane)
// </Snippet177>

ON_COMMAND(ID_DHTML_MULTIPAGEDLG, &CMainFrame::OnDhtmlMultipagedlg)
ON_COMMAND(ID_VIEW_STARTTIMER, &CMainFrame::OnViewStarttimer)
ON_COMMAND(ID_VIEW_KILLTIMER, &CMainFrame::OnViewKilltimer)
ON_WM_TIMER()
END_MESSAGE_MAP()

// <Snippet10>
static UINT indicators[] =
{
   ID_SEPARATOR,           // status line indicator
   ID_INDICATOR_CAPS,
   ID_INDICATOR_NUM,
   ID_INDICATOR_SCRL,
   ID_INDICATOR_PAGE,
};
// </Snippet10>
static const int s_iPage = 4;

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
   : m_nPage(15)
   , m_nTimer(0)
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

// <Snippet179>
   // This code fragment is taken from CMainFrame::OnCreate
   // CMainFrame is derived from CMDIFrameWnd.

   //This example creates a dockable toolbar.
   if (!m_wndToolBar.Create(this) ||
      !m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
   {
      TRACE0("Failed to create toolbar\n");
      return -1;      // fail to create
   }
   
   //Make the toolbar dockable
   m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
   EnableDocking(CBRS_ALIGN_ANY);
   DockControlBar(&m_wndToolBar);
// </Snippet179>
   
   if (!m_wndStatusBar.Create(this) ||
      !m_wndStatusBar.SetIndicators(indicators,
        sizeof(indicators)/sizeof(UINT)))
   {
      TRACE0("Failed to create status bar\n");
      return -1;      // fail to create
   }

   UINT nID;
   UINT nStyle;
   int cxWidth;
   m_wndStatusBar.GetPaneInfo(s_iPage, nID, nStyle, cxWidth);
   cxWidth += 20;
   m_wndStatusBar.SetPaneInfo(s_iPage, nID, nStyle, cxWidth);

// <Snippet17>
   CString strWndClass = AfxRegisterWndClass(CS_DBLCLKS);

   RECT rect = {10, 10, 10, 10};
   CWnd* pWnd = new CWnd;
   pWnd->Create(strWndClass, _T("My Window"), WS_CHILD, rect, this, 0);
// </Snippet17>

   HWND hwnd = pWnd->m_hWnd;

// <Snippet18>
   CWnd* wndFound = CWnd::FromHandle(hwnd);
// </Snippet18>
   UNREFERENCED_PARAMETER(wndFound);

   hwnd = NULL;

// <Snippet19>
   CWnd myWnd;
   myWnd.Attach(hwnd);
// </Snippet19>

// <Snippet20>
   myWnd.Detach();
// </Snippet20>

   delete pWnd;

// <Snippet175>
   // DeleteTempMap() is a static member and so does not need to 
   // be called within the scope of an instantiated CGdiObject object.
   CGdiObject::DeleteTempMap();
// </Snippet175>

   return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
   if( !CMDIFrameWnd::PreCreateWindow(cs) )
      return FALSE;

// <Snippet15>
   // cs has been declared as CREATESTRUCT& cs;
   cs.style &= ~WS_CAPTION;
// </Snippet15>

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

// <Snippet12>
void CMainFrame::OnUpdatePage(CCmdUI *pCmdUI)
{
    pCmdUI->Enable(); 
    CString strPage;
    strPage.Format(_T("Page %d"), m_nPage); 
    pCmdUI->SetText(strPage); 
}
// </Snippet12>

void CMainFrame::OnSetPaneText()
{
// <Snippet176>
   //Sets and displays text for pane index 3 and id ID_INDICATOR_SCRL
   m_wndStatusBar.SetPaneText(3, _T("My New Status Bar Text"), TRUE);
// </Snippet176>
}

// <Snippet178>
void CMainFrame::OnUpdatePane(CCmdUI* pCmdUI)
{
   pCmdUI->Enable();
}
// </Snippet178>

void CMainFrame::OnDhtmlMultipagedlg()
{
   CMyMultiPageDlg mmpd;
   mmpd.DoModal();
}

void CMainFrame::OnViewStarttimer()
{
   m_nTimer = SetTimer(1, 2000, NULL);
}

void CMainFrame::OnViewKilltimer()
{
   KillTimer(m_nTimer);
}

void CMainFrame::OnTimer(UINT_PTR nIDEvent)
{
   MessageBeep(0xFFFFFFFF);   // Beep

   CMDIFrameWnd::OnTimer(nIDEvent);
}
