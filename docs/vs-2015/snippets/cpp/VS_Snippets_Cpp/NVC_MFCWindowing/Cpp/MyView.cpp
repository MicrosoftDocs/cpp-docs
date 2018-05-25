// MyView.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"

#include "MyDoc.h"
#include "MyView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

BEGIN_MESSAGE_MAP(CMyView, CView)
   ON_COMMAND(ID_TEST_GETACTIVEVIEW, &CMyView::OnTestGetactiveview)
   ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMyView construction/destruction

CMyView::CMyView()
{
	// TODO: add construction code here

}

CMyView::~CMyView()
{
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMyView drawing

void CMyView::OnDraw(CDC* /*pDC*/)
{
	CMyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyDoc* CMyView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
	return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyView message handlers

void CMyView::OnTestGetactiveview()
{
// <Snippet2>
   CMDIFrameWnd *pFrame = (CMDIFrameWnd*)AfxGetApp()->GetMainWnd();

   // Get the active MDI child window.
   CMDIChildWnd *pChild = (CMDIChildWnd*)pFrame->GetActiveFrame();

   // or CMDIChildWnd *pChild = pFrame->MDIGetActive();

   // Get the active view attached to the active MDI child window.
   CMyView *pView = (CMyView*)pChild->GetActiveView();
// </Snippet2>
   UNREFERENCED_PARAMETER(pView);
}

// <Snippet105>
// This example adds the WS_CLIPCHILDREN style to the window.
// No Styles are removed from the window.
void CMyView::OnInitialUpdate()
{
   CView::OnInitialUpdate();
   ModifyStyle(0, WS_CLIPCHILDREN);
}
// </Snippet105>

// <Snippet115>
// The following code snippet shows a caret when the left 
// mouse button is pressed, and sets the caret's positon to 
// the cursor's position.
void CMyView::OnLButtonDown(UINT nFlags, CPoint point) 
{
   //create a solid caret, the width is 2, the length is 20.
   CreateSolidCaret(2, 20);
   
   SetCaretPos(point);
   ShowCaret();

   CView::OnLButtonDown(nFlags, point);
}
// </Snippet115>