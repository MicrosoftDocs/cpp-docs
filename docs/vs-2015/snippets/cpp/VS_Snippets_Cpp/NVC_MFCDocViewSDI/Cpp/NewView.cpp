// NewView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocViewSDI.h"
#include "NewView.h"


// CNewView

IMPLEMENT_DYNCREATE(CNewView, CView)

CNewView::CNewView()
{

}

CNewView::~CNewView()
{
}

BEGIN_MESSAGE_MAP(CNewView, CView)
END_MESSAGE_MAP()


// CNewView drawing

// <Snippet7>
void CNewView::OnDraw(CDC* pDC)
{
   CPen penBlack;  // Construct it, then initialize
    if(penBlack.CreatePen(PS_SOLID, 2, RGB(0,0,0)))
    {
        // Select it into the device context
        // Save the old pen at the same time
        CPen* pOldPen = pDC->SelectObject(&penBlack);

        // Draw with the pen
        pDC->MoveTo(20,20);
        pDC->LineTo(40,40);

        // Restore the old pen to the device context
        pDC->SelectObject(pOldPen);
    }
    else
    {
        // Alert the user that resources are low
    }
}
// </Snippet7>


// CNewView diagnostics

#ifdef _DEBUG
void CNewView::AssertValid() const
{
   CView::AssertValid();
}

#ifndef _WIN32_WCE
void CNewView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CNewView message handlers
