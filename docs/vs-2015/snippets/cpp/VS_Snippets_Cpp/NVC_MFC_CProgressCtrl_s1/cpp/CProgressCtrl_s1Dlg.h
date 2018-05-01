// CProgressCtrl_s1Dlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CCProgressCtrl_s1Dlg dialog
class CCProgressCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCProgressCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CPROGRESSCTRL_S1_DIALOG };

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
// 
	static const int nMarqueeInterval = 10;
public:
	// Variable used to access the splitbutton control.
	CSplitButton m_splitbutton;
	//<snippet9>
	// Variable to access the progress control
	CProgressCtrl m_progressCtrl;
	//</snippet9>
	// Event handlers
	afx_msg void OnSetbarcolorRed();
	afx_msg void OnSetbarcolorGreen();
	afx_msg void OnSetbarcolorBlue();
	afx_msg void OnSetbarcolorOri();
	afx_msg void OnSetmarqueeOn();
	afx_msg void OnSetmarqueeOff();
	afx_msg void OnXGetstep();
	afx_msg void OnSetstateNormal();
	afx_msg void OnSetstatePaused();
	afx_msg void OnXGetstate();
	afx_msg void OnBnClickedSplit1();
};
