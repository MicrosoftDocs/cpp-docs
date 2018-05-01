// CDateTimeCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CDateTimeCtrl_s1.h"
#include "CDateTimeCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCDateTimeCtrl_s1Dlg dialog




CCDateTimeCtrl_s1Dlg::CCDateTimeCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCDateTimeCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCDateTimeCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_dateTimeCtrl);
	DDX_Control(pDX, IDC_SPLIT1, m_splitbutton);
}

BEGIN_MESSAGE_MAP(CCDateTimeCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_SETMONTHCALSTYLE_WEEKNUMBER, &CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleWeeknumber)
	ON_COMMAND(ID_SETMONTHCALSTYLE_NOTODAY, &CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleNotoday)
	ON_COMMAND(ID_SETMONTHCALSTYLE_SHORTDAYSOFWEEK, &CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleShortdaysofweek)
	ON_COMMAND(ID_X_GETMONTHCALSTYLE, &CCDateTimeCtrl_s1Dlg::OnXGetmonthcalstyle)
	ON_COMMAND(ID_X_GETDATETIMEPICKERINFO, &CCDateTimeCtrl_s1Dlg::OnXGetdatetimepickerinfo)
	ON_COMMAND(ID_X_CLOSEMONTHCAL, &CCDateTimeCtrl_s1Dlg::OnXClosemonthcal)
	ON_BN_CLICKED(IDC_SPLIT1, &CCDateTimeCtrl_s1Dlg::OnBnClickedSplit1)
END_MESSAGE_MAP()


// CCDateTimeCtrl_s1Dlg message handlers

BOOL CCDateTimeCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	//<snippet2>
	// Add extra initialization here

	// Associate a menu with the splitbutton control.
	m_splitbutton.SetDropDownMenu(IDR_MENU1, 0);

	// Resize the date-time picker control.
	SIZE sz;
	m_dateTimeCtrl.GetIdealSize( &sz );
	if ((sz.cx != 0) && (sz.cy != 0)) {
		m_dateTimeCtrl.SetWindowPos(
			this, 
			0, 0, sz.cx, sz.cy,
			(SWP_NOMOVE | SWP_NOZORDER | SWP_NOREPOSITION | SWP_NOACTIVATE));
	}

	// End of extra initialization
	//</snippet2>

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCDateTimeCtrl_s1Dlg::OnPaint()
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
HCURSOR CCDateTimeCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
//<snippet3>
// Set the style of the month-calendar control dropdown.
void CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleWeeknumber()
{
	m_dateTimeCtrl.SetMonthCalStyle( MCS_WEEKNUMBERS );
}

void CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleNotoday()
{
	m_dateTimeCtrl.SetMonthCalStyle( MCS_NOTODAY );
}

void CCDateTimeCtrl_s1Dlg::OnSetmonthcalstyleShortdaysofweek()
{
	m_dateTimeCtrl.SetMonthCalStyle( MCS_SHORTDAYSOFWEEK  );
}
//</snippet3>
void CCDateTimeCtrl_s1Dlg::OnXGetmonthcalstyle()
{
	DWORD style;
	CString str;
	style = m_dateTimeCtrl.GetMonthCalStyle();
	str.Format(_T("Style = %lx"), style);
	AfxMessageBox(str, MB_ICONEXCLAMATION);
}
//<snippet4>
void CCDateTimeCtrl_s1Dlg::OnXGetdatetimepickerinfo()
{
	// Get information about the date-time picker control.
	DATETIMEPICKERINFO dtpi = {0};
	dtpi.cbSize = sizeof(DATETIMEPICKERINFO);
	BOOL rc = m_dateTimeCtrl.GetDateTimePickerInfo( &dtpi );
	if (rc == TRUE)
		AfxMessageBox(_T("Information retrieved"), 
			MB_ICONEXCLAMATION);
	else 
		AfxMessageBox(_T("Information was not retrieved"));
}
//</snippet4>
//<snippet5>
void CCDateTimeCtrl_s1Dlg::OnXClosemonthcal()
{
	// Close the month calendar control dropdown.
	m_dateTimeCtrl.CloseMonthCal();
}
//</snippet5>
void CCDateTimeCtrl_s1Dlg::OnBnClickedSplit1()
{
	CString str = _T("Choose an action from the dropdown menu...");
	AfxMessageBox(str, MB_ICONEXCLAMATION);
}
