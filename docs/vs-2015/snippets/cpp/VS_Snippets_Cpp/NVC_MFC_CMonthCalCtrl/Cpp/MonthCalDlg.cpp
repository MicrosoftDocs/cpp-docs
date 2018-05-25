// MonthCalDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CMonthCalCtrl.h"
#include "MonthCalDlg.h"


// CMonthCalDlg dialog

IMPLEMENT_DYNAMIC(CMonthCalDlg, CDialog)

CMonthCalDlg::CMonthCalDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMonthCalDlg::IDD, pParent)
{

}

CMonthCalDlg::~CMonthCalDlg()
{
}

void CMonthCalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMonthCalDlg, CDialog)
   ON_BN_CLICKED(IDC_RANGEBUTTON, &CMonthCalDlg::OnBnClickedRangebutton)
   ON_BN_CLICKED(IDC_GETTODAYBUTTON, &CMonthCalDlg::OnBnClickedGettodaybutton)
   ON_BN_CLICKED(IDC_CURSELBUTTON, &CMonthCalDlg::OnBnClickedCurselbutton)
   ON_BN_CLICKED(IDC_DAYSTATEBUTTON, &CMonthCalDlg::OnBnClickedDaystatebutton)
END_MESSAGE_MAP()


// CMonthCalDlg message handlers

BOOL CMonthCalDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet1>
   // Given two member objects m_calCtrl1 and m_calCtrl2, we can
   // create them in one of two ways.

   // Providing a point has the control with its top-left corner
   // at that point and sized automatically to show one month
   // page.

   CPoint pt(10, 10);
   VERIFY(m_calCtrl1.Create(WS_TABSTOP | WS_CHILD | WS_VISIBLE | 
      WS_BORDER | MCS_DAYSTATE, pt, this, IDC_MONTHCALCTRL1));

   // Providing a rectangle lets us completely control the size.
   // The control will paint as many complete month pages in the 
   // control's area as possible.

   CRect rect(300, 100, 470, 200);
   VERIFY(m_calCtrl2.Create(WS_TABSTOP | WS_CHILD | WS_VISIBLE | 
      WS_BORDER | MCS_MULTISELECT, rect, this, IDC_MONTHCALCTRL2));
// </Snippet1>

// <Snippet4>
   // Set colors for title text and title background to match
   // the Control Panel settings for inactive window captions.
   m_calCtrl1.SetColor(MCSC_TITLETEXT, ::GetSysColor(COLOR_INACTIVECAPTIONTEXT));
   m_calCtrl1.SetColor(MCSC_TITLEBK, ::GetSysColor(COLOR_INACTIVECAPTION));
// </Snippet4>

// <Snippet7>
   // This work isn't normally necessary, since the control will set 
   // the day of the week to match the system locale by itself.

   // Ask the system for the first day of the week
   TCHAR sz[2];
   GetLocaleInfo(LOCALE_SYSTEM_DEFAULT, LOCALE_IFIRSTDAYOFWEEK, sz, 2);

   // Convert from string result
   int nFirstDay = _ttoi(sz);

   // Set it and assert that it was successful.
   m_calCtrl1.SetFirstDayOfWeek(nFirstDay);
   ASSERT(m_calCtrl1.GetFirstDayOfWeek() == nFirstDay);
// </Snippet7>

// <Snippet8>
   // The control needs to have the MCS_MULTISELECT style
   // for the following code to work.

   // change the maximum selection count
   m_calCtrl2.SetMaxSelCount(10);

   // check that the change was really made
   ASSERT(m_calCtrl2.GetMaxSelCount() == 10);
// </Snippet8>

   return TRUE;  // return TRUE unless you set the focus to a control
}

// <Snippet2>
// This code fragment sets a variety of ranges in the
// control, and calls a separate function to show the
// set range to the user.

void CMonthCalDlg::OnBnClickedRangebutton()
{
   // set minimum of January 1st, 1995 with no maximum
   COleDateTime dtMin;
   COleDateTime dtMax;

   dtMin = COleDateTime(1995, 1, 1, 0, 0, 0);
   dtMax.SetStatus(COleDateTime::null);
   m_calCtrl1.SetRange(&dtMin, &dtMax);
   ShowRange(&m_calCtrl1);

   // set no minimum and a maximum of September 30th, 1997
   dtMin.SetStatus(COleDateTime::null);
   dtMax = COleDateTime(1997, 9, 30, 0, 0, 0);
   m_calCtrl1.SetRange(&dtMin, &dtMax);
   ShowRange(&m_calCtrl1);

   // set minimum of April 15, 1992 and maximum of June 5, 2002
   dtMin = COleDateTime(1992, 4, 15, 0, 0, 0);
   dtMax = COleDateTime(2002, 6, 5, 0, 0, 0);
   m_calCtrl1.SetRange(&dtMin, &dtMax);
   ShowRange(&m_calCtrl1);
}

void CMonthCalDlg::ShowRange(CMonthCalCtrl* pMoCalCtrl)
{
   ASSERT(pMoCalCtrl != NULL);
   CString strMessage;
   COleDateTime dtMinimum;
   COleDateTime dtMaximum;

   // Get the range
   DWORD dwResult = pMoCalCtrl->GetRange(&dtMinimum, &dtMaximum);

   // If a minimum was specified, format it
   // otherwise, indicate that there is no lower bound
   if (dwResult & GDTR_MIN)
      strMessage += dtMinimum.Format(_T("Minimum range is %x %X.\r\n"));
   else
      strMessage += _T("No minimum range.\r\n");

   // Treat maximum similarly
   if (dwResult & GDTR_MAX)
      strMessage += dtMaximum.Format(_T("Maximum range is %x %X.\r\n"));
   else
      strMessage += _T("No maximum range.\r\n");

   // Show the user
   AfxMessageBox(strMessage);
}
// </Snippet2>

// <Snippet3>
void CMonthCalDlg::OnBnClickedGettodaybutton()
{
   COleDateTime timeToday;
   if (m_calCtrl1.GetToday(timeToday))
   {
      // Format the date information from the value we received
      // and post a message box about it.
      CString str = timeToday.Format(VAR_DATEVALUEONLY);
      AfxMessageBox(str);

      // Set the control's "today" indicator to be five
      // days previous.
      timeToday -= 5;
      m_calCtrl1.SetToday(timeToday);
   }
   else
   {
      // Something is wrong!
      ASSERT(FALSE);
   }
}
// </Snippet3>

// <Snippet5>
void CMonthCalDlg::OnBnClickedCurselbutton()
{
   // All of these calls set the current selection to March 15, 1998.

   // with a COleDateTime
   COleDateTime dt1(1998, 3, 15, 0, 0, 0);
   m_calCtrl1.SetCurSel(dt1);

   // with a CTime
   CTime dt2(1998, 3, 15, 0, 0, 0);
   m_calCtrl1.SetCurSel(dt2);

   // with a SYSTEMTIME structure

   SYSTEMTIME sysTime;

   // set everything to zero
   memset(&sysTime, 0, sizeof(sysTime));

   // except for the date we want
   sysTime.wYear = 1998;
   sysTime.wMonth = 3;
   sysTime.wDay = 15;

   m_calCtrl1.SetCurSel(&sysTime);
}
// </Snippet5>

// <Snippet6>
void CMonthCalDlg::OnBnClickedDaystatebutton()
{
   // First, we must find the visible range. The array we pass to the
   // SetDayState() function must be large enough to hold days for all
   // of the visible months. Even if a month is _partially_ visible,
   // we must have MONTHDAYSTATE data for it in the array we pass.
   // GetMonthRange() returns the range of days currently visible in
   // the control, along with a count of visible months. This array
   // will be up to 2 months larger than the number of "pages" visible
   // in the control.

   SYSTEMTIME timeFrom;
   SYSTEMTIME timeUntil;
   int nCount = m_calCtrl1.GetMonthRange(&timeFrom, &timeUntil, GMR_DAYSTATE);

   // Allocate the state array based on the return value.

   LPMONTHDAYSTATE pDayState;
   pDayState = new MONTHDAYSTATE[nCount];
   memset(pDayState, 0, sizeof(MONTHDAYSTATE) * nCount);

   // Find the first fully visible month.

   int nIndex = (timeFrom.wDay == 1) ? 0 : 1;

   // Set the 4th day, 19th day, and 26th day of the first
   // _fully_ visible month as bold.

   pDayState[nIndex] |= 1 << 3;   // 4th day
   pDayState[nIndex] |= 1 << 18;   // 19th day
   pDayState[nIndex] |= 1 << 25;   // 25th day

   // Set state and clean up

   VERIFY(m_calCtrl1.SetDayState(nCount, pDayState));
   delete [] pDayState;
}
// </Snippet6>