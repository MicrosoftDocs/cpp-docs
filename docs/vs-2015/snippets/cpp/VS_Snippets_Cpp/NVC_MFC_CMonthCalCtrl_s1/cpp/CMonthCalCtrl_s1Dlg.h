// CMonthCalCtrl_s1Dlg.h : header file
//

#pragma once
#include "afxdtctl.h"
#include "afxwin.h"


// CCMonthCalCtrl_s1Dlg dialog
class CCMonthCalCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCMonthCalCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CMONTHCALCTRL_S1_DIALOG };

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
	//<snippet9>
	// Variable used to reference the month calendar control.
	CMonthCalCtrl m_monthCalCtrl;
	// Variable used to reference the splitbutton control.
	CSplitButton m_splitButton;
	//</snippet9>

	afx_msg void OnXGetmaxtodaywidth();
	afx_msg void OnSetviewSetmonthview();
	afx_msg void OnSetviewSetyearview();
	afx_msg void OnXGetcurrentview();
	afx_msg void OnXGetcalendargridinfo();
	afx_msg void OnXGetcalid();
	afx_msg void OnSetcalidJapaneseemperorera();
	afx_msg void OnSetcalidGregorian();
	afx_msg void OnBnClickedSplit1();
	afx_msg void OnXSetcalendarborder();
	afx_msg void OnSetviewSetdecadeview();
	afx_msg void OnSetviewSetcenturyview();
};
