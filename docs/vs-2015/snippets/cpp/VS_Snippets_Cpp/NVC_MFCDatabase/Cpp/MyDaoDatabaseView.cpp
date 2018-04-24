// MyDatabaseView.cpp : implementation of the CMyDaoDatabaseView class
//

#include "stdafx.h"
#include "NVC_MFCDatabase.h"

#include "MyDaoDatabaseDoc.h"
#include "MyDaoDatabaseView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDaoDatabaseView

IMPLEMENT_DYNCREATE(CMyDaoDatabaseView, CView)

BEGIN_MESSAGE_MAP(CMyDaoDatabaseView, CView)
END_MESSAGE_MAP()

// CMyDaoDatabaseView construction/destruction

CMyDaoDatabaseView::CMyDaoDatabaseView()
{
	// TODO: add construction code here

}

CMyDaoDatabaseView::~CMyDaoDatabaseView()
{
}

BOOL CMyDaoDatabaseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMyDaoDatabaseView drawing

void CMyDaoDatabaseView::OnDraw(CDC* /*pDC*/)
{
	CMyDaoDatabaseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMyDaoDatabaseView diagnostics

#ifdef _DEBUG
void CMyDaoDatabaseView::AssertValid() const
{
	CView::AssertValid();
}

void CMyDaoDatabaseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyDaoDatabaseDoc* CMyDaoDatabaseView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDaoDatabaseDoc)));
	return (CMyDaoDatabaseDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyDaoDatabaseView message handlers
