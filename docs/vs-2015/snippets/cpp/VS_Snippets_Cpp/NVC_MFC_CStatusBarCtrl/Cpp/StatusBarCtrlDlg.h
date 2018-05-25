#pragma once


// CStatusBarCtrlDlg dialog

class CStatusBarCtrlDlg : public CDialog
{
	DECLARE_DYNAMIC(CStatusBarCtrlDlg)

public:
	CStatusBarCtrlDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CStatusBarCtrlDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CSTATUSBARCTRL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CStatusBarCtrl m_wndSBC;

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
