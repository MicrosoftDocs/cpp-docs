// SplitChildFrm.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCWindowing.h"
#include "SplitChildFrm.h"

// CMyListBox

IMPLEMENT_DYNCREATE(CMyListBox, CListBox)

// CMySplitterWnd

BEGIN_MESSAGE_MAP(CMySplitterWnd, CSplitterWnd)
   ON_WM_CREATE()
   ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

CMySplitterWnd::CMySplitterWnd()
   : m_BkColor(RGB(0, 0, 0))
{
}

// <Snippet5>
HBRUSH CMySplitterWnd::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
   HBRUSH hbr = CSplitterWnd::OnCtlColor(pDC, pWnd, nCtlColor);
   
   if(nCtlColor == CTLCOLOR_LISTBOX && 
      pWnd->GetDlgCtrlID() == IdFromRowCol(1,0))
   {
      // Pane 1,0 is a list box. Set the color of the text to be blue.
      pDC->SetBkColor(m_BkColor);
      pDC->SetTextColor(RGB(0,0,255));
      return (HBRUSH)m_hbrListBoxBkgnd.GetSafeHandle();
   }
   // TODO: Return a different brush if the default is not desired
   return hbr;
}
// </Snippet5>

int CMySplitterWnd::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CSplitterWnd::OnCreate(lpCreateStruct) == -1)
      return -1;

   m_hbrListBoxBkgnd.CreateSolidBrush(RGB(0, 0xff, 0));

   return 0;
}

// CSplitChildFrm

IMPLEMENT_DYNCREATE(CSplitChildFrm, CMDIChildWnd)

CSplitChildFrm::CSplitChildFrm()
{

}

CSplitChildFrm::~CSplitChildFrm()
{
}

BOOL CSplitChildFrm::OnCreateClient(LPCREATESTRUCT /*lpcs*/, CCreateContext* pContext)
{
   BOOL bRet = m_wndSplitter.CreateStatic(this, 1, 2);

   m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS(CMyListBox),
      CSize(10, 10), pContext);
   m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS(CMyListBox),
      CSize(10, 10), pContext);

   return bRet;
}

BEGIN_MESSAGE_MAP(CSplitChildFrm, CMDIChildWnd)
   ON_WM_SIZING()
END_MESSAGE_MAP()


// CSplitChildFrm message handlers

// <Snippet110>
void CSplitChildFrm::OnSizing(UINT fwSide, LPRECT pRect)
{
   CMDIChildWnd::OnSizing(fwSide, pRect);

   // Resize the splitter window in the frame. m_wndSplitter is of 
   // type CSplitterWnd
   int nWidth = (pRect->right) - (pRect->left);
   m_wndSplitter.SetColumnInfo(0, nWidth / 2, 10);
   m_wndSplitter.SetColumnInfo(1, nWidth / 2, 10);
   m_wndSplitter.RecalcLayout();
}
// </Snippet110>
