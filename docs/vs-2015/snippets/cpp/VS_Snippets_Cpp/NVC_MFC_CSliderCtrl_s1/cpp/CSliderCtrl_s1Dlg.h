// CSliderCtrl_s1Dlg.h : header file
//

#pragma once
#include "afxcmn.h"


// CCSliderCtrl_s1Dlg dialog
class CCSliderCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCSliderCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CSLIDERCTRL_S1_DIALOG };

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
	// Variable to access the slider control.
	CSliderCtrl m_sliderCtrl;
	// Lenght of the slider control's thumb.
	int thumbLength;
	//</snippet1>
	// Event handler
	afx_msg void OnBnClickedButton1();
	afx_msg void OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult);
};
