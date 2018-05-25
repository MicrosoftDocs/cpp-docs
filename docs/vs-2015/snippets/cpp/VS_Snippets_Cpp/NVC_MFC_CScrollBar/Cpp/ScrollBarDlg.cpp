// ScrollBarDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CScrollBar.h"
#include "ScrollBarDlg.h"


// CScrollBarDlg dialog

IMPLEMENT_DYNAMIC(CScrollBarDlg, CDialog)

CScrollBarDlg::CScrollBarDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CScrollBarDlg::IDD, pParent)
{

}

CScrollBarDlg::~CScrollBarDlg()
{
}

void CScrollBarDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScrollBarDlg, CDialog)
END_MESSAGE_MAP()


// CScrollBarDlg message handlers

BOOL CScrollBarDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet1>
   // Example 1:
   // Create a horizontal CScrollBar control as a child window of CMyDialog 
   // class (a CDialog-derived class). The scroll bar is NOT visible until the
   // call ShowScrollBar() is made. m_ScrollBarHorz is of type CScrollBar class,
   // and it is a member variable in CMyDialog class.
   VERIFY(m_ScrollBarHorz.Create(SBS_HORZ | SBS_TOPALIGN | WS_CHILD,
      CRect(5, 5, 100, 30), this, IDC_SCROLLBARCTRL));
   
   m_ScrollBarHorz.ShowScrollBar();
   
   // Example 2:
   // Create a vertical CScrollBar control as a child window of CMyDialog 
   // class (a CDialog-derived class). m_ScrollBarVert is of type CScrollBar 
   // class, and it is a member variable in CMyDialog class.
   VERIFY(m_ScrollBarVert.Create(SBS_VERT | SBS_LEFTALIGN | WS_CHILD | 
      WS_VISIBLE, CRect(5, 30, 30, 130), this, IDC_SCROLLBARCTRL));
// </Snippet1>

   {
// <Snippet3>
      // Set SCROLLINFO for the scroll bar. m_ScrollBarHorz is of type 
      // CScrollBar class, and it is a member variable in CMyDialog class.
      SCROLLINFO info;
      info.cbSize = sizeof(SCROLLINFO);     
      info.fMask = SIF_ALL;     
      info.nMin = 0;     
      info.nMax = 10; 
      info.nPage = 2;     
      info.nPos = 5;    
      info.nTrackPos = 2; 
      m_ScrollBarHorz.SetScrollInfo(&info);
// </Snippet3>
   }

// <Snippet4>
   // Sets minimum (0) and maximum (10) position values for the
   // CScrollBar control. m_ScrollBarVert is of type CScrollBar class, 
   // and it is a member variable in CMyDialog class.
   m_ScrollBarVert.SetScrollRange(0, 10);

   // Set the position of the scroll box.
   m_ScrollBarVert.SetScrollPos(5);

   // Disable the down arrow of the scroll bar. By default, both arrows 
   // are enabled.
   m_ScrollBarVert.EnableScrollBar(ESB_DISABLE_DOWN);
// </Snippet4>

   return TRUE;  // return TRUE unless you set the focus to a control
}
