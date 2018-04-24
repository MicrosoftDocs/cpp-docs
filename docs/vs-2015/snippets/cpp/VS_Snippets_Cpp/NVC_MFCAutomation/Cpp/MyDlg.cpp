// CMyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CMFCAutomation.h"
#include "MyDlg.h"


// CMyDlg dialog

IMPLEMENT_DYNAMIC(CMyDlg, CDialog)

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
{

}

CMyDlg::~CMyDlg()
{
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
END_MESSAGE_MAP()


// CMyDlg message handlers

// <Snippet13>
BEGIN_EVENTSINK_MAP(CMyDlg, CDialog)
   ON_EVENT_RANGE(CMyDlg, IDC_MYCTRL1, IDC_MYCTRL3, -605, OnRangeMouseDown,
      VTS_I4 VTS_I2 VTS_I2 VTS_I4 VTS_I4)
END_EVENTSINK_MAP()
// </Snippet13>

BOOL CMyDlg::OnRangeMouseDown(UINT CtlID, short MouseButton, short Shift,
      long x, long y)
{
   char sz[] = 
// <Snippet11>
      VTS_I2 VTS_BOOL
// </Snippet11>
      ;
   sz;

   char sz2[] =
// <Snippet14>
      VTS_I2 VTS_PI2
// </Snippet14>
      ;
   sz2;

   TRACE(_T("OnRangeMouseDown: %d, %d, %d, %d, %d\n"), CtlID, MouseButton, Shift, x, y);

   return TRUE;
}
