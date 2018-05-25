// MyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_AxDataBinding.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyDlg dialog

#import "PROGID:MSDBCtls.DBList.1" no_namespace, raw_interfaces_only

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
END_MESSAGE_MAP()


// CMyDlg message handlers

// <Snippet1>
BOOL CMyDlg::OnInitDialog()
{
// </Snippet1>
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

   {
// <Snippet2>
   CWnd* pDSC = GetDlgItem(IDC_DATASOURCE);
   CWnd* pMyBound = GetDlgItem(IDC_MYBOUNDCTRL1);
   pMyBound->BindDefaultProperty(0x1, VT_BSTR, _T("ContactFirstName"), pDSC);
// </Snippet2>
   }

   {
// <Snippet4>
   CWnd* pDSC = GetDlgItem(IDC_DATASOURCE);
   CWnd* pMyBound = GetDlgItem(IDC_MYBOUNDCTRL2);
   pMyBound->BindProperty(0x1, pDSC);
// </Snippet4>
   }

   {
// <Snippet5>
   // Find the child controls on the dialog
   HRESULT hr = E_FAIL;
   CWnd* pDSC = GetDlgItem(IDC_DATASOURCE);
   CWnd* pListWnd = GetDlgItem(IDC_DBLIST1);
   IUnknown* punkList = pListWnd->GetControlUnknown();
   IDBList* pList = NULL;

   if (NULL != punkList)
   {
      hr = punkList->QueryInterface(__uuidof(IDBList), (void**)&pList);
   }

   if (SUCCEEDED(hr))
   {
      // Tell the MFC binding manager that we are
      // binding DISPID 3 to the data-source control.
      pListWnd->BindProperty(0x3, pDSC);

      // Tell the listbox which field to expose as its bound column
      pList->put_BoundColumn(_T("ContactFirstName"));

      // Tell the listbox which cursor and column to populate its list from
      pList->put_ListField(_T("ContactFirstName"));

      IUnknown* punkCursor = pDSC->GetDSCCursor();
      if (NULL != punkCursor)
      {
         punkCursor->Release();
      }

      pList->Release();
// </Snippet5>
   }
   }

// <Snippet3>
	return TRUE;
}
// </Snippet3>

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

