// CLinkCtrl_s1Dlg.h : header file
//

#pragma once
#include "afxcmn.h"


// CCLinkCtrl_s1Dlg dialog
class CCLinkCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCLinkCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CLINKCTRL_S1_DIALOG };

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
	// <snippet2>
	afx_msg void OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMClickSyslink2(NMHDR *pNMHDR, LRESULT *pResult);
	// Link variable associated with resource editor CLinkCtrl control.
	CLinkCtrl m_Link1;
	// Link variable associated with programmatic CLinkCtrl control.
	CLinkCtrl m_Link2;
	// </snippet2>
};
