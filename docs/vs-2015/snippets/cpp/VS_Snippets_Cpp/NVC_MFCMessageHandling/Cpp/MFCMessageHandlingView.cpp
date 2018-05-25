// MFCMessageHandlingView.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "MFCMessageHandling.h"

#include "MFCMessageHandlingDoc.h"
#include "MFCMessageHandlingView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CFormView)

// <Snippet1>
// <Snippet2>
BEGIN_MESSAGE_MAP(CMyView, CFormView)
// </Snippet2>
   ON_WM_MOUSEACTIVATE()
   ON_COMMAND(ID_EDIT_CUT, &CMyView::OnEditCut)
   ON_UPDATE_COMMAND_UI(ID_EDIT_CUT, &CMyView::OnUpdateEditCut)
   ON_BN_CLICKED(IDC_MYBUTTON, &CMyView::OnBnClickedMybutton)
   ON_WM_CREATE()
END_MESSAGE_MAP()
// </Snippet1>

// CMyView construction/destruction

CMyView::CMyView()
   : CFormView(CMyView::IDD)
{
   // TODO: add construction code here

}

CMyView::~CMyView()
{
}

void CMyView::DoDataExchange(CDataExchange* pDX)
{
   CFormView::DoDataExchange(pDX);
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return CFormView::PreCreateWindow(cs);
}

void CMyView::OnInitialUpdate()
{
   CFormView::OnInitialUpdate();
   GetParentFrame()->RecalcLayout();
   ResizeParentToFit();

}


// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
   CFormView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
   CFormView::Dump(dc);
}

CMFCMessageHandlingDoc* CMyView::GetDocument() const // non-debug version is inline
{
   ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCMessageHandlingDoc)));
   return (CMFCMessageHandlingDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyView message handlers

int CMyView::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
   // TODO: Add your message handler code here and/or call default

   return CFormView::OnMouseActivate(pDesktopWnd, nHitTest, message);
}

void CMyView::OnEditCut()
{
   // TODO: Add your command handler code here
}

void CMyView::OnUpdateEditCut(CCmdUI *pCmdUI)
{
   UNREFERENCED_PARAMETER(pCmdUI);
}

// <Snippet3>
int CMyView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CFormView::OnCreate(lpCreateStruct) == -1)
      return -1;

   // TODO:  Add your specialized creation code here

   return 0;
}
// </Snippet3>


void CMyView::OnBnClickedMybutton()
{
   // TODO: Add your control notification handler code here
}
