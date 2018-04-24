
// NVC_MFC_CTaskDialogView.cpp : implementation of the CNVC_MFC_CTaskDialogView class
//

#include "stdafx.h"
#include "NVC_MFC_CTaskDialog.h"

#include "NVC_MFC_CTaskDialogDoc.h"
#include "NVC_MFC_CTaskDialogView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNVC_MFC_CTaskDialogView

IMPLEMENT_DYNCREATE(CNVC_MFC_CTaskDialogView, CView)

BEGIN_MESSAGE_MAP(CNVC_MFC_CTaskDialogView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CNVC_MFC_CTaskDialogView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CNVC_MFC_CTaskDialogView construction/destruction

CNVC_MFC_CTaskDialogView::CNVC_MFC_CTaskDialogView()
{
	// TODO: add construction code here

}

CNVC_MFC_CTaskDialogView::~CNVC_MFC_CTaskDialogView()
{
}

BOOL CNVC_MFC_CTaskDialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CNVC_MFC_CTaskDialogView drawing

void CNVC_MFC_CTaskDialogView::OnDraw(CDC* /*pDC*/)
{
	CNVC_MFC_CTaskDialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CNVC_MFC_CTaskDialogView printing


void CNVC_MFC_CTaskDialogView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CNVC_MFC_CTaskDialogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CNVC_MFC_CTaskDialogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CNVC_MFC_CTaskDialogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CNVC_MFC_CTaskDialogView::OnRButtonUp(UINT nFlags, CPoint point)
{
    if (nFlags)
    {
    }
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CNVC_MFC_CTaskDialogView::OnContextMenu(CWnd* pWnd, CPoint point)
{
    if (pWnd == NULL)
    {
    }
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CNVC_MFC_CTaskDialogView diagnostics

#ifdef _DEBUG
void CNVC_MFC_CTaskDialogView::AssertValid() const
{
	CView::AssertValid();
}

void CNVC_MFC_CTaskDialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CNVC_MFC_CTaskDialogDoc* CNVC_MFC_CTaskDialogView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CNVC_MFC_CTaskDialogDoc)));
	return (CNVC_MFC_CTaskDialogDoc*)m_pDocument;
}
#endif //_DEBUG


// CNVC_MFC_CTaskDialogView message handlers
