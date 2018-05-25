// CSplitButton_s2Dlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "MyPagerCtrl.h"

// Forward declarations
//class CMyPagerCtrl;

// CCSplitButton_s2Dlg dialog
class CCSplitButton_s2Dlg : public CDialog
{
// Construction
public:
	CCSplitButton_s2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CSPLITBUTTON_S2_DIALOG };

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
	CSplitButton m_splitButton;
	CMyPagerCtrl m_pager;
	CButton m_button;
	afx_msg void OnBnClickedSplit1();
	afx_msg void OnXRecalcsize();
	afx_msg void OnXColor();
	afx_msg void OnXBorder();
	afx_msg void OnXIsbuttoninvisible();
	afx_msg void OnXScrollposition();
};
