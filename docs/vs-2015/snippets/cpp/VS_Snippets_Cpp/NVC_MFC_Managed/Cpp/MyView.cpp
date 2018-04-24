// MyView.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "MFCManaged.h"

#include "MyDoc.h"
#include "MyView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyView

// <Snippet2>
IMPLEMENT_DYNCREATE(CMyView, CWinFormsView)

BEGIN_MESSAGE_MAP(CMyView, CWinFormsView)
END_MESSAGE_MAP()

CMyView::CMyView()
   : CWinFormsView(ControlLibrary1::UserControl1::typeid)
{
}
// </Snippet2>

CMyView::~CMyView()
{
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CWinFormsView::PreCreateWindow(cs);
}

// CMyView drawing

void CMyView::OnDraw(CDC* /*pDC*/)
{
	CMyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

// <Snippet3>
   HWND hwnd = reinterpret_cast<HWND>(static_cast<INT_PTR>(GetControl()->Handle));
// </Snippet3>
   hwnd;
}


// CMyView printing

BOOL CMyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CWinFormsView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
	CWinFormsView::Dump(dc);
}

CMyDoc* CMyView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
	return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyView message handlers

// <Snippet6>
// CMyView derives from CWinFormsView.
void CMyView::OnInitialUpdate()
{
   CWinFormsView::OnInitialUpdate();

   GetControl()->Click += MAKE_DELEGATE(System::EventHandler, OnClick);
}
// </Snippet6>