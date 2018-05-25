// CStatusBarCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CStatusBarCtrl_s1.h"
#include "CStatusBarCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCStatusBarCtrl_s1Dlg dialog




CCStatusBarCtrl_s1Dlg::CCStatusBarCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCStatusBarCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCStatusBarCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCStatusBarCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CCStatusBarCtrl_s1Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CCStatusBarCtrl_s1Dlg message handlers

BOOL CCStatusBarCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.

	// Create a status bar control.
	CRect rect;
	m_statusBar.Create(
		(WS_CHILD | WS_VISIBLE | WS_BORDER ),
		CRect( 0, 0, 0, 0), // Rectangle is ignored.
		this, IDC_STATUS1);
	// Divide the status bar into 3 equally sized panes.
	m_statusBar.GetClientRect( &rect );
	int barWidth = rect.Width();
	int arPartsWidth[] = { barWidth/3, (barWidth * 2)/3, barWidth };
	m_statusBar.SetParts( 3, arPartsWidth );
	// Label the status bar panes.
	m_statusBar.SetText( _T("Pane 1"), 0, 0 ); 
	m_statusBar.SetText( _T("Pane 2"), 1, 0 );
	m_statusBar.SetText( _T("Pane 3"), 2, 0 );
	// Insert the MFC icon in the first status bar pane.
	m_statusBar.SetIcon( 0, m_hIcon ); 

	// End of extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCStatusBarCtrl_s1Dlg::OnPaint()
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
HCURSOR CCStatusBarCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCStatusBarCtrl_s1Dlg::OnBnClickedButton1()
{
	//<snippet2>
	// Get the icon from pane 1 and set it in panes 2 and 3.
	HICON hIcon = m_statusBar.GetIcon(0);
	m_statusBar.SetIcon( 1, hIcon );
	m_statusBar.SetIcon( 2, hIcon );
	//</snippet2>

}
