// ChildFrm.cpp : implementation of the CChildFrame class
//
#include "stdafx.h"
#include "NVC_MFCDocView.h"

#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CMDIChildWnd)

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWnd)
   ON_WM_CREATE()
END_MESSAGE_MAP()


// CChildFrame construction/destruction

CChildFrame::CChildFrame()
{
   // TODO: add member initialization code here
}

CChildFrame::~CChildFrame()
{
}

// <Snippet16>
BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
   // Create a child window without the maximize button 
    cs.style &= ~WS_MAXIMIZEBOX; 

   return CMDIChildWnd::PreCreateWindow(cs);
}
// </Snippet16>

// CChildFrame diagnostics

#ifdef _DEBUG
void CChildFrame::AssertValid() const
{
   CMDIChildWnd::AssertValid();
}

void CChildFrame::Dump(CDumpContext& dc) const
{
   CMDIChildWnd::Dump(dc);
}

#endif //_DEBUG


// CChildFrame message handlers

// <Snippet180>
// This example demonstrates CToolBar::CreateEx by creating a 
// toolbar as part of a child frame window. It also calls the 
// LoadToolbar and EnableDocking functions
int CChildFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
      return -1;

   if (!m_wndMyToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
      | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
      !m_wndMyToolBar.LoadToolBar(IDR_MYTOOLBAR))
   {
      TRACE0("Failed to create toolbar\n");
      return -1;      // fail to create
   }

   m_wndMyToolBar.EnableDocking(CBRS_ALIGN_ANY);
   EnableDocking(CBRS_ALIGN_ANY);
   DockControlBar(&m_wndMyToolBar);

   return 0;
}
// </Snippet180>
