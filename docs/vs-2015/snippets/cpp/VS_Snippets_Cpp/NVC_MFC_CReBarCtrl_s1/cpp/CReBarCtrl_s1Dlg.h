// CReBarCtrl_s1Dlg.h : header file
//

#pragma once


// CCReBarCtrl_s1Dlg dialog
class CCReBarCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCReBarCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CREBARCTRL_S1_DIALOG };

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
	CReBarCtrl m_rebar;
	BOOL bRet;
	static const int TOTAL_BANDS = 5;
	static const int BUFFER_SIZE = 10;
	//</snippet1>
};
