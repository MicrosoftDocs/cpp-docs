// CMonthCalCtrl_s1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "CMonthCalCtrl_s1.h"
#include "CMonthCalCtrl_s1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCMonthCalCtrl_s1Dlg dialog




CCMonthCalCtrl_s1Dlg::CCMonthCalCtrl_s1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCMonthCalCtrl_s1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCMonthCalCtrl_s1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MONTHCALENDAR1, m_monthCalCtrl);
	DDX_Control(pDX, IDC_SPLIT1, m_splitButton);
}

BEGIN_MESSAGE_MAP(CCMonthCalCtrl_s1Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_X_GETMAXTODAYWIDTH, &CCMonthCalCtrl_s1Dlg::OnXGetmaxtodaywidth)
	ON_COMMAND(ID_SETVIEW_SETMONTHVIEW, &CCMonthCalCtrl_s1Dlg::OnSetviewSetmonthview)
	ON_COMMAND(ID_SETVIEW_SETYEARVIEW32784, &CCMonthCalCtrl_s1Dlg::OnSetviewSetyearview)
	ON_COMMAND(ID_X_GETCURRENTVIEW, &CCMonthCalCtrl_s1Dlg::OnXGetcurrentview)
	ON_COMMAND(ID_X_GETCALENDARGRIDINFO, &CCMonthCalCtrl_s1Dlg::OnXGetcalendargridinfo)
	ON_COMMAND(ID_X_GETCALID, &CCMonthCalCtrl_s1Dlg::OnXGetcalid)
	ON_COMMAND(ID_SETCALID_JAPANESEEMPERORERA, &CCMonthCalCtrl_s1Dlg::OnSetcalidJapaneseemperorera)
	ON_COMMAND(ID_SETCALID_GREGORIAN, &CCMonthCalCtrl_s1Dlg::OnSetcalidGregorian)
	ON_BN_CLICKED(IDC_SPLIT1, &CCMonthCalCtrl_s1Dlg::OnBnClickedSplit1)
	ON_COMMAND(ID_X_SETCALENDARBORDER, &CCMonthCalCtrl_s1Dlg::OnXSetcalendarborder)
	ON_COMMAND(ID_SETVIEW_SETDECADEVIEW, &CCMonthCalCtrl_s1Dlg::OnSetviewSetdecadeview)
	ON_COMMAND(ID_SETVIEW_SETCENTURYVIEW, &CCMonthCalCtrl_s1Dlg::OnSetviewSetcenturyview)
END_MESSAGE_MAP()


// CCMonthCalCtrl_s1Dlg message handlers

BOOL CCMonthCalCtrl_s1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// Add extra initialization here.

	m_splitButton.SetDropDownMenu(IDR_MENU1, 0);

	// End of extra initialization.

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCMonthCalCtrl_s1Dlg::OnPaint()
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
HCURSOR CCMonthCalCtrl_s1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCMonthCalCtrl_s1Dlg::OnXGetmaxtodaywidth()
{
	//<snippet1>
	DWORD width = m_monthCalCtrl.GetMaxTodayWidth();
	CString str;
	str.Format(_T("The maximum today width is %d."), width);
	AfxMessageBox(str, MB_ICONINFORMATION);
	//</snippet1>
}

//<snippet2>
void CCMonthCalCtrl_s1Dlg::OnSetviewSetmonthview()
{
	m_monthCalCtrl.SetMonthView();
}

void CCMonthCalCtrl_s1Dlg::OnSetviewSetyearview()
{
	m_monthCalCtrl.SetYearView();
}

void CCMonthCalCtrl_s1Dlg::OnSetviewSetdecadeview()
{
	m_monthCalCtrl.SetDecadeView();
}

void CCMonthCalCtrl_s1Dlg::OnSetviewSetcenturyview()
{
	m_monthCalCtrl.SetCenturyView();
}
//</snippet2>
void CCMonthCalCtrl_s1Dlg::OnXGetcurrentview()
{
//<snippet7>
	CString str;
	CString msg = _T("The current calendar displays %s view.");
	DWORD view = m_monthCalCtrl.GetCurrentView();
	switch (view) {
		case MCMV_MONTH:
			str.Format(msg, _T("month"));
			break;
		case MCMV_YEAR:
			str.Format(msg, _T("year"));
			break;
		case MCMV_DECADE:
			str.Format(msg, _T("decade"));
			break;
		case MCMV_CENTURY:
			str.Format(msg, _T("century"));
			break;
		default:
			str.Format(msg, _T("an unknown"));
			break;
	}
	AfxMessageBox(str, MB_ICONINFORMATION);
//</snippet7>
}
void CCMonthCalCtrl_s1Dlg::OnXGetcalendargridinfo()
{
	//<snippet3>
	WCHAR name[26];
	name[0] = _T('\0');
	MCGRIDINFO gridInfo;
	gridInfo.cbSize = sizeof(MCGRIDINFO);
	gridInfo.dwPart = MCGIP_CALENDARHEADER;
	gridInfo.dwFlags = MCGIF_NAME;
	gridInfo.iCalendar = 0;
	gridInfo.pszName = reinterpret_cast<PWSTR>(&name);
	gridInfo.cchName = sizeof(name);

	m_monthCalCtrl.GetCalendarGridInfo( &gridInfo );

	CString str;
	CString calendarDate(name);
	str.Format(_T("Calendar date: '%s'"), calendarDate);
	AfxMessageBox(str, MB_ICONINFORMATION);
	//</snippet3>
}

void CCMonthCalCtrl_s1Dlg::OnSetcalidJapaneseemperorera()
{
	//<snippet4>
	BOOL rc = m_monthCalCtrl.SetCalID(CAL_JAPAN);
	CString str = _T("Calendar change ");;
	if (rc == TRUE)
		str += _T("succeeded.");
	else {
		str += _T("failed.\n");
		str += _T("Perhaps this locale is not installed.");
	}
	AfxMessageBox(str, MB_ICONINFORMATION);
	//</snippet4>
}

void CCMonthCalCtrl_s1Dlg::OnSetcalidGregorian()
{
	BOOL rc = m_monthCalCtrl.SetCalID(CAL_GREGORIAN_US);
	CString str = _T("Calendar change ");;
	if (rc == TRUE)
		str += _T("succeeded.");
	else {
		str += _T("failed.\n");
		str += _T("Perhaps this locale is not installed.");
	}
	AfxMessageBox(str, MB_ICONINFORMATION);
}
void CCMonthCalCtrl_s1Dlg::OnXGetcalid()
{
	//<snippet5>
	CString str;
	CString msg = _T("Calendar ID is %s.");
	CALID id = m_monthCalCtrl.GetCalID();
	if (id == CAL_GREGORIAN)
		str.Format(msg, _T("Gregorian (localized)"));
	else if (id == CAL_JAPAN)
		str.Format(msg, _T("Japanese Emperor Era"));
	else if (id == CAL_GREGORIAN_US)
		str.Format(msg, _T("Gregorian (English)"));
	else
		str.Format(_T("Calendar ID = %d."), id);
	AfxMessageBox(str, MB_ICONINFORMATION);
	//</snippet5>
}
void CCMonthCalCtrl_s1Dlg::OnBnClickedSplit1()
{
	CString str = _T("Choose an action from the dropdown menu.");
	AfxMessageBox(str, MB_ICONINFORMATION);
}

void CCMonthCalCtrl_s1Dlg::OnXSetcalendarborder()
{
	//<snippet6>
	// Use the GetCalendarBorder() method to determine whether 
	// this method succeeded or failed.
	m_monthCalCtrl.SetCalendarBorder( 8 );
	//</snippet6>
}
