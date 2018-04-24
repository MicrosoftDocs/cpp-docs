// NVC_MFC_CHeaderCtrl_s4Dlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "cstringt.h"
#include "afxwin.h"

// CNVC_MFC_CHeaderCtrl_s4Dlg dialog
class CNVC_MFC_CHeaderCtrl_s4Dlg : public CDialog
{
// Construction
public:
	CNVC_MFC_CHeaderCtrl_s4Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CHEADERCTRL_S4_DIALOG };

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
	// <snippet6>
	CHeaderCtrl m_headerCtrl;
	CSplitButton m_splitButton;
	// </snippet6>
	BOOL controlCreated;
//
	afx_msg void OnBnClickedSplit1();
	afx_msg void OnBnDropDownSplit1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnXCreatecontrol();
	afx_msg void OnXHittest();
	afx_msg void OnXGetitemdropdownrect();
	afx_msg void OnXGetoverflowrect();
	afx_msg void OnXSetfocuseditem();
};
