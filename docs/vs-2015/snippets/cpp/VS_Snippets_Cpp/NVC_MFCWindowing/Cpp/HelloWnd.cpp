// HelloWnd.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "HelloWnd.h"


// CHelloWnd

IMPLEMENT_DYNCREATE(CHelloWnd, CMDIChildWnd)

CHelloWnd::CHelloWnd()
{

}

CHelloWnd::~CHelloWnd()
{
}


BEGIN_MESSAGE_MAP(CHelloWnd, CMDIChildWnd)
END_MESSAGE_MAP()


// CHelloWnd message handlers

// <Snippet9>
BOOL CHelloWnd::Create(
   LPCTSTR szTitle, 
   LONG style              /* = 0 */,
   const RECT& rect        /* = rectDefault */,
   CMDIFrameWnd* parent    /* = NULL */)
{
   // Setup the shared menu
   SetHandles(::LoadMenu(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_HELLO)),
      NULL);

   // Register a custom WndClass and create a window.
   // This must be done because CHelloWnd has a custom icon.
   LPCTSTR lpszHelloClass =
      AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW,
      LoadCursor(NULL, IDC_ARROW),
      (HBRUSH) (COLOR_WINDOW+1),
      LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_HELLO)));

   return CMDIChildWnd::Create(lpszHelloClass, szTitle, style, rect, parent);
}
// </Snippet9>