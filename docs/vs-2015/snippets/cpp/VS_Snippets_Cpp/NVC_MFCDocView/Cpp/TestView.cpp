// TestView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "TestView.h"


// CTestView

IMPLEMENT_DYNCREATE(CTestView, CView)

CTestView::CTestView()
{

}

CTestView::~CTestView()
{
}

BEGIN_MESSAGE_MAP(CTestView, CView)
END_MESSAGE_MAP()


// CTestView drawing

void CTestView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}


// CTestView diagnostics

#ifdef _DEBUG
void CTestView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTestView message handlers
