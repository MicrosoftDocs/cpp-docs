// CButton_s1Dlg.h : header file
//

#pragma once


// CCButton_s1Dlg dialog
class CCButton_s1Dlg : public CDialog
{
// Construction
public:
	CCButton_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CBUTTON_S1_DIALOG };

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
	// Variable to access programatically defined command link control.
	CButton m_cmdLink;
	// Variable to access programatically defined split button control.	
	CButton m_splitButton;
//</snippet1>
};
