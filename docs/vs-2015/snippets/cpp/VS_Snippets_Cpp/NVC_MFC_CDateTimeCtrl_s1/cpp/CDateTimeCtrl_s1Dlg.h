// CDateTimeCtrl_s1Dlg.h : header file
//

#pragma once
#include "afxdtctl.h"
#include "afxwin.h"


// CCDateTimeCtrl_s1Dlg dialog
class CCDateTimeCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCDateTimeCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CDATETIMECTRL_S1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//<snippet1>
	// Variable to access date-time control.
	CDateTimeCtrl m_dateTimeCtrl;
	// Variable to access the splitbutton control
	CSplitButton m_splitbutton;
	//</snippet1>
	// Event handlers
	afx_msg void OnSetmonthcalstyleWeeknumber();
	afx_msg void OnSetmonthcalstyleNotoday();
	afx_msg void OnSetmonthcalstyleShortdaysofweek();
	afx_msg void OnXGetmonthcalstyle();
	afx_msg void OnXGetdatetimepickerinfo();
	afx_msg void OnXClosemonthcal();
	afx_msg void OnBnClickedSplit1();
};
