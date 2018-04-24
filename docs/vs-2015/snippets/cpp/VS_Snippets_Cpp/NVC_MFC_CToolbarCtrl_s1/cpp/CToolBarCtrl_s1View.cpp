// CToolBarCtrl_s1View.cpp : implementation of the CCToolBarCtrl_s1View class
//

#include "stdafx.h"
#include "CToolBarCtrl_s1.h"

#include "CToolBarCtrl_s1Doc.h"
#include "CToolBarCtrl_s1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCToolBarCtrl_s1View

IMPLEMENT_DYNCREATE(CCToolBarCtrl_s1View, CView)

BEGIN_MESSAGE_MAP(CCToolBarCtrl_s1View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCToolBarCtrl_s1View construction/destruction

CCToolBarCtrl_s1View::CCToolBarCtrl_s1View()
{
	// TODO: add construction code here

}

CCToolBarCtrl_s1View::~CCToolBarCtrl_s1View()
{
}

BOOL CCToolBarCtrl_s1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CCToolBarCtrl_s1View drawing

void CCToolBarCtrl_s1View::OnDraw(CDC* /*pDC*/)
{
	CCToolBarCtrl_s1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CCToolBarCtrl_s1View printing

BOOL CCToolBarCtrl_s1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCToolBarCtrl_s1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCToolBarCtrl_s1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CCToolBarCtrl_s1View diagnostics

#ifdef _DEBUG
void CCToolBarCtrl_s1View::AssertValid() const
{
	CView::AssertValid();
}

void CCToolBarCtrl_s1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCToolBarCtrl_s1Doc* CCToolBarCtrl_s1View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCToolBarCtrl_s1Doc)));
	return (CCToolBarCtrl_s1Doc*)m_pDocument;
}
#endif //_DEBUG


// CCToolBarCtrl_s1View message handlers
