// MyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCHtmlHelp.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDlg dialog

// <Snippet1>
static DWORD myarray[] = {
   IDC_CHECK1, 1,
   IDC_BUTTON1, 2,
   IDC_EDIT1, (DWORD)-1,
   0,0
};
// </Snippet1>

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CMyDlg::IDD, pParent)
{
   m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
   ON_WM_PAINT()
   ON_WM_QUERYDRAGICON()
   //}}AFX_MSG_MAP
   ON_WM_HELPINFO()
   ON_WM_CONTEXTMENU()
END_MESSAGE_MAP()


// CMyDlg message handlers

BOOL CMyDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   // Set the icon for this dialog.  The framework does this automatically
   //  when the application's main window is not a dialog
   SetIcon(m_hIcon, TRUE);			// Set big icon
   SetIcon(m_hIcon, FALSE);		// Set small icon

   return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDlg::OnPaint()
{
   if (IsIconic())
   {
      CPaintDC dc(this); // device context for painting

      SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

      // Center icon in client rectangle
      int cxIcon = GetSystemMetrics(SM_CXICON);
      int cyIcon = GetSystemMetrics(SM_CYICON);
      CRect rect;
      GetClientRect(&rect);
      int x = (rect.Width() - cxIcon + 1) / 2;
      int y = (rect.Height() - cyIcon + 1) / 2;

      // Draw the icon
      dc.DrawIcon(x, y, m_hIcon);
   }
   else
   {
      CDialog::OnPaint();
   }
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyDlg::OnQueryDragIcon()
{
   return static_cast<HCURSOR>(m_hIcon);
}

// C4311: pointer truncation, caused by HtmlHelp requiring DWORD param
// that's really a pointer.
#pragma warning(push)
#pragma warning(disable : 4311)
// <Snippet2>
BOOL CMyDlg::OnHelpInfo(HELPINFO* pHelpInfo)
{
   BOOL bRet = TRUE;

   if (pHelpInfo->iContextType == HELPINFO_WINDOW)
   {
      HWND hwnd = ::HtmlHelp(
         (HWND)pHelpInfo->hItemHandle,
         _T("my_chm.chm::/ctrlhlp.txt"),
         HH_TP_HELP_WM_HELP,
         (DWORD)(LPVOID)myarray);
      bRet = (NULL != hwnd);
   }

   return bRet;
}
// </Snippet2>

// <Snippet3>
void CMyDlg::OnContextMenu(CWnd* pWnd, CPoint point)
{
   UNREFERENCED_PARAMETER(point);

   ::HtmlHelp(
      pWnd->GetSafeHwnd(),
      _T("my_chm.chm::/ctrlhlp.txt"),
      HH_TP_HELP_CONTEXTMENU,
      (DWORD)(LPVOID)myarray);
}
// </Snippet3>

// <Snippet5>
BOOL CMyDlg::OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
   NMHDR* pNMHDR = (NMHDR*)lParam;
   switch (pNMHDR->idFrom)
   {
      case ID_HHNOTIFICATION:  // whatever id you placed in idNotify of HH_WINTYPE
         if (pNMHDR->code == HHN_NAVCOMPLETE)
         {
            OnNavComplete((HHN_NOTIFY*) lParam, pResult);
            return TRUE;
         }
         break;
   }

   return CDialog::OnNotify(wParam, lParam, pResult);
}
// </Snippet5>

void CMyDlg::OnNavComplete(HHN_NOTIFY* phhn, LRESULT* pResult)
{
   UNREFERENCED_PARAMETER(pResult);

   MessageBoxA(this->GetSafeHwnd(), phhn->pszUrl, 0, 0);
}

void CMyDlg::HtmlHelp(DWORD_PTR dwData, UINT nCmd)
{
   CDialog::HtmlHelp(dwData, nCmd);

   // Supposedly this code will set up the help window to send us notifications
   // but it doesn't work and I can't figure out why not.
   HH_WINTYPE hhWinType = {0};
   hhWinType.cbStruct = sizeof(hhWinType);
   hhWinType.fUniCodeStrings = sizeof(TCHAR) / sizeof(WCHAR);
   hhWinType.hwndCaller = this->GetSafeHwnd();
   hhWinType.idNotify = ID_HHNOTIFICATION;
   hhWinType.fsValidMembers = HHWIN_PARAM_PROPERTIES;
   hhWinType.fsWinProperties = HHWIN_PROP_TRACKING;
   ::HtmlHelp(this->GetSafeHwnd(), _T("my_chm.chm>MyHelpWindow"),
      HH_SET_WIN_TYPE, (DWORD)&hhWinType);
}
#pragma warning(pop)