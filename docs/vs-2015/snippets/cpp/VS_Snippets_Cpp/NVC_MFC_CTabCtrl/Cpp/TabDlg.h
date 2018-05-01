#pragma once
#include "afxcmn.h"


// CTabDlg dialog

class CTabDlg : public CDialog
{
	DECLARE_DYNAMIC(CTabDlg)

public:
	CTabDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTabDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CTABCTRL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   CTabCtrl m_TabCtrl;
public:
   afx_msg void OnSize(UINT nType, int cx, int cy);
public:
   virtual BOOL OnInitDialog();
public:
   afx_msg void OnDeleteItem();
public:
   afx_msg void OnChangeItem();
public:
   afx_msg void OnChangeSize();
};
