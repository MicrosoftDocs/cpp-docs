// CMFCAutomationView.cpp : implementation of the CCMFCAutomationView class
//

#include "stdafx.h"
#include "CMFCAutomation.h"

#include "CMFCAutomationDoc.h"
#include "CMFCAutomationView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCMFCAutomationView

IMPLEMENT_DYNCREATE(CCMFCAutomationView, CView)

BEGIN_MESSAGE_MAP(CCMFCAutomationView, CView)
END_MESSAGE_MAP()

// CCMFCAutomationView construction/destruction

CCMFCAutomationView::CCMFCAutomationView()
{
	// TODO: add construction code here

}

CCMFCAutomationView::~CCMFCAutomationView()
{
}

BOOL CCMFCAutomationView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CCMFCAutomationView drawing

void CCMFCAutomationView::OnDraw(CDC* /*pDC*/)
{
	CCMFCAutomationDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CCMFCAutomationView diagnostics

#ifdef _DEBUG
void CCMFCAutomationView::AssertValid() const
{
	CView::AssertValid();
}

void CCMFCAutomationView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCMFCAutomationDoc* CCMFCAutomationView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCMFCAutomationDoc)));
	return (CCMFCAutomationDoc*)m_pDocument;
}
#endif //_DEBUG


// CCMFCAutomationView message handlers
