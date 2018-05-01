// CProgressCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CProgressCtrl_s1.h"
#include "CProgressCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCProgressCtrl_s1Dlg dialog




CCProgressCtrl_s1Dlg::CCProgressCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCProgressCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCProgressCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SPLIT1, m_splitbutton);
	DDX_Control(pDX, IDC_PROGRESS1, m_progressCtrl);
}

BEGIN_MESSAGE_MAP(CCProgressCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_SETBARCOLOR_RED, &CCProgressCtrl_s1Dlg::OnSetbarcolorRed)
	ON_COMMAND(ID_SETBARCOLOR_GREEN, &CCProgressCtrl_s1Dlg::OnSetbarcolorGreen)
	ON_COMMAND(ID_SETBARCOLOR_BLUE, &CCProgressCtrl_s1Dlg::OnSetbarcolorBlue)
	ON_COMMAND(ID_SETBARCOLOR_ORI, &CCProgressCtrl_s1Dlg::OnSetbarcolorOri)
	ON_COMMAND(ID_SETMARQUEE_ON, &CCProgressCtrl_s1Dlg::OnSetmarqueeOn)
	ON_COMMAND(ID_SETMARQUEE_OFF, &CCProgressCtrl_s1Dlg::OnSetmarqueeOff)
	ON_COMMAND(ID_X_GETSTEP, &CCProgressCtrl_s1Dlg::OnXGetstep)
	ON_COMMAND(ID_SETSTATE_NORMAL, &CCProgressCtrl_s1Dlg::OnSetstateNormal)
	ON_COMMAND(ID_SETSTATE_PAUSED, &CCProgressCtrl_s1Dlg::OnSetstatePaused)
	ON_COMMAND(ID_X_GETSTATE, &CCProgressCtrl_s1Dlg::OnXGetstate)
	ON_BN_CLICKED(IDC_SPLIT1, &CCProgressCtrl_s1Dlg::OnBnClickedSplit1)
END_MESSAGE_MAP()


// CCProgressCtrl_s1Dlg message handlers

BOOL CCProgressCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.

	// Add the dropdown menu to the splitbutton control.
	m_splitbutton.SetDropDownMenu(IDR_MENU1, 0);
	// Set the range and position of the progress control.
	m_progressCtrl.SetRange(0, 100);
	m_progressCtrl.SetPos( 50 );

	// End extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCProgressCtrl_s1Dlg::OnPaint()
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
HCURSOR CCProgressCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

//<snippet1>
// Set the progress bar color to red, green, blue, or 
// the system default. The SetBarColor method has an 
// effect only if the Windows system theme is Classic.
void CCProgressCtrl_s1Dlg::OnSetbarcolorRed()
{
	m_progressCtrl.SetBarColor(RGB(255,0,0));
}

void CCProgressCtrl_s1Dlg::OnSetbarcolorGreen()
{
	m_progressCtrl.SetBarColor(RGB(0,255,0));
}

void CCProgressCtrl_s1Dlg::OnSetbarcolorBlue()
{
	m_progressCtrl.SetBarColor(RGB(0,0,255));
}

void CCProgressCtrl_s1Dlg::OnSetbarcolorOri()
{
	m_progressCtrl.SetBarColor(CLR_DEFAULT);
}
//</snippet1>
//<snippet2>
// Turn the marquee animation on or off.
void CCProgressCtrl_s1Dlg::OnSetmarqueeOn()
{
	m_progressCtrl.SetMarquee(TRUE, nMarqueeInterval);
}

void CCProgressCtrl_s1Dlg::OnSetmarqueeOff()
{
	m_progressCtrl.SetMarquee(FALSE, nMarqueeInterval);
}
//</snippet2>
void CCProgressCtrl_s1Dlg::OnXGetstep()
{
//<snippet3>
// Get the step increment for the progress control.
	CString str;
	int incr = m_progressCtrl.GetStep();
	str.Format(_T("The step increment is %d."), incr);
	AfxMessageBox(str, MB_ICONEXCLAMATION);
//</snippet3>
}
//<snippet4>
// Set the progrees control to normal or paused state.
void CCProgressCtrl_s1Dlg::OnSetstateNormal()
{
	m_progressCtrl.SetState(PBST_NORMAL);
}

void CCProgressCtrl_s1Dlg::OnSetstatePaused()
{
	m_progressCtrl.SetState(PBST_PAUSED);
}
//</snippet4>

void CCProgressCtrl_s1Dlg::OnXGetstate()
{
//<snippet5>
// Display the current state of the progress control.
	CString str = _T("The progress control state is ");
	int progState = m_progressCtrl.GetState();
	if (progState == PBST_NORMAL)
		str += _T("NORMAL");
	else if (progState == PBST_PAUSED)
		str += _T("PAUSED");
	else if (progState == PBST_ERROR)
		str += _T("ERROR");
	else 
		str += _T("unknown");
	AfxMessageBox(str, MB_ICONEXCLAMATION);
//</snippet5>
}

void CCProgressCtrl_s1Dlg::OnBnClickedSplit1()
{
	CString str = 
		_T("Choose an action from the dropdown menu.");
	AfxMessageBox(str);
}
