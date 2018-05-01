// MyWnd.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCMessageMaps.h"
#include "MyWnd.h"


// CMyWnd1

IMPLEMENT_DYNAMIC(CMyWnd1, CWnd)

CMyWnd1::CMyWnd1()
{

}

CMyWnd1::~CMyWnd1()
{
}

// <Snippet2>
BEGIN_MESSAGE_MAP(CMyWnd1, CWnd)
   //{{AFX_MSG_MAP(CMyWnd1)
   ON_WM_PAINT()
   //}}AFX_MSG_MAP
END_MESSAGE_MAP()
// </Snippet2>



// CMyWnd1 message handlers



void CMyWnd1::OnPaint()
{
   CPaintDC dc(this); // device context for painting
   // TODO: Add your message handler code here
   // Do not call CWnd::OnPaint() for painting messages
}
