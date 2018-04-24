// MyFormView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"

// <Snippet91>
// MyFormView.cpp

#include "MyFormView.h"


// CMyFormView

IMPLEMENT_DYNCREATE(CMyFormView, CFormView)

CMyFormView::CMyFormView()
	: CFormView(CMyFormView::IDD)
{

}
// </Snippet91>

CMyFormView::~CMyFormView()
{
}

void CMyFormView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyFormView, CFormView)
   ON_WM_CREATE()
END_MESSAGE_MAP()


// CMyFormView diagnostics

#ifdef _DEBUG
void CMyFormView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CMyFormView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMyFormView message handlers

int CMyFormView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CFormView::OnCreate(lpCreateStruct) == -1)
      return -1;

   HWND hwnd = this->m_hWnd;
// <Snippet198>
   // VERIFY can be used for things that should never fail, though
   // you may want to make sure you can provide better error recovery
   // if the error can actually cause a crash in a production system.

   // It _is_ possible that GetDC() may fail, but the out-of-memory
   // condition that causes it isn't likely. For a test application,
   // this use of VERIFY() is fine. For any production code, this
   // usage is dubious.

   // get the display device context
   HDC hdc;
   VERIFY((hdc = ::GetDC(hwnd)) != NULL);

   // give the display context back
   ::ReleaseDC(hwnd, hdc);
// </Snippet198>

   return 0;
}
