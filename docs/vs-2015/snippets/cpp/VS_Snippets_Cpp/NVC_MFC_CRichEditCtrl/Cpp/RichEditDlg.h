#pragma once


// CRichEditDlg dialog

class CRichEditDlg : public CDialog
{
	DECLARE_DYNAMIC(CRichEditDlg)

public:
	CRichEditDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CRichEditDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CRICHEDITCTRL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CRichEditCtrl m_myRichEditCtrl;

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
