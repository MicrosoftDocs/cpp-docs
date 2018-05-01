// CSliderCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CSliderCtrl_s1.h"
#include "CSliderCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCSliderCtrl_s1Dlg dialog




CCSliderCtrl_s1Dlg::CCSliderCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCSliderCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCSliderCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SLIDER1, m_sliderCtrl);
}

BEGIN_MESSAGE_MAP(CCSliderCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CCSliderCtrl_s1Dlg::OnBnClickedButton1)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, &CCSliderCtrl_s1Dlg::OnNMCustomdrawSlider1)
END_MESSAGE_MAP()


// CCSliderCtrl_s1Dlg message handlers

BOOL CCSliderCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	//<snippet2>
	// Add extra initialization.

	// Modify the size of the slider control's thumb.
	// First, set the TBS_FIXEDLENGTH style.
	m_sliderCtrl.ModifyStyle( 0, TBS_FIXEDLENGTH );
	thumbLength = m_sliderCtrl.GetThumbLength();
	m_sliderCtrl.SetThumbLength( thumbLength * 2 );

	// End extra initialization.
	//</snippet2>

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCSliderCtrl_s1Dlg::OnPaint()
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
HCURSOR CCSliderCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCSliderCtrl_s1Dlg::OnBnClickedButton1()
{
	CString str;
	CString msg = _T("Thumbsize: \noriginal = %d, new = %d");
	str.Format(msg, thumbLength, m_sliderCtrl.GetThumbLength());
	AfxMessageBox(str, MB_ICONEXCLAMATION);
}

void CCSliderCtrl_s1Dlg::OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
}
