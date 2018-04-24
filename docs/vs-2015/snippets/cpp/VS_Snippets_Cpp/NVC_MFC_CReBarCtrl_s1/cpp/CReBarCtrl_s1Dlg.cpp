// CReBarCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CReBarCtrl_s1.h"
#include "CReBarCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCReBarCtrl_s1Dlg dialog

CCReBarCtrl_s1Dlg::CCReBarCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCReBarCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCReBarCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCReBarCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CCReBarCtrl_s1Dlg message handlers

BOOL CCReBarCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.

	CRect rect;
	GetClientRect( &rect );
	BOOL bRC = m_rebar.Create(
		(WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER),
		CRect( 0, 0, rect.right-10, rect.top+55),
		this,
		IDC_REBAR1);

	wchar_t strName[BUFFER_SIZE];
	strName[0] = '\0';
	CString str;
	REBARBANDINFO rebarBandInfo;

	for (int iIndex = 0; iIndex < TOTAL_BANDS; iIndex++) {
		::ZeroMemory(&rebarBandInfo, sizeof(REBARBANDINFO));
		rebarBandInfo.cbSize = sizeof(REBARBANDINFO);
		rebarBandInfo.fMask |= RBBIM_TEXT; 
		str.Format(_T("Band %d"), iIndex);
		wcscpy_s(strName, str);
		rebarBandInfo.lpText = strName;
		rebarBandInfo.cch = BUFFER_SIZE;
		bRet = m_rebar.InsertBand(iIndex, &rebarBandInfo);
	}
	//<snippet2>
	// Set the width of each band.
	m_rebar.GetClientRect( &rect );
	int iWidth = rect.Width()/TOTAL_BANDS;
	for (int iIndex=0; iIndex < TOTAL_BANDS; iIndex++)
		bRet = m_rebar.SetBandWidth(iIndex, iWidth);
	//</snippet2>

	// End of extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCReBarCtrl_s1Dlg::OnPaint()
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
HCURSOR CCReBarCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


