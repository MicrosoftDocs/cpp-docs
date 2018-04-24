// MyView.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "NVC_MFC_AxCont.h"

#include "MyDoc.h"
#include "MyView.h"
#include "Containerdlg.h"
#include "CircDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

BEGIN_MESSAGE_MAP(CMyView, CView)
   ON_WM_CREATE()
   ON_COMMAND(ID_VIEW_CONTAINERDLG, &CMyView::OnViewContainerdlg)
   ON_COMMAND(ID_VIEW_CIRCDLG, &CMyView::OnViewCircdlg)
END_MESSAGE_MAP()

// CMyView construction/destruction

CMyView::CMyView()
{
   // TODO: add construction code here

}

CMyView::~CMyView()
{
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return CView::PreCreateWindow(cs);
}

// CMyView drawing

void CMyView::OnDraw(CDC* /*pDC*/)
{
   CMyDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);
   if (!pDoc)
      return;

   // TODO: add draw code for native data here
}


// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
   CView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}

CMyDoc* CMyView::GetDocument() const // non-debug version is inline
{
   ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
   return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyView message handlers

// <Snippet15>
int CMyView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CView::OnCreate(lpCreateStruct) == -1)
      return -1;

   m_myCtl.Create(NULL, WS_VISIBLE, CRect(50,50,100,100), this, 0);
   m_myCtl.SetCaption(_T("Control created"));

   return 0;
}
// </Snippet15>

void CMyView::OnViewContainerdlg()
{
   CContainerDlg cd;
   cd.DoModal();
}

void CMyView::OnViewCircdlg()
{
   CCircDlg cd;
   cd.DoModal();
}

