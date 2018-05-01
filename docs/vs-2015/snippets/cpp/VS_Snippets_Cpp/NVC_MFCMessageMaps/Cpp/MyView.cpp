// MyView.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "NVC_MFCMessageMaps.h"

#include "MyDoc.h"
#include "MyView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

BEGIN_MESSAGE_MAP(CMyView, CView)
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
