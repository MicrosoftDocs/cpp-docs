// MyView2.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocViewSDI.h"
#include "MyView2.h"


// CMyView2

IMPLEMENT_DYNCREATE(CMyView2, CView)

CMyView2::CMyView2()
{

}

CMyView2::~CMyView2()
{
}

BEGIN_MESSAGE_MAP(CMyView2, CView)
END_MESSAGE_MAP()


// CMyView2 drawing

void CMyView2::OnDraw(CDC* pDC)
{
   CString s(_T("CMyView2"));
   RECT rect;
   GetClientRect(&rect);
   pDC->SetTextAlign(TA_BASELINE | TA_CENTER);
   pDC->TextOut(rect.right / 2, rect.bottom / 2, s, s.GetLength());
}


// CMyView2 diagnostics

#ifdef _DEBUG
void CMyView2::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyView2::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyView2 message handlers
