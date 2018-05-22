// MyScrollView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyScrollView.h"
#include "MyScrollDoc.h"


// CMyScrollView

IMPLEMENT_DYNCREATE(CMyScrollView, CScrollView)

CMyScrollView::CMyScrollView()
{

}

CMyScrollView::~CMyScrollView()
{
}


BEGIN_MESSAGE_MAP(CMyScrollView, CScrollView)
   ON_WM_ERASEBKGND()
   ON_COMMAND(ID_SCROLL_RECALCLAYOUT, &CMyScrollView::OnScrollRecalclayout)
   ON_COMMAND(ID_SCROLL_SETSCROLLSIZES, &CMyScrollView::OnScrollSetscrollsizes)
END_MESSAGE_MAP()


// CMyScrollView drawing

// <Snippet169>
void CMyScrollView::OnInitialUpdate()
{
   CScrollView::OnInitialUpdate();

   // The GetMyDocSize() member function is implemented in 
   // your document class. The return type is CSize.
   CMyScrollDoc* pMyDoc = (CMyScrollDoc*)GetDocument();
   SetScrollSizes(MM_TEXT, pMyDoc->GetMyDocSize());
}
// </Snippet169>

void CMyScrollView::OnDraw(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);
}


// CMyScrollView diagnostics

#ifdef _DEBUG
void CMyScrollView::AssertValid() const
{
	CScrollView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyScrollView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyScrollView message handlers

// <Snippet164>
BOOL CMyScrollView::OnEraseBkgnd(CDC* pDC)
{
    CBrush br(GetSysColor(COLOR_WINDOW)); 
    FillOutsideRect(pDC, &br);
    return TRUE;                   // Erased
}
// </Snippet164>

void CMyScrollView::OnScrollRecalclayout()
{
// <Snippet165>
   GetParentFrame()->RecalcLayout();
// </Snippet165>
}

void CMyScrollView::OnScrollSetscrollsizes()
{
   int nMapMode = MM_TEXT;
// <Snippet166>
   CMyScrollDoc* pMyDoc = (CMyScrollDoc*)GetDocument();
   SetScrollSizes(nMapMode, pMyDoc->GetMyDocSize());
// </Snippet166>

// <Snippet167>
   SetScrollSizes(nMapMode, CSize(100, 100));
// </Snippet167>
}

// <Snippet168>
void CMyScrollView::OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, 
   CObject* /*pHint*/)
{
   // Implement a GetMyDocSize() member function in 
   // your document class; it returns a CSize.
   CMyScrollDoc* pMyDoc = (CMyScrollDoc*)GetDocument();
   SetScrollSizes(MM_LOENGLISH, pMyDoc->GetMyDocSize());
   ResizeParentToFit();   // Default bShrinkOnly argument
}
// </Snippet168>