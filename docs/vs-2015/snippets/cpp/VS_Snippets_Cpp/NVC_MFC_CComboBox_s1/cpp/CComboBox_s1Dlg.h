// CComboBox_s1Dlg.h : header file
//

#pragma once
#include "afxwin.h"


// CCComboBox_s1Dlg dialog
class CCComboBox_s1Dlg : public CDialog
{
// Construction
public:
	CCComboBox_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CCOMBOBOX_S1_DIALOG };

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
	// Variable to access the combo box control
	CComboBox m_combobox;
	//</snippet1>
};
