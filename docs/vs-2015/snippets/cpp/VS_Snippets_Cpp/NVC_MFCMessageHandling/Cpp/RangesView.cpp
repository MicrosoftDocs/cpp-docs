// RangesView.cpp : implementation file
//

#include "stdafx.h"
#include "MFCMessageHandling.h"
#include "RangesView.h"

#define ID_MYCMD_ONE 10001
#define ID_MYCMD_TEN 10010

#define ID_VIEW_ZOOM25  10025
#define ID_VIEW_ZOOM300 10300

// CRangesView

IMPLEMENT_DYNCREATE(CRangesView, CFormView)

CRangesView::CRangesView()
   : CFormView(CRangesView::IDD)
{

}

CRangesView::~CRangesView()
{
}

void CRangesView::DoDataExchange(CDataExchange* pDX)
{
   CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CRangesView, CFormView)
// <Snippet6>
   ON_COMMAND_RANGE(ID_MYCMD_ONE, ID_MYCMD_TEN, &OnDoSomething)
// </Snippet6>
// <Snippet8>
   ON_COMMAND_RANGE(ID_VIEW_ZOOM25, ID_VIEW_ZOOM300, &OnZoom)
// </Snippet8>
// <Snippet10>
   ON_CONTROL_RANGE(BN_CLICKED, IDC_BUTTON1, IDC_BUTTON10, OnButtonClicked)	
// </Snippet10>
END_MESSAGE_MAP()


// CRangesView diagnostics

#ifdef _DEBUG
void CRangesView::AssertValid() const
{
   CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CRangesView::Dump(CDumpContext& dc) const
{
   CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CRangesView message handlers

void CRangesView::OnDoSomething(UINT nID)
{
   UNREFERENCED_PARAMETER(nID);
}

void CRangesView::OnZoom(UINT nID)
{
   UNREFERENCED_PARAMETER(nID);
}

// <Snippet11>
void CRangesView::OnButtonClicked( UINT nID )
{
    int nButton = nID - IDC_BUTTON1;
    ASSERT( nButton >= 0 && nButton < 10 );
    // ...
}
// </Snippet11>