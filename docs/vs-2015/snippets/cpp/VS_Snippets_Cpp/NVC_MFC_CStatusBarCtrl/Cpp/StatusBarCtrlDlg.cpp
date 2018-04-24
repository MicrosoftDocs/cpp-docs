// StatusBarCtrlDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CStatusBarCtrl.h"
#include "StatusBarCtrlDlg.h"


// CStatusBarCtrlDlg dialog

IMPLEMENT_DYNAMIC(CStatusBarCtrlDlg, CDialog)

CStatusBarCtrlDlg::CStatusBarCtrlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CStatusBarCtrlDlg::IDD, pParent)
{

}

CStatusBarCtrlDlg::~CStatusBarCtrlDlg()
{
}

void CStatusBarCtrlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CStatusBarCtrlDlg, CDialog)
END_MESSAGE_MAP()


// CStatusBarCtrlDlg message handlers

BOOL CStatusBarCtrlDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet1>
   VERIFY(m_wndSBC.Create(WS_CHILD|WS_VISIBLE|CCS_BOTTOM|SBARS_SIZEGRIP,
      CRect(0,0,0,0), this, IDC_STATUSBARCTRL));
// </Snippet1>

   {
// <Snippet10>
      const int c_nParts = 4;
      CRect rect;

      m_wndSBC.GetClientRect(&rect);
      int aWidths[c_nParts] = { rect.right-300, rect.right-200, rect.right-100, 
         -1 };

      VERIFY(m_wndSBC.SetParts(c_nParts, aWidths));
// </Snippet10>
   }

   {
// <Snippet2>
      RECT rectPane1;
      VERIFY(m_wndSBC.GetRect(1, &rectPane1));

      int borderArray[3];
      VERIFY(m_wndSBC.GetBorders(borderArray));

      int nHorz, nVert, nSpacing;
      VERIFY(m_wndSBC.GetBorders(nHorz, nVert, nSpacing));
// </Snippet2>
   }

   {
// <Snippet3>
      int pParts[2];

      int nParts = m_wndSBC.GetParts(2, pParts);   
// </Snippet3>
      UNREFERENCED_PARAMETER(nParts);
   }

   {
// <Snippet4>
      CRect rectPane1;

      VERIFY(m_wndSBC.GetRect(1, &rectPane1));   
// </Snippet4>
   }

// <Snippet11>
   VERIFY(m_wndSBC.SetText(_T("Text For Pane 1"), 1, 0));
// </Snippet11>

   {
// <Snippet5>
      int nType;
      TCHAR* pszPaneOneText;

      pszPaneOneText = new TCHAR[ m_wndSBC.GetTextLength(1, &nType) + 1 ];
      int nTextLength = m_wndSBC.GetText(pszPaneOneText, 1, &nType);

      switch(nType)
      {
         case 0:
            // Text is drawn with a border to appear lower than the 
            // plane of the status bar
            break;
         case SBT_NOBORDERS:
            // text is drawn without borders
            break;
         case SBT_OWNERDRAW:
            // Text is drawn by the parent window
            break;
         case SBT_POPOUT:
            // Text is drawn with a border to appear higher than the 
            // plane of the status bar
            break;
      }   

      delete pszPaneOneText;
// </Snippet5>
      UNREFERENCED_PARAMETER(nTextLength);
   }

   {
// <Snippet6>
      int nType;
      int nLength = m_wndSBC.GetTextLength(0, &nType);

      switch( nType )
      {
         case 0:
            // Text is drawn with a border to appear lower than the 
            // plane of the status bar
            break;
         case SBT_NOBORDERS:
            // text is drawn without borders
            break;
         case SBT_OWNERDRAW:
            // Text is drawn by the parent window
            break;
         case SBT_POPOUT:
            // Text is drawn with a border to appear higher than the 
            // plane of the status bar
            break;
      }   
// </Snippet6>
      UNREFERENCED_PARAMETER(nLength);
   }

// <Snippet12>
   m_wndSBC.SetTipText(0, _T("This is Pane 0"));
// </Snippet12>

   {
// <Snippet7>
      CString csPane0TipText = m_wndSBC.GetTipText(0);
// </Snippet7>
   }

   {
// <Snippet8>
      m_wndSBC.SetBkColor(RGB(0,0,250));

      HICON hIcon = AfxGetApp()->LoadIcon(IDI_PANE_0_ICON);
      VERIFY(hIcon);
      VERIFY(m_wndSBC.SetIcon(0, hIcon));
// </Snippet8>
   }

   {
// <Snippet9>
      m_wndSBC.SetMinHeight(40);
// </Snippet9>
   }

   return TRUE;  // return TRUE unless you set the focus to a control
}

