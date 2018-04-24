// DateTimeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFC_CDateTimeCtrl.h"
#include "DateTimeDlg.h"


// CDateTimeDlg dialog

IMPLEMENT_DYNAMIC(CDateTimeDlg, CDialog)

CDateTimeDlg::CDateTimeDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CDateTimeDlg::IDD, pParent)
{

}

CDateTimeDlg::~CDateTimeDlg()
{
}

void CDateTimeDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDateTimeDlg, CDialog)
   ON_NOTIFY(DTN_DROPDOWN, IDC_DATETIMECTRL, &CDateTimeDlg::OnDropDownDateTimeCtrl)
   ON_BN_CLICKED(IDC_RANGESBUTTON, &CDateTimeDlg::OnBnClickedRangesbutton)
   ON_BN_CLICKED(IDC_TIMEBUTTON, &CDateTimeDlg::OnBnClickedTimebutton)
END_MESSAGE_MAP()


// CDateTimeDlg message handlers

BOOL CDateTimeDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

// <Snippet1>
   // choose an arbitrary rectangle for creation
   CRect rect(20, 20, 120, 45);
   m_DateTimeCtrl.Create(WS_VISIBLE | WS_CHILD | WS_TABSTOP | DTS_SHOWNONE | 
      DTS_SHORTDATEFORMAT, rect, this, IDC_DATETIMECTRL);
// </Snippet1>

// <Snippet2>
   // Set the color for the text in the control and 
   // assure it was set properly. Unlike the GetMonthCalCtrl() member,
   // GetMonthCalColor() and SetMonthCalColor() can be used at any time.
   m_DateTimeCtrl.SetMonthCalColor(MCSC_TEXT, RGB(255, 0, 0));
   VERIFY(m_DateTimeCtrl.GetMonthCalColor(MCSC_TEXT) == RGB(255, 0, 0));
// </Snippet2>

// <Snippet6>
   // The control will create itself with a format that matches the 
   // locale setting in Control Panel. But we can force a particular 
   // format with a call to SetFormat(). This call forces the format 
   // dd-MMM-yy, which would show 03-APR-98 for April 3rd, 1998.
   m_DateTimeCtrl.SetFormat(_T("dd-MMM-yy"));
// </Snippet6>

// <Snippet7>
   // The following code example would most likely appear
   // in the OnInitDialog function of your dialog class.  
   // It creates a font (Arial, 10 pixels high) and if successful,
   // stores the result in m_MonthFont, a member of your
   // dialog class declared as follows:
   //    CFont m_MonthFont;
   // SetMonthCalFont is then called passing in the new font, 
   // causing the month calendar control to display all
   // text and dates with an Arial font.

   //initializing the necessary members of the LOGFONT
   // structure

   LOGFONT lf;
   memset(&lf, 0, sizeof(lf));
   lf.lfHeight = 10;
   _tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("Arial"));

   if (m_MonthFont.CreateFontIndirect(&lf))
   {
      // if successful, set the month calendar font
      m_DateTimeCtrl.SetMonthCalFont((HFONT)m_MonthFont);
   }
// </Snippet7>

// <Snippet8>
   // set with a CTime
   CTime timeTime(1998, 4, 3, 0, 0, 0);
   VERIFY(m_DateTimeCtrl.SetTime(&timeTime));

   // set with a COleDateTime object
   COleDateTime oletimeTime(1998, 4, 3, 0, 0, 0);
   VERIFY(m_DateTimeCtrl.SetTime(oletimeTime));

   // set using the SYSTEMTIME
   SYSTEMTIME sysTime;
   memset(&sysTime, 0, sizeof(sysTime));
   sysTime.wYear = 1998;
   sysTime.wMonth = 4;
   sysTime.wDay = 3;
   VERIFY(m_DateTimeCtrl.SetTime(&sysTime));
// </Snippet8>

   return TRUE;  // return TRUE unless you set the focus to a control
}

// <Snippet3>
void CDateTimeDlg::OnDropDownDateTimeCtrl(NMHDR* pNMHDR, LRESULT* pResult)
{
   UNREFERENCED_PARAMETER(pNMHDR);

   // note that GetMonthCalCtrl() will only return a pointer to the 
   // month calendar control while the control actually exists--that is,
   // while it has been dropped-down by the user. Otherwise, the function
   // returns NULL. One appropriate time to get the control is while 
   // handling the DTN_DROPDOWN notification for the date time picker 
   // control.

   // get the control
   CMonthCalCtrl* pMoCalCtrl = m_DateTimeCtrl.GetMonthCalCtrl();
   ASSERT(pMoCalCtrl != NULL);

   // now, pMoCalCtrl is useful...

   *pResult = 0;
}
// </Snippet3>

// <Snippet4>
// This function will set several ranges in the control, then
// call the ShowRange() function to show the set ranges to the
// user.
void CDateTimeDlg::OnBnClickedRangesbutton()
{
   // Set minimum of January 1st, 1995 with no maximum.
   COleDateTime dtMin;
   COleDateTime dtMax;

   dtMin = COleDateTime(1995, 1, 1, 0, 0, 0);
   dtMax.SetStatus(COleDateTime::null);
   m_DateTimeCtrl.SetRange(&dtMin, &dtMax);
   ShowRange(&m_DateTimeCtrl);

   // Set no minimum and maximum of September 30th, 1997.
   dtMin.SetStatus(COleDateTime::null);
   dtMax = COleDateTime(1997, 9, 30, 0, 0, 0);
   m_DateTimeCtrl.SetRange(&dtMin, &dtMax);
   ShowRange(&m_DateTimeCtrl);

   // Set minimum of April 15, 1992 and maximum of June 5, 2002.
   dtMin = COleDateTime(1992, 4, 15, 0, 0, 0);
   dtMax = COleDateTime(2002, 6, 5, 0, 0, 0);
   m_DateTimeCtrl.SetRange(&dtMin, &dtMax);
   ShowRange(&m_DateTimeCtrl);
}

void CDateTimeDlg::ShowRange(CDateTimeCtrl* pCtrl)
{
   ASSERT(pCtrl != NULL);
   CString strMessage;
   COleDateTime dtMinimum;
   COleDateTime dtMaximum;

   // Get the range.
   DWORD dwResult = pCtrl->GetRange(&dtMinimum, &dtMaximum);

   // If a minimum was specified, format it.
   // Otherwise, indicate that there is no lower bound.
   if (dwResult & GDTR_MIN)
      strMessage += dtMinimum.Format(_T("Minimum range is %x %X.\r\n"));
   else
      strMessage += _T("No minimum range.\r\n");

   // Treat maximum similarly.
   if (dwResult & GDTR_MAX)
      strMessage += dtMaximum.Format(_T("Maximum range is %x %X.\r\n"));
   else
      strMessage += _T("No maximum range.\r\n");

   // Show the user.
   AfxMessageBox(strMessage);
}
// </Snippet4>

// <Snippet5>
void CDateTimeDlg::OnBnClickedTimebutton()
{
   // get as a CTime
   CTime timeTime;
   DWORD dwResult = m_DateTimeCtrl.GetTime(timeTime);
   if (dwResult == GDT_VALID)
   {
      // the user checked the box and specified data
      CString str;

      // is it a time-only control, or a date-only control?
      if ((m_DateTimeCtrl.GetStyle() & DTS_TIMEFORMAT) == DTS_TIMEFORMAT)
         str = timeTime.Format(_T("%X"));
      else
         str = timeTime.Format(_T("%x"));
      AfxMessageBox(str);
   }
   else
   {
      // the user unmarked the "none" box
      AfxMessageBox(_T("Time not set!"));
   }

   // Calling as SYSTIME is much the same, but calling for a COleDateTime
   // has us test the state of the COleDateTime object for validity to 
   // see if the user did or didn't check the "none" box.
}
// </Snippet5>