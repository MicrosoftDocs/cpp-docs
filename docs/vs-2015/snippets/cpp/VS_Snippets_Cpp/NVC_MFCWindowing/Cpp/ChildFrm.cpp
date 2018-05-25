// ChildFrm.cpp : implementation of the CChildFrame class
//
#include "stdafx.h"
#include "NVC_MFCWindowing.h"

#include "ChildFrm.h"
#include "MyView.h"
#include "MyOtherView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CMDIChildWnd)

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWnd)
   ON_WM_CTLCOLOR()
   ON_WM_SIZE()
END_MESSAGE_MAP()


// CChildFrame construction/destruction

CChildFrame::CChildFrame()
   : m_bSplitterCreated(FALSE)
{
	// TODO: add member initialization code here
}

CChildFrame::~CChildFrame()
{
}

// <Snippet4>
// this function creates the panes for a static splitter window
BOOL CChildFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/, CCreateContext* pContext)
{
   m_bSplitterCreated = m_wndSplitter.CreateStatic(this, 1, 2);
   // CMyView and CMyOtherView are user-defined views derived from CView
   m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS(CMyView), CSize(0, 0), 
      pContext);
   m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS(CMyOtherView), CSize(0, 0), 
      pContext);

   return (m_bSplitterCreated);
}
// </Snippet4>

BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying the CREATESTRUCT cs
	if( !CMDIChildWnd::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}


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

// <Snippet1>
void CChildFrame::ActivateFrame(int nCmdShow)
{
   // Create the child frame window maximized
   nCmdShow = SW_MAXIMIZE;

   CMDIChildWnd::ActivateFrame(nCmdShow);
}
// </Snippet1>

// <Snippet6>
void CChildFrame::OnSize(UINT nType, int cx, int cy) 
{
   CMDIChildWnd::OnSize(nType, cx, cy);

   CRect rect;
   GetWindowRect(&rect);
   if(m_bSplitterCreated)  // m_bSplitterCreated set in OnCreateClient
   {
      m_wndSplitter.SetColumnInfo(0, rect.Width()/2, 10);
      m_wndSplitter.SetColumnInfo(1, rect.Width()/2, 10);
      m_wndSplitter.RecalcLayout();
   }
}
// </Snippet6>