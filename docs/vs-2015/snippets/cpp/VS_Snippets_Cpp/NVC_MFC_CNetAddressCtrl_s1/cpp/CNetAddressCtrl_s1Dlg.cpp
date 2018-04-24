// CNetAddressCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CNetAddressCtrl_s1.h"
#include "CNetAddressCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CCNetAddressCtrl_s1Dlg dialog




CCNetAddressCtrl_s1Dlg::CCNetAddressCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCNetAddressCtrl_s1Dlg::IDD, pParent)
	, m_Addr_ipv4(true)
	, m_Addr_ipv6(false)
	, m_Addr_named(false)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCNetAddressCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_RADIO1, m_Addr_ipv4);
	DDX_Check(pDX, IDC_RADIO2, m_Addr_ipv6);
	DDX_Check(pDX, IDC_RADIO3, m_Addr_named);
	DDX_Control(pDX, IDC_NETADDRESS3, m_netAddr);
}

BEGIN_MESSAGE_MAP(CCNetAddressCtrl_s1Dlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_RADIO1, &CCNetAddressCtrl_s1Dlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CCNetAddressCtrl_s1Dlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CCNetAddressCtrl_s1Dlg::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_BUTTON1, &CCNetAddressCtrl_s1Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CCNetAddressCtrl_s1Dlg message handlers

BOOL CCNetAddressCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCNetAddressCtrl_s1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCNetAddressCtrl_s1Dlg::OnPaint()
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
HCURSOR CCNetAddressCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


// <Snippet1>
void CCNetAddressCtrl_s1Dlg::OnBnClickedRadio1()
{
	m_netAddr.SetAllowType(NET_STRING_IPV4_ADDRESS);
}

void CCNetAddressCtrl_s1Dlg::OnBnClickedRadio2()
{
 	m_netAddr.SetAllowType(NET_STRING_IPV6_ADDRESS);
}

void CCNetAddressCtrl_s1Dlg::OnBnClickedRadio3()
{
	m_netAddr.SetAllowType(NET_STRING_NAMED_ADDRESS);
}

void CCNetAddressCtrl_s1Dlg::OnBnClickedButton1()
{
	m_na.pAddrInfo = &m_nai;
	HRESULT rslt = m_netAddr.GetAddress(&m_na);
	if (rslt != S_OK)
		m_netAddr.DisplayErrorTip();
	else
	{
		MessageBox(
			_T("Success!"), _T("Validation Results"));
	}
// </Snippet1>
}
