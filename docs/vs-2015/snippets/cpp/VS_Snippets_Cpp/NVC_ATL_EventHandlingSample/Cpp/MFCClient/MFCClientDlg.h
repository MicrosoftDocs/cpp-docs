// This is a part of the Active Template Library. 
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Active Template Library Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Active Template Library product.

// MFCClientDlg.h : header file
//

#if !defined(AFX_MFCCLIENTDLG_H__BC76490E_B55E_11D2_BA67_00C04F8EC847__INCLUDED_)
#define AFX_MFCCLIENTDLG_H__BC76490E_B55E_11D2_BA67_00C04F8EC847__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCClientDlg dialog

#import "../ATLEventHandling.tlb"
using namespace ATLEVENTHANDLINGLib;


class CMFCClientDlg : public CDialog
{
// Construction
public:
	CMFCClientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCClientDlg)
	enum { IDD = IDD_MFCCLIENT_DIALOG };
	CComboBox	m_cboObject;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCClientDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	ISwitchPtr m_pObject;

	// Generated message map functions
	//{{AFX_MSG(CMFCClientDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSelchangeObject();
	afx_msg void OnStart();
	afx_msg void OnStop();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCLIENTDLG_H__BC76490E_B55E_11D2_BA67_00C04F8EC847__INCLUDED_)
