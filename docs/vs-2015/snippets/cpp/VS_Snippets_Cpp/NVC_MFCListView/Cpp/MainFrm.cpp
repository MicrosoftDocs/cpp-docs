// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "MFCListView.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

// <Snippet10>
BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
END_MESSAGE_MAP()
// </Snippet10>

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

// <Snippet8>
   // This code fragment is taken from CMainFrame::OnCreate
   // CMainFrame is derived from CMDIFrameWnd

   // This example shows how to add text to toolbar buttons.
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
   m_wndToolBar.GetItemRect(0,&temp);
   m_wndToolBar.SetSizes(CSize(temp.Width(),
      temp.Height()),CSize(16,15));
// </Snippet8>

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



