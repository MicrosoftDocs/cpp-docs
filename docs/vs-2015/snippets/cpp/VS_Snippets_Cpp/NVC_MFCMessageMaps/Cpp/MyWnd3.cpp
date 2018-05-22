// MyWnd3.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCMessageMaps.h"
#include "MyWnd3.h"


// CMyWnd3

IMPLEMENT_DYNAMIC(CMyWnd3, CWnd)

CMyWnd3::CMyWnd3()
{

}

CMyWnd3::~CMyWnd3()
{
}


// <Snippet15>
BEGIN_MESSAGE_MAP(CMyWnd3, CWnd)
   ON_REGISTERED_MESSAGE(WM_FIND, OnFind)
END_MESSAGE_MAP()
// </Snippet15>



// CMyWnd3 message handlers

LRESULT CMyWnd3::OnFind(WPARAM wParam, LPARAM lParam)
{
   UNREFERENCED_PARAMETER(wParam);
   UNREFERENCED_PARAMETER(lParam);

   return 0;
}
