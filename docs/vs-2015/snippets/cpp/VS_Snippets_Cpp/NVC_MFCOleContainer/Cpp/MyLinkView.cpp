// MyLinkView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCOleContainer.h"
#include "MyLinkView.h"


// CMyLinkView

IMPLEMENT_DYNCREATE(CMyLinkView, CView)

CMyLinkView::CMyLinkView()
{

}

CMyLinkView::~CMyLinkView()
{
}

BEGIN_MESSAGE_MAP(CMyLinkView, CView)
END_MESSAGE_MAP()


// CMyLinkView drawing

void CMyLinkView::OnDraw(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);
}


// CMyLinkView diagnostics

#ifdef _DEBUG
void CMyLinkView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyLinkView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyLinkView message handlers
