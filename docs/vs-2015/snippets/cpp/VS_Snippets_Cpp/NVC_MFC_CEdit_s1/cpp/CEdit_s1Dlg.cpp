// CEdit_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CEdit_s1.h"
#include "CEdit_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCEdit_s1Dlg dialog




CCEdit_s1Dlg::CCEdit_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCEdit_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCEdit_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_cedit);
}

BEGIN_MESSAGE_MAP(CCEdit_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CCEdit_s1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCEdit_s1Dlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CCEdit_s1Dlg message handlers

BOOL CCEdit_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.
	
	//<snippet2>
	m_cedit.SetCueBanner(_T("First, enter text here..."), TRUE);
	//</snippet2>

	// End of extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCEdit_s1Dlg::OnPaint()
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
HCURSOR CCEdit_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCEdit_s1Dlg::OnBnClickedButton1()
{
	// Delete all the text in the edit control.
	m_cedit.SetSel(0, -1);
	m_cedit.Clear();
	CString str = _T("This is a long enough string");

	// Set a string into the edit control.
	int iPos = str.GetAllocLength() - 1;
	m_cedit.SetWindowText(str);

	int nStartChar = -1;
	int nEndChar = -1;
	str.Format(_T("Set: start = %d, end = %d"), 1, iPos);
	AfxMessageBox(str);
	m_cedit.SetHighlight(1, iPos);
	BOOL bRet = m_cedit.GetHighlight(&nStartChar, &nEndChar);
	str.Format(_T("Get: start = %d, end = %d"), nStartChar, nEndChar);
	AfxMessageBox(str);

	/*
	// TODO: Pending whether method is implemented.
	int nStartChar = 0, nEndChar = 0;
	m_cedit.GetSel( nStartChar, nEndChar );
	CString str;
	str.Format(_T("start = %d, end = %d"), 
		nStartChar, nEndChar);
	AfxMessageBox(str);
	// Highlight the second through the next to last
	// character in the edit control.
	m_cedit.SetHighlight( 1, nEndChar-1 );
	*/
}

void CCEdit_s1Dlg::OnBnClickedButton2()
{
	//<snippet3>
	m_cedit.ShowBalloonTip( 
		_T("CEdit Balloon Tip"),	// title
		_T("Here's a tip!"),		// text
		TTI_INFO);
	//</snippet3>
}
