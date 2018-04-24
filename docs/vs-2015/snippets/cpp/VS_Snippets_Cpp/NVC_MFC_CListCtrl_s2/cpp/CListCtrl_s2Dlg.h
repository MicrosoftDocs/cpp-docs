// CListCtrl_s2Dlg.h : header file
//
#pragma once
#include "afxcmn.h"

// CCListCtrl_s2Dlg dialog
class CCListCtrl_s2Dlg : public CDialog
{
// Construction
public:
	CCListCtrl_s2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CLISTCTRL_S2_DIALOG };

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
	//<snippet6>
public:
	// Variable used to access the list control.
	CListCtrl m_listCtrl; 
	//</snippet6>
	// Event handlers
	afx_msg void OnBnClickedButton1(); // SortItemsEx
	afx_msg void OnBnClickedButton2(); // GetGroupInfoByIndex
	afx_msg void OnBnClickedButton3(); // GetItemIndexRect
	afx_msg void OnBnClickedButton4(); // GetGroupRect
	afx_msg void OnBnClickedButton5(); // MapIndexToID
};
