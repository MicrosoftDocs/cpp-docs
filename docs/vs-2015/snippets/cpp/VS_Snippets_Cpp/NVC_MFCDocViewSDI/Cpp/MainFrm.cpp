// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "NVC_MFCDocViewSDI.h"

#include "MainFrm.h"
#include "MyView2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
   ON_WM_CREATE()
   ON_COMMAND_RANGE(ID_VIEW_CHANGE1, ID_VIEW_CHANGE2, &CMainFrame::OnViewChange)
// <Snippet16>
   ON_COMMAND(ID_CONTEXT_HELP, &CMainFrame::OnContextHelp)
// </Snippet16>
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
   : m_currentView(cvView1)
   , m_pView1(NULL)
   , m_pView2(NULL)
{
   // TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
      return -1;

// <Snippet15>
   // This code fragment is taken from CMainFrame::OnCreate
   // CMainFrame is derived from CMDIFrameWnd.

   //This example shows how to add text to toolbar buttons.
   if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE 
      | CBRS_TOP) || !m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
   {
      TRACE0("Failed to create toolbar\n");
      return -1;      // fail to create
   }

   //Show text on toolbar buttons.
   VERIFY(m_wndToolBar.SetButtonText(0, _T("New")));
   VERIFY(m_wndToolBar.SetButtonText(1, _T("Open")));
   VERIFY(m_wndToolBar.SetButtonText(2, _T("Save")));
   VERIFY(m_wndToolBar.SetButtonText(4, _T("Cut")));
   VERIFY(m_wndToolBar.SetButtonText(5, _T("Copy")));
   VERIFY(m_wndToolBar.SetButtonText(6, _T("Paste")));
   VERIFY(m_wndToolBar.SetButtonText(8, _T("Print")));
   VERIFY(m_wndToolBar.SetButtonText(9, _T("About")));

   CRect temp;
   m_wndToolBar.GetItemRect(0, &temp);
   m_wndToolBar.GetToolBarCtrl().SetButtonSize(CSize(temp.Width(),
      temp.Height()));
// </Snippet15>

// <Snippet10>
   // Get the style of the first button separator
   UINT nStyle = m_wndToolBar.GetButtonStyle(3);
   // Augment the state for wrapping
   nStyle |= TBBS_WRAPPED;
   m_wndToolBar.SetButtonStyle(3, nStyle);

   // Do the same for other wrap locations ...

   // Set the bar style to size fixed
   m_wndToolBar.SetBarStyle(m_wndToolBar.GetBarStyle() |
      CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_FIXED);

   // Call docking/floating functions as needed ...
// </Snippet10>

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

// <Snippet11>
BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
    // Call the base-class version
   if( !CFrameWnd::PreCreateWindow(cs) )
      return FALSE;

    // Create a window without min/max buttons or sizable border 
    cs.style = WS_OVERLAPPED | WS_SYSMENU | WS_BORDER;

    // Size the window to 1/3 screen size and center it 
    cs.cy = ::GetSystemMetrics(SM_CYSCREEN) / 3; 
    cs.cx = ::GetSystemMetrics(SM_CXSCREEN) / 3; 
    cs.y = ((cs.cy * 3) - cs.cy) / 2; 
    cs.x = ((cs.cx * 3) - cs.cx) / 2;

   return TRUE;
}
// </Snippet11>

// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
   CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
   CFrameWnd::Dump(dc);
}

#endif //_DEBUG


// CMainFrame message handlers

// <Snippet12>
// The following example toggles two views in an SDI (single document
// interface) frame window. A design decision must be made as to
// whether to leave the inactive view connected to the document,
// such that the inactive view continues to receive OnUpdate
// notifications from the document. It is usually desirable to
// keep the inactive view continuously in sync with the document, even 
// though it is inactive. However, doing so incurs a performance cost,
// as well as the programming cost of implementing OnUpdate hints.
// It may be less expensive, in terms of performance and/or programming,
// to re-sync the inactive view with the document only with it is 
// reactivated. This example illustrates this latter approach, by 
// reconnecting the newly active view and disconnecting the newly 
// inactive view, via calls to CDocument::AddView and RemoveView.

void CMainFrame::OnViewChange(UINT nCmdID)
// There is an ON_COMMAND_RANGE message map entry associated with
// OnViewChange:
// ON_COMMAND_RANGE(ID_VIEW_CHANGE1, ID_VIEW_CHANGE2, &OnViewChange)
{
   CView* pViewAdd;
   CView* pViewRemove;
   CDocument* pDoc = GetActiveDocument();

   // cvView1 and cvView2 are enum members defined in my CMainFrame class
   if((nCmdID == ID_VIEW_CHANGE1) && (m_currentView == cvView1))
      return;
   if((nCmdID == ID_VIEW_CHANGE2) && (m_currentView == cvView2))
      return;

   if (nCmdID == ID_VIEW_CHANGE2)
   {
      if (m_pView2 == NULL)
      {
         m_pView1 = GetActiveView();
         m_pView2 = new CMyView2;

         //Note that if OnSize has been overridden in CMyView2 
         //and GetDocument() is used in this override it can 
         //cause assertions and, if the assertions are ignored,
         //cause access violation.

         m_pView2->Create(NULL, NULL, AFX_WS_DEFAULT_VIEW, rectDefault, this, 
            AFX_IDW_PANE_FIRST + 1, NULL);
      }
      pViewAdd = m_pView2;
      pViewRemove = m_pView1;
      m_currentView = cvView2;
   }
   else
   {
      pViewAdd = m_pView1;
      pViewRemove = m_pView2;
      m_currentView = cvView1;
   }

   // Set the child i.d. of the active view to AFX_IDW_PANE_FIRST,
   // so that CFrameWnd::RecalcLayout will allocate to this 
   // "first pane" that portion of   the frame window's client area 
   // not allocated to control   bars.  Set the child i.d. of the 
   // other view to anything other than AFX_IDW_PANE_FIRST; this
   // examples switches the child id's of the two views.

   int nSwitchChildID = pViewAdd->GetDlgCtrlID();
   pViewAdd->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
   pViewRemove->SetDlgCtrlID(nSwitchChildID);

   // Show the newly active view and hide the inactive view.

   pViewAdd->ShowWindow(SW_SHOW);
   pViewRemove->ShowWindow(SW_HIDE);

   // Connect the newly active view to the document, and
   // disconnect the inactive view.
   pDoc->AddView(pViewAdd);
   pDoc->RemoveView(pViewRemove);

   SetActiveView(pViewAdd);
   RecalcLayout();
}
// </Snippet12>