// MyView.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "NVC_MFCDocViewSDI.h"

#include "MyDoc.h"
#include "MyView.h"

#include "atlimage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

BEGIN_MESSAGE_MAP(CMyView, CView)
   // Standard printing commands
   ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
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

void CMyView::OnDraw(CDC* pDC)
{
   CMyDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);
   if (!pDoc)
      return;

   CString s(_T("CMyView"));
   RECT rect;
   GetClientRect(&rect);
   pDC->SetTextAlign(TA_BASELINE | TA_CENTER);
   pDC->TextOut(rect.right / 2, rect.bottom / 2, s, s.GetLength());
}


// CMyView printing

BOOL CMyView::OnPreparePrinting(CPrintInfo* pInfo)
{
   // default preparation
   return DoPreparePrinting(pInfo);
}

void CMyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add extra initialization before printing
}

void CMyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add cleanup after printing
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

void CMyView::OnInitialUpdate()
{
   CView::OnInitialUpdate();

// <Snippet5>
   CPen myPen;
   myPen.CreatePen(PS_COSMETIC, 1, RGB(255,255,0));
   HPEN hMyPen = (HPEN)myPen;
// </Snippet5>
   UNREFERENCED_PARAMETER(hMyPen);

// <Snippet6>
   // One-stage
    CPen myPen1(PS_DOT, 5, RGB(0,0,0));

   // Two-stage: first construct the pen
    CPen myPen2;
    // Then initialize it
    if(myPen2.CreatePen(PS_DOT, 5, RGB(0,0,0)))   
   {
        // Use the pen
   }
// </Snippet6>

// <Snippet8>
   if (CImage::IsTransparencySupported())
   {
      // Safe to call CImage::AlphaBlend and CImage::TransparentBlt
   }
   else
   {
      // Transparency not supported.  Fall back to something else.
   }
// </Snippet8>
}
