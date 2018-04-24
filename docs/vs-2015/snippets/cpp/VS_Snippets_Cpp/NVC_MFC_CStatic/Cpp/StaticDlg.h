#pragma once


// CStaticDlg dialog

class CStaticDlg : public CDialog
{
	DECLARE_DYNAMIC(CStaticDlg)

public:
	CStaticDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CStaticDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CSTATIC_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
