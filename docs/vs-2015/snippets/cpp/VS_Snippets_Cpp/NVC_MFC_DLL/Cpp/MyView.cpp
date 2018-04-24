// MyView.cpp : implementation file
//

#include "stdafx.h"
#include "MyView.h"


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

CMyView::CMyView()
{

}

CMyView::~CMyView()
{
}

BEGIN_MESSAGE_MAP(CMyView, CView)
END_MESSAGE_MAP()


// CMyView drawing

void CMyView::OnDraw(CDC* pDC)
{
   pDC->DrawText(_T("My Dll View!"), -1, CRect(0, 0, 100, 100), DT_CENTER);
}


// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyView message handlers
