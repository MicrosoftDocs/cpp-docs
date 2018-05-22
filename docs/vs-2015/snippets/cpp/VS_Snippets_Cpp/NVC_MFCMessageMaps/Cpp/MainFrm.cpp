// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "NVC_MFCMessageMaps.h"

#include "MainFrm.h"
#include "MyWnd2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
   ON_BN_CLICKED(IDC_BUTTON1, &CMainFrame::OnBnClickedButton1)
END_MESSAGE_MAP()

static UINT indicators[] =
{
   ID_SEPARATOR,           // status line indicator
   ID_INDICATOR_CAPS,
   ID_INDICATOR_NUM,
   ID_INDICATOR_SCRL,
};


// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
   // TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}

// <Snippet13>
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
      return -1;

   EnableDocking(CBRS_ALIGN_ANY);

   // m_wndDlgBar is a CDialogBar member of CMainFrame
   // IDD_DIALOGBAR - Resource ID of the dialog 
   // template. This dialog template should be created 
   // with  the  style  WS_CHILD and no other style.
   // The template must not have the style WS_VISIBLE.
   if (!m_wndDlgBar.Create(this, IDD_DIALOGBAR,
      CBRS_LEFT|CBRS_TOOLTIPS|CBRS_FLYBY, IDD_DIALOGBAR))
   {
      TRACE0("Failed to create DlgBar\n");
      return -1;      // Fail to create.
   }

   return 0;
}
// </Snippet13>

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
   if( !CMDIFrameWnd::PreCreateWindow(cs) )
      return FALSE;
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return TRUE;
}


// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
   CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
   CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG


// CMainFrame message handlers




void CMainFrame::OnBnClickedButton1()
{
   RECT rect = {0};
   CMyWnd2 wnd2;
   wnd2.Create(NULL, NULL, 0, rect, this, 0);
   HWND hwnd = wnd2.m_hWnd;

// <Snippet6>
   CWnd* pWnd = CWnd::FromHandle(hwnd);
   pWnd->SendMessage(WM_MYMESSAGE);
// </Snippet6>
}
