// CLinkCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CLinkCtrl_s1.h"
#include "CLinkCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCLinkCtrl_s1Dlg dialog




CCLinkCtrl_s1Dlg::CCLinkCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCLinkCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCLinkCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SYSLINK1, m_Link1);
}

BEGIN_MESSAGE_MAP(CCLinkCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_NOTIFY(NM_CLICK, IDC_SYSLINK1, &CCLinkCtrl_s1Dlg::OnNMClickSyslink1)
	ON_NOTIFY(NM_CLICK, IDC_SYSLINK2, &CCLinkCtrl_s1Dlg::OnNMClickSyslink2)
END_MESSAGE_MAP()


// CCLinkCtrl_s1Dlg message handlers

BOOL CCLinkCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here
	// <snippet1>
	CRect rect1, rect2;
	int height = 0;
	SIZE sz = {0};
	PTCHAR url = 
		_T("Link 2)  ")
		_T("<A HREF=\"http://msdn2.microsoft.com/en-us/visualc/default.aspx\">")
		_T("Microsoft VC++ Home")
		_T("</A>");
	m_Link1.GetWindowRect( &rect1 );
	m_Link2.Create(url,
		(WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER),
		CRect(
		rect1.left, rect1.bottom + rect1.Height(), 
		rect1.right, rect1.bottom + (2*rect1.Height())),
		this,
		IDC_SYSLINK2);
	m_Link2.GetClientRect( &rect2 );
	// The return value of GetIdealSize() is the same as sz.cy
    height = m_Link2.GetIdealSize( 
		rect2.Width(), &sz);
	if ((sz.cx != 0) && (sz.cy != 0)) {
		int rc = m_Link2.SetWindowPos(
			this, 
			0, 0, sz.cx, sz.cy,
			(SWP_NOMOVE | SWP_NOZORDER | SWP_NOREPOSITION | SWP_NOACTIVATE));
	}
	// </snippet1>

	// End of extra initialization

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCLinkCtrl_s1Dlg::OnPaint()
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
HCURSOR CCLinkCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCLinkCtrl_s1Dlg::OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult)
{
	AfxMessageBox(_T("You clicked Link 1"), MB_ICONINFORMATION);
	*pResult = 0;
}
void CCLinkCtrl_s1Dlg::OnNMClickSyslink2(NMHDR *pNMHDR, LRESULT *pResult)
{
	CString strUrl;
	BOOL rc;
	rc = m_Link2.GetItemUrl(0, strUrl);
	if (rc == TRUE) {
		HINSTANCE hr = ShellExecute(NULL, _T("open"), strUrl, 
			NULL, NULL, SW_SHOWNORMAL);
	}
	*pResult = 0;
}
