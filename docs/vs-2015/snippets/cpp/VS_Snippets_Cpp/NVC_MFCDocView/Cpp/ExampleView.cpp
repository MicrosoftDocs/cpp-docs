// ExampleView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "ExampleView.h"


// CExampleView

IMPLEMENT_DYNCREATE(CExampleView, CView)

CExampleView::CExampleView()
{

}

CExampleView::~CExampleView()
{
}

BEGIN_MESSAGE_MAP(CExampleView, CView)
   ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
END_MESSAGE_MAP()


// CExampleView drawing

void CExampleView::OnDraw(CDC* pDC)
{
   UNREFERENCED_PARAMETER(pDC);
	CDocument* pDoc = GetDocument();
   UNREFERENCED_PARAMETER(pDoc);
}


// CExampleView diagnostics

#ifdef _DEBUG
void CExampleView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CExampleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CExampleView message handlers

// <Snippet185>
BOOL CExampleView::OnPreparePrinting(CPrintInfo* pInfo)
{
   //The document has 2 pages.
   pInfo->SetMaxPage(2);
   return CView::DoPreparePrinting(pInfo);
}
// </Snippet185>