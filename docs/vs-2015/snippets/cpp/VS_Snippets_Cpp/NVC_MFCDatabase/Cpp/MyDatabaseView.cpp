// MyDatabaseView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDatabase.h"
#include "MyDatabaseView.h"


// CMyDatabaseView

IMPLEMENT_DYNCREATE(CMyDatabaseView, CView)

CMyDatabaseView::CMyDatabaseView()
{

}

CMyDatabaseView::~CMyDatabaseView()
{
}

BEGIN_MESSAGE_MAP(CMyDatabaseView, CView)
END_MESSAGE_MAP()


// CMyDatabaseView drawing

void CMyDatabaseView::OnDraw(CDC* /*pDC*/)
{
}


// CMyDatabaseView diagnostics

#ifdef _DEBUG
void CMyDatabaseView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyDatabaseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyDatabaseView message handlers
