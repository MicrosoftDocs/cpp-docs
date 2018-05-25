// CComboBox_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CComboBox_s1.h"
#include "CComboBox_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCComboBox_s1Dlg dialog




CCComboBox_s1Dlg::CCComboBox_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCComboBox_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCComboBox_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_combobox);
}

BEGIN_MESSAGE_MAP(CCComboBox_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CCComboBox_s1Dlg message handlers

BOOL CCComboBox_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	//<snippet2>
	// Add extra initialization here.

	// Add 20 items to the combo box. The Resource Editor
	// has already been used to set the style of the combo
	// box to CBS_SORT.
	CString str;
	for (int i = 1; i <= 20; i++)
	{
		str.Format(_T("Item %2d"), i); 
		m_combobox.AddString(str);
	}
	// Set the minimum visible item
	m_combobox.SetMinVisibleItems( 10 );
	// Set the cue banner
	m_combobox.SetCueBanner(_T("Select an item..."));

	// End of extra initialization.
	//</snippet2>
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCComboBox_s1Dlg::OnPaint()
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
HCURSOR CCComboBox_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

