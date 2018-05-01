// MdiView.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "MdiView.h"
#include "MdiDoc.h"


// CMdiView

IMPLEMENT_DYNCREATE(CMdiView, CView)

CMdiView::CMdiView()
{

}

CMdiView::~CMdiView()
{
}

BEGIN_MESSAGE_MAP(CMdiView, CView)
   ON_COMMAND(ID_MDI_REPLACEMENU, &CMdiView::OnReplaceMenu)
   ON_WM_RBUTTONDOWN()
   ON_WM_LBUTTONDOWN()
   ON_WM_MBUTTONDOWN()
   ON_WM_PAINT()
   ON_WM_MOUSEMOVE()
   ON_COMMAND(ID_CWND_CREATEFRAME, &CMdiView::OnMyCreateFrame)
// <Snippet91>
   // From message map for CMdiView, a CView-derived class
   ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTW, 0, 0xFFFF, &CMdiView::OnToolTipNotify)
   ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTA, 0, 0xFFFF, &CMdiView::OnToolTipNotify)
// </Snippet91>
   ON_WM_HSCROLL()
   ON_WM_SIZE()
   ON_COMMAND(ID_MDI_COPY, &CMdiView::OnEditCopy)
   ON_COMMAND(ID_MDI_CHANGERECT, &CMdiView::OnChangeRect)
END_MESSAGE_MAP()


// CMdiView drawing

// CMdiView diagnostics

#ifdef _DEBUG
void CMdiView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void CMdiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// CMdiView message handlers

// <Snippet19>
// CMdiView::OnReplaceMenu() is a menu command handler for CMdiView
// class, which in turn is a CView-derived class. It loads a new
// menu resource and replaces the main application window's menu
// bar with this new menu.
void CMdiView::OnReplaceMenu() 
{
   // Load a new menu resource named IDR_SHORT_MENU. m_hDefaultMenu is 
   // a member variable of CMdiDoc class (a CDocument-derived class). 
   // Its type is HMENU.
   CMdiDoc* pdoc = (CMdiDoc*)GetDocument();
   pdoc->m_hDefaultMenu = 
      ::LoadMenu(AfxGetResourceHandle(), MAKEINTRESOURCE(IDR_SHORT_MENU));
   if (pdoc->m_hDefaultMenu == NULL)
      return;

   // Get the parent window of this view window. The parent window is
   // a CMDIChildWnd-derived class. We can then obtain the MDI parent 
   // frame window using the CMDIChildWnd*. Then, replace the current 
   // menu bar with the new loaded menu resource.
   CMDIFrameWnd* frame = ((CMDIChildWnd*)GetParent())->GetMDIFrame();
   frame->MDISetMenu(CMenu::FromHandle(pdoc->m_hDefaultMenu), NULL);
   frame->DrawMenuBar();
}
// </Snippet19>

// <Snippet34>
// The code fragment shows how to get the File menu from the
// application window and displays it as a floating popup menu
// when the right mouse button is clicked in view.
// CMdiView is a CView-derived class.
void CMdiView::OnRButtonDown(UINT nFlags, CPoint point)
{
   CView::OnRButtonDown(nFlags, point);

   CMenu* menu_bar = AfxGetMainWnd()->GetMenu();
   CMenu* file_menu = menu_bar->GetSubMenu(0);    
   ASSERT(file_menu);

   ClientToScreen(&point);
   file_menu->TrackPopupMenu(TPM_LEFTALIGN |TPM_RIGHTBUTTON, point.x, 
      point.y, this);
}
// </Snippet34>

// <Snippet37>
// The following example shows how to display the
// hourglass cursor during some lengthy processing
void CMdiView::OnLButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   AfxGetApp()->DoWaitCursor(1); // 1->>display the hourglass cursor

   // do some lengthy processing
   Sleep(1000);

   AfxGetApp()->DoWaitCursor(-1); // -1->>remove the hourglass cursor
}

// The next example shows DoWaitCursor with parameter 0. It restores
// the hourglass cursor.
void CMdiView::OnMButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   AfxGetApp()->DoWaitCursor(1); // display the hourglass cursor

   // do some lengthy processing

   // The message box will normally change the cursor to
   // the standard arrow cursor, and leave the cursor in
   // as the standard arrow cursor when the message box is
   // closed.
   AfxMessageBox (_T("DoWaitCursor Sample"));

   // Call DoWaitCursor with parameter 0 to restore
   // the cursor back to the hourglass cursor.
   AfxGetApp()->DoWaitCursor(0);

   // do some more lengthy processing
   Sleep(1000);

   AfxGetApp()->DoWaitCursor(-1); // remove the hourglass cursor
}
// </Snippet37>

// <Snippet70>
// Use BeginPaint and EndPaint when responding to WM_PAINT message
// An alternative method is to use CPaintDC in place of 
// BeginPaint and EndPaint
void CMdiView::OnPaint() 
{
   PAINTSTRUCT ps;
   CDC* pDC = BeginPaint(&ps);

   pDC->Rectangle(CRect(0, 0, 100, 100));

   EndPaint(&ps);

   // Do not call CView::OnPaint() for painting messages
}
// </Snippet70>

// <Snippet71>
// Moves MDI child windows to the top when a mouse passes
// over it. CMdiView is derived from CView.
void CMdiView::OnMouseMove(UINT nFlags, CPoint point) 
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   GetParentFrame()->BringWindowToTop();
}
// </Snippet71>

// <Snippet72>
// Uses CalcWindowRect to determine size for new CFrameWnd
// based on the size of the current view. The end result is a
// top level frame window of the same size as CMdiView's frame.
void CMdiView::OnMyCreateFrame() 
{
   CFrameWnd* pFrameWnd = new CFrameWnd;
   CRect myRect;
   GetClientRect(myRect);
   pFrameWnd->Create(NULL, _T("My Frame"));
   pFrameWnd->CalcWindowRect(&myRect, CWnd::adjustBorder);
   pFrameWnd->MoveWindow(0, 0, myRect.Width(), myRect.Height());
   pFrameWnd->ShowWindow(SW_SHOW);
}
// </Snippet72>

// <Snippet92>
void CMdiView::OnInitialUpdate()
{
   CView::OnInitialUpdate();

   m_Edit.Create(ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_BORDER,
      CRect(10, 10, 100, 100), this, IDC_TTEDIT);
   EnableToolTips(TRUE);   // enable tool tips for view
}

//Notification handler
BOOL CMdiView::OnToolTipNotify(UINT id, NMHDR* pNMHDR, LRESULT* pResult)
{
   UNREFERENCED_PARAMETER(id);
   UNREFERENCED_PARAMETER(pResult);

   // need to handle both ANSI and UNICODE versions of the message
   TOOLTIPTEXTA* pTTTA = (TOOLTIPTEXTA*)pNMHDR;
   TOOLTIPTEXTW* pTTTW = (TOOLTIPTEXTW*)pNMHDR;
   CStringA strTipText;
   UINT_PTR nID = pNMHDR->idFrom;
   if (pNMHDR->code == TTN_NEEDTEXTA && (pTTTA->uFlags & TTF_IDISHWND) ||
      pNMHDR->code == TTN_NEEDTEXTW && (pTTTW->uFlags & TTF_IDISHWND))
   {
      // idFrom is actually the HWND of the tool
      nID = ::GetDlgCtrlID((HWND)nID);
   }

   if (nID != 0) // will be zero on a separator
      strTipText.Format("Control ID = %d", nID);

   if (pNMHDR->code == TTN_NEEDTEXTA)
   {
      strncpy_s(pTTTA->szText, sizeof(pTTTA->szText), strTipText, 
         strTipText.GetLength() + 1);
   }
   else
   {
      ::MultiByteToWideChar(CP_ACP , 0, strTipText, strTipText.GetLength() + 1,
         pTTTW->szText, sizeof(pTTTW->szText)/(sizeof pTTTW->szText[0]));
   }

   return TRUE;    // message was handled
}
// </Snippet92>

BOOL CMdiView::PreCreateWindow(CREATESTRUCT& cs)
{
   cs.style |= WS_HSCROLL;

   return CView::PreCreateWindow(cs);
}

// <Snippet108>
void CMdiView::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
   // Get the minimum and maximum scroll-bar positions.
   int minpos;
   int maxpos;
   GetScrollRange(SB_HORZ, &minpos, &maxpos); 
   maxpos = GetScrollLimit(SB_HORZ);

   // Get the current position of scroll box.
   int curpos = GetScrollPos(SB_HORZ);

   // Determine the new position of scroll box.
   switch (nSBCode)
   {
   case SB_LEFT:      // Scroll to far left.
      curpos = minpos;
      break;

   case SB_RIGHT:      // Scroll to far right.
      curpos = maxpos;
      break;

   case SB_ENDSCROLL:   // End scroll.
      break;

   case SB_LINELEFT:      // Scroll left.
      if (curpos > minpos)
         curpos--;
      break;

   case SB_LINERIGHT:   // Scroll right.
      if (curpos < maxpos)
         curpos++;
      break;

   case SB_PAGELEFT:    // Scroll one page left.
   {
      // Get the page size. 
      SCROLLINFO   info;
      GetScrollInfo(SB_HORZ, &info, SIF_ALL);
   
      if (curpos > minpos)
      curpos = max(minpos, curpos - (int) info.nPage);
   }
      break;

   case SB_PAGERIGHT:      // Scroll one page right.
   {
      // Get the page size. 
      SCROLLINFO   info;
      GetScrollInfo(SB_HORZ, &info, SIF_ALL);

      if (curpos < maxpos)
         curpos = min(maxpos, curpos + (int) info.nPage);
   }
      break;

   case SB_THUMBPOSITION: // Scroll to absolute position. nPos is the position
      curpos = nPos;      // of the scroll box at the end of the drag operation.
      break;

   case SB_THUMBTRACK:   // Drag scroll box to specified position. nPos is the
      curpos = nPos;     // position that the scroll box has been dragged to.
      break;
   }

   // Set the new position of the thumb (scroll box).
   SetScrollPos(SB_HORZ, curpos);

   CView::OnHScroll(nSBCode, nPos, pScrollBar);
}
// </Snippet108>

// <Snippet109>
// Resize the edit control contained in the view to
// fill the entire view when the view's window is
// resized. CMdiView is a CView derived class.
void CMdiView::OnSize(UINT nType, int cx, int cy) 
{
   CView::OnSize(nType, cx, cy);
   // Resize edit to fill the whole view.
   // OnSize can be called before OnInitialUpdate
   // so make sure the edit control has been created.
   if (::IsWindow(m_Edit.GetSafeHwnd()))
   {
      m_Edit.MoveWindow (0, 0, cx, cy);
   }
}
// </Snippet109>

// <Snippet111>
//handler for Edit | Copy menu
void CMdiView::OnEditCopy()
{
   if (!OpenClipboard())
   {
      AfxMessageBox(_T("Cannot open the Clipboard"));
      return;
   }
   // Remove the current Clipboard contents  
   if(!EmptyClipboard())
   {
      AfxMessageBox(_T("Cannot empty the Clipboard"));
      return;  
   }

   // Get the currently selected data, hData handle to 
   // global memory of data
   CString str;
   m_Edit.GetWindowText(str);
   size_t cbStr = (str.GetLength() + 1) * sizeof(TCHAR);
   HGLOBAL hData = GlobalAlloc(GMEM_MOVEABLE, cbStr);
   memcpy_s(GlobalLock(hData), cbStr, str.LockBuffer(), cbStr);
   GlobalUnlock(hData);
   str.UnlockBuffer();

   // For the appropriate data formats...
   UINT uiFormat = (sizeof(TCHAR) == sizeof(WCHAR)) ? CF_UNICODETEXT : CF_TEXT;
   if (::SetClipboardData(uiFormat, hData) == NULL)  
   {
      AfxMessageBox(_T("Unable to set Clipboard data"));    
      CloseClipboard();
      return;  
   }  

   CloseClipboard();
}
// </Snippet111>

// <Snippet124>
// In this example a rectangle is drawn in a view. 
// The OnChangeRect() function changes the dimensions 
// of the rectangle and then calls CWnd::Invalidate() so the 
// client area of the view will be redrawn next time the
// window is updated.  It then calls CWnd::UpdateWindow 
// to force the new rectangle to be painted.

void CMdiView::OnChangeRect() 
{
   // Change Rectangle size.
   m_rcBox = CRect(20, 20, 210, 210);

   // Invalidate window so entire client area 
   // is redrawn when UpdateWindow is called.
   Invalidate();   

   // Update Window to cause View to redraw.
   UpdateWindow();
}

// On Draw function draws the rectangle.
void CMdiView::OnDraw(CDC* pDC)
{
   // Other draw code here.

   pDC->Draw3dRect(m_rcBox, 0x00FF0000, 0x0000FF00);
}
// </Snippet124>