#pragma once


// CRebarDlg dialog

class CRebarDlg : public CDialog
{
	DECLARE_DYNAMIC(CRebarDlg)

public:
	CRebarDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CRebarDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CREBARCTRL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CReBar m_wndReBar;
   CDialogBar m_wndDlgBar;

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
