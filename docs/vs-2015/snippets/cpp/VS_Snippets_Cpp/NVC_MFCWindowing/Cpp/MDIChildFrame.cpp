// MDIChildFrame.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "MDIChildFrame.h"


// CMdiChildFrame

IMPLEMENT_DYNCREATE(CMdiChildFrame, CMDIChildWnd)

CMdiChildFrame::CMdiChildFrame()
{

}

CMdiChildFrame::~CMdiChildFrame()
{
}


BEGIN_MESSAGE_MAP(CMdiChildFrame, CMDIChildWnd)
   ON_COMMAND(ID_CWND_ARRANGEICONICWINDOWS, &CMdiChildFrame::OnActionArrangeIconicWindows)
END_MESSAGE_MAP()


// CMdiChildFrame message handlers

// <Snippet66>
// arrange minimized MDI child windows
// called from menu item; CMdiChildFrame is derived from CMDIChildWnd
void CMdiChildFrame::OnActionArrangeIconicWindows()
{
   UINT height = GetParent()->ArrangeIconicWindows();   
   TRACE(_T("height = %d\n"), height);
}
// </Snippet66>

// <Snippet112>
// alter the styles of the mdi frame window
BOOL CMdiChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
   // Create a window without min/max buttons or sizable border
   cs.style |= WS_OVERLAPPED | WS_SYSMENU | WS_BORDER;

   // Size the window to 1/3 screen size and center it
   cs.cy = ::GetSystemMetrics(SM_CYSCREEN) / 3;
   cs.cx = ::GetSystemMetrics(SM_CXSCREEN) / 3;
   cs.y = ((cs.cy * 3) - cs.cy) / 2;
   cs.x = ((cs.cx * 3) - cs.cx) / 2;

   return CMDIChildWnd::PreCreateWindow(cs);
}
// </Snippet112>