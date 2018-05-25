// UserView.cpp : implementation of the CUserView class
//

#include "stdafx.h"
#include "NVC_MFC_DLLUser.h"

#include "UserDoc.h"
#include "UserView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUserView

IMPLEMENT_DYNCREATE(CUserView, CView)

BEGIN_MESSAGE_MAP(CUserView, CView)
END_MESSAGE_MAP()

// CUserView construction/destruction

CUserView::CUserView()
{
   // TODO: add construction code here

}

CUserView::~CUserView()
{
}

BOOL CUserView::PreCreateWindow(CREATESTRUCT& cs)
{
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return CView::PreCreateWindow(cs);
}

// CUserView drawing

void CUserView::OnDraw(CDC* /*pDC*/)
{
   CUserDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);
   if (!pDoc)
      return;

   // TODO: add draw code for native data here
}


// CUserView diagnostics

#ifdef _DEBUG
void CUserView::AssertValid() const
{
   CView::AssertValid();
}

void CUserView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}

CUserDoc* CUserView::GetDocument() const // non-debug version is inline
{
   ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUserDoc)));
   return (CUserDoc*)m_pDocument;
}
#endif //_DEBUG


// CUserView message handlers
