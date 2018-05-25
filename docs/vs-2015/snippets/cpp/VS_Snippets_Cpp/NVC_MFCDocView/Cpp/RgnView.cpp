// RgnView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "RgnView.h"


// CRgnView

IMPLEMENT_DYNCREATE(CRgnView, CView)

CRgnView::CRgnView()
   : m_RgnType(rtCombineRgn)
{
   m_aDrawFuncs[rtCombineRgn] = &CRgnView::DrawCombineRgn;
   m_aDrawFuncs[rtCreateEllipticRgn] = &CRgnView::DrawCreateEllipticRgn;
   m_aDrawFuncs[rtCreatePolygonRgn] = &CRgnView::DrawCreatePolygonRgn;
   m_aDrawFuncs[rtCreateRectRgnIndirect] = &CRgnView::DrawCreateRectRgnIndirect;
   m_aDrawFuncs[rtCreateRoundRectRgn] = &CRgnView::DrawCreateRoundRectRgn;
}

CRgnView::~CRgnView()
{
}

BEGIN_MESSAGE_MAP(CRgnView, CView)
   ON_COMMAND(ID_RGN_COMBINERGN, &CRgnView::OnRgnCombinergn)
   ON_COMMAND(ID_RGN_CREATEELLIPTICRGN, &CRgnView::OnRgnCreateellipticrgn)
   ON_COMMAND(ID_RGN_CREATEPOLYGONRGN, &CRgnView::OnRgnCreatepolygonrgn)
   ON_UPDATE_COMMAND_UI(ID_RGN_COMBINERGN, &CRgnView::OnUpdateRgnCombinergn)
   ON_UPDATE_COMMAND_UI(ID_RGN_CREATEELLIPTICRGN, &CRgnView::OnUpdateRgnCreateellipticrgn)
   ON_UPDATE_COMMAND_UI(ID_RGN_CREATEPOLYGONRGN, &CRgnView::OnUpdateRgnCreatepolygonrgn)
   ON_COMMAND(ID_CRGN_CREATERECTRGN, &CRgnView::OnCrgnCreaterectrgn)
   ON_COMMAND(ID_DRAW_CREATERECTRGNINDIRECT, &CRgnView::OnDrawCreaterectrgnindirect)
   ON_UPDATE_COMMAND_UI(ID_DRAW_CREATERECTRGNINDIRECT, &CRgnView::OnUpdateDrawCreaterectrgnindirect)
   ON_COMMAND(ID_DRAW_CREATEROUNDRECTRGN, &CRgnView::OnDrawCreateroundrectrgn)
   ON_UPDATE_COMMAND_UI(ID_DRAW_CREATEROUNDRECTRGN, &CRgnView::OnUpdateDrawCreateroundrectrgn)
   ON_COMMAND(ID_CRGN_EQUALRGN, &CRgnView::OnCrgnEqualrgn)
END_MESSAGE_MAP()


// CRgnView drawing

void CRgnView::DrawCombineRgn(CDC* pDC)
{
// <Snippet144>
   CRgn   rgnA, rgnB, rgnC;

   VERIFY(rgnA.CreateRectRgn( 50, 50, 150, 150 ));
   VERIFY(rgnB.CreateRectRgn( 100, 100, 200, 200 ));
   VERIFY(rgnC.CreateRectRgn( 0, 0, 50, 50 ));

   int nCombineResult = rgnC.CombineRgn( &rgnA, &rgnB, RGN_OR );
   ASSERT( nCombineResult != ERROR && nCombineResult != NULLREGION );

   CBrush br1, br2, br3;
   VERIFY(br1.CreateSolidBrush( RGB(255, 0, 0) ));  // rgnA Red
   VERIFY(pDC->FrameRgn( &rgnA, &br1, 2, 2 ));
   VERIFY(br2.CreateSolidBrush( RGB(0, 255, 0) ));  // rgnB Green
   VERIFY(pDC->FrameRgn( &rgnB, &br2, 2, 2 ));
   VERIFY(br3.CreateSolidBrush( RGB(0, 0, 255) ));  // rgnC Blue
   VERIFY(pDC->FrameRgn( &rgnC, &br3, 2, 2 ));
// </Snippet144>
}

void CRgnView::DrawCreateEllipticRgn(CDC* pDC)
{
// <Snippet145>
   CRgn   rgnA, rgnB, rgnC;

   VERIFY(rgnA.CreateEllipticRgn(200, 100, 350, 250));
   VERIFY(rgnB.CreateRectRgn( 0, 0, 50, 50 ));
   VERIFY(rgnB.CopyRgn( &rgnA ));
   int nOffsetResult = rgnB.OffsetRgn( -75, 75 );
   ASSERT( nOffsetResult != ERROR && nOffsetResult != NULLREGION );

   VERIFY(rgnC.CreateRectRgn( 0, 0, 1, 1));
   int nCombineResult = rgnC.CombineRgn( &rgnA, &rgnB, RGN_AND );
   ASSERT( nCombineResult != ERROR && nOffsetResult != NULLREGION );

   CBrush brA, brB, brC;
   VERIFY(brC.CreateHatchBrush( HS_FDIAGONAL, RGB(0, 0, 255) )); // Blue
   VERIFY(pDC->FillRgn( &rgnC, &brC ));
   VERIFY(brA.CreateSolidBrush( RGB(255, 0, 0) ));  // rgnA Red
   VERIFY(pDC->FrameRgn( &rgnA, &brA, 2, 2 ));
   VERIFY(brB.CreateSolidBrush( RGB(0, 255, 0) ));  // rgnB Green
   VERIFY(pDC->FrameRgn( &rgnB, &brB, 2, 2 ));   
// </Snippet145>
}

void CRgnView::DrawCreatePolygonRgn(CDC* pDC)
{
// <Snippet146>
   CRgn   rgnA, rgnB;

   CPoint ptVertex[5];

   ptVertex[0].x = 180;
   ptVertex[0].y = 80;
   ptVertex[1].x = 100;
   ptVertex[1].y = 160;
   ptVertex[2].x = 120;
   ptVertex[2].y = 260;
   ptVertex[3].x = 240;
   ptVertex[3].y = 260;
   ptVertex[4].x = 260;
   ptVertex[4].y = 160;

   VERIFY(rgnA.CreatePolygonRgn( ptVertex, 5, ALTERNATE));

   CRect rectRgnBox;
   int nRgnBoxResult = rgnA.GetRgnBox( &rectRgnBox );
   ASSERT( nRgnBoxResult != ERROR && nRgnBoxResult != NULLREGION );

   CBrush brA, brB;
   VERIFY(brA.CreateSolidBrush( RGB(255, 0, 0) ));  // rgnA Red
   VERIFY(pDC->FrameRgn( &rgnA, &brA, 2, 2 ));
   VERIFY(brB.CreateSolidBrush( RGB(0, 0, 255) ));  // Blue
   rectRgnBox.InflateRect(3,3);
   pDC->FrameRect( &rectRgnBox, &brB );
// </Snippet146>
}

void CRgnView::DrawCreateRectRgnIndirect(CDC* pDC)
{
// <Snippet148>
   CRgn   rgnA, rgnB, rgnC;

   CRect rectA(50, 50, 150, 150);
   CRect rectB(100, 50, 200, 150);

   VERIFY(rgnA.CreateRectRgnIndirect(&rectA));
   VERIFY(rgnB.CreateEllipticRgnIndirect(&rectB));
   VERIFY(rgnC.CreateRectRgn( 0, 0, 50, 50 ));

   int nCombineResult = rgnC.CombineRgn( &rgnA, &rgnB, RGN_AND );
   ASSERT( nCombineResult != ERROR && nCombineResult != NULLREGION );

   CBrush brA, brB, brC;
   VERIFY(brA.CreateSolidBrush( RGB(255, 0, 0) ));  
   VERIFY(pDC->FrameRgn( &rgnA, &brA, 2, 2 ));      // rgnA Red

   VERIFY(brB.CreateSolidBrush( RGB(0, 255, 0) ));  
   VERIFY(pDC->FrameRgn( &rgnB, &brB, 2, 2 ));      // rgnB Green
   VERIFY(brC.CreateSolidBrush( RGB(0, 0, 255) ));  // rgnC Blue
   VERIFY(pDC->FrameRgn( &rgnC, &brC, 2, 2 ));
// </Snippet148>
}

void CRgnView::DrawCreateRoundRectRgn(CDC* pDC)
{
// <Snippet149>
   CRgn   rgnA, rgnB, rgnC;

   VERIFY(rgnA.CreateRoundRectRgn( 50, 50, 150, 150, 30, 30 ));
   VERIFY(rgnB.CreateRoundRectRgn( 200, 75, 250, 125, 50, 50 ));
   VERIFY(rgnC.CreateRectRgn( 0, 0, 50, 50 ));

   int nCombineResult = rgnC.CombineRgn( &rgnA, &rgnB, RGN_OR );
   ASSERT( nCombineResult != ERROR && nCombineResult != NULLREGION );

   CBrush brA, brB, brC;
   VERIFY(brA.CreateSolidBrush( RGB(255, 0, 0) ));  
   VERIFY(pDC->FillRgn( &rgnA, &brA));      // rgnA Red Filled

   VERIFY(brB.CreateSolidBrush( RGB(0, 255, 0) ));  
   VERIFY(pDC->FillRgn( &rgnB, &brB));      // rgnB Green Filled
   VERIFY(brC.CreateSolidBrush( RGB(0, 0, 255) ));  // rgnC Blue
   VERIFY(pDC->FrameRgn( &rgnC, &brC, 2, 2 ));
// </Snippet149>
}

void CRgnView::OnDraw(CDC* pDC)
{
   ASSERT(0 <= m_RgnType && m_RgnType < rtCount);
   (this->*(m_aDrawFuncs[m_RgnType]))(pDC);
}


// CRgnView diagnostics

#ifdef _DEBUG
void CRgnView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CRgnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CRgnView message handlers

void CRgnView::OnRgnCombinergn()
{
   m_RgnType = rtCombineRgn;
   Invalidate();
}

void CRgnView::OnUpdateRgnCombinergn(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(rtCombineRgn == m_RgnType);
}

void CRgnView::OnRgnCreateellipticrgn()
{
   m_RgnType = rtCreateEllipticRgn;
   Invalidate();
}

void CRgnView::OnUpdateRgnCreateellipticrgn(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(rtCreateEllipticRgn == m_RgnType);
}

void CRgnView::OnRgnCreatepolygonrgn()
{
   m_RgnType = rtCreatePolygonRgn;
   Invalidate();
}

void CRgnView::OnUpdateRgnCreatepolygonrgn(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(rtCreatePolygonRgn == m_RgnType);
}

void CRgnView::OnCrgnCreaterectrgn()
{
// <Snippet147>
   CRgn   rgn;

   BOOL bSucceeded = rgn.CreateRectRgn( 50, 20, 150, 120 );
   ASSERT( bSucceeded == TRUE );
// </Snippet147>
}

void CRgnView::OnDrawCreaterectrgnindirect()
{
   m_RgnType = rtCreateRectRgnIndirect;
   Invalidate();
}

void CRgnView::OnUpdateDrawCreaterectrgnindirect(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(rtCreateRectRgnIndirect == m_RgnType);
}

void CRgnView::OnDrawCreateroundrectrgn()
{
   m_RgnType = rtCreateRoundRectRgn;
   Invalidate();
}

void CRgnView::OnUpdateDrawCreateroundrectrgn(CCmdUI *pCmdUI)
{
   pCmdUI->SetCheck(rtCreateRoundRectRgn == m_RgnType);
}

void CRgnView::OnCrgnEqualrgn()
{
// <Snippet150>
   CRgn   rgnA, rgnB;

   VERIFY(rgnA.CreateEllipticRgn(200, 100, 350, 250));
   VERIFY(rgnB.CreateRectRgn( 0, 0, 50, 50 ));
   VERIFY(rgnB.CopyRgn( &rgnA ));
   int nOffsetResult = rgnB.OffsetRgn( -75, 75 );
   ASSERT( nOffsetResult != ERROR && nOffsetResult != NULLREGION );
   ASSERT( FALSE == rgnB.EqualRgn( &rgnA ) );
// </Snippet150>
}
