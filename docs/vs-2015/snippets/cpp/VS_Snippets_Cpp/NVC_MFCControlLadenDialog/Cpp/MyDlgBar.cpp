// MyDlgBar.cpp : implementation file
//

#include "stdafx.h"
#include "MFCControlLadenDialog.h"
#include "MyDlgBar.h"


// CMyDlgBar

IMPLEMENT_DYNAMIC(CMyDlgBar, CDialogBar)

CMyDlgBar::CMyDlgBar()
{

}

CMyDlgBar::~CMyDlgBar()
{
}


BEGIN_MESSAGE_MAP(CMyDlgBar, CDialogBar)
   ON_WM_ERASEBKGND()
   ON_WM_MOVE()
END_MESSAGE_MAP()



// CMyDlgBar message handlers


// <Snippet29>
BOOL CMyDlgBar::OnEraseBkgnd(CDC* pDC)
{
    CWnd* pParent = GetParent();
    ASSERT_VALID(pParent);
    CPoint pt(0, 0);
    MapWindowPoints(pParent, &pt, 1);
    pt = pDC->OffsetWindowOrg(pt.x, pt.y);
    LRESULT lResult = pParent->SendMessage(WM_ERASEBKGND,
        (WPARAM)pDC->m_hDC, 0L);
    pDC->SetWindowOrg(pt.x, pt.y);
    return (BOOL)lResult;
}
// </Snippet29>

// <Snippet30>
void CMyDlgBar::OnMove(int x, int y)
{
   UNREFERENCED_PARAMETER(x);
   UNREFERENCED_PARAMETER(y);

   Invalidate();
}
// </Snippet30>