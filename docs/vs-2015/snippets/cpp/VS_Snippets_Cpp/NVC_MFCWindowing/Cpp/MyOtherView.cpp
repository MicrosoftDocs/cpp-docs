// MyOtherView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "MyOtherView.h"


// CMyOtherView

IMPLEMENT_DYNCREATE(CMyOtherView, CView)

CMyOtherView::CMyOtherView()
{

}

CMyOtherView::~CMyOtherView()
{
}

BEGIN_MESSAGE_MAP(CMyOtherView, CView)
END_MESSAGE_MAP()


// CMyOtherView drawing

void CMyOtherView::OnDraw(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);
}


// CMyOtherView diagnostics

#ifdef _DEBUG
void CMyOtherView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyOtherView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyOtherView message handlers
