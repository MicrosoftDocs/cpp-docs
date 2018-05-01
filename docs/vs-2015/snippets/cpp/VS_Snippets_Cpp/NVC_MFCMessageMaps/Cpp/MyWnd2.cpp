// MyWnd2.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCMessageMaps.h"
#include "MyWnd2.h"


// CMyWnd2

IMPLEMENT_DYNAMIC(CMyWnd2, CWnd)

CMyWnd2::CMyWnd2()
{

}

CMyWnd2::~CMyWnd2()
{
}


// <Snippet5>
BEGIN_MESSAGE_MAP(CMyWnd2, CWnd)
   ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)
END_MESSAGE_MAP()
// </Snippet5>



// CMyWnd2 message handlers

// <Snippet14>
LRESULT CMyWnd2::OnMyMessage(WPARAM wParam, LPARAM lParam)
{
   UNREFERENCED_PARAMETER(wParam);
   UNREFERENCED_PARAMETER(lParam);
   
   // Handle message here.

   return 0;
}
// </Snippet14>
