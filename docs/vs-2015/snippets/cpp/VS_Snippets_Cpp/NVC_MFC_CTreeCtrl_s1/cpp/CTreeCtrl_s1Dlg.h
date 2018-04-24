// CTreeCtrl_s1Dlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CCTreeCtrl_s1Dlg dialog
class CCTreeCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCTreeCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CTREECTRL_S1_DIALOG };

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
	//<snippet1>
public:
	// Variable to access tree control.
	CTreeCtrl m_treeCtrl;
	// Variable to access splitbutton control.
	CSplitButton m_splitbutton;
	// Accessibility identifier
	UINT accIdUS;
	// HTREEITEMs
	HTREEITEM hCountry;
	HTREEITEM hPA;
	HTREEITEM hWA;
	//</snippet1>
	// Event handlers
	afx_msg void OnBnClickedSplit1();
	afx_msg void OnXShowinfotip();
	afx_msg void OnXGetitempartrect();
	afx_msg void OnXGetlastvisibleitem();
	afx_msg void OnXSetitemexpandedimageindex();
	afx_msg void OnTvnGetInfoTipTree1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnXSetitemstateex();
};
