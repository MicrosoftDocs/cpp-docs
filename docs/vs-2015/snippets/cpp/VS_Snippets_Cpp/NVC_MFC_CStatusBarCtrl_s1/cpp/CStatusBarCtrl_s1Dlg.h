// CStatusBarCtrl_s1Dlg.h : header file
//

#pragma once


// CCStatusBarCtrl_s1Dlg dialog
class CCStatusBarCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCStatusBarCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CSTATUSBARCTRL_S1_DIALOG };

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
	CStatusBarCtrl m_statusBar;
	//</snippet1>
	afx_msg void OnBnClickedButton1();
};
