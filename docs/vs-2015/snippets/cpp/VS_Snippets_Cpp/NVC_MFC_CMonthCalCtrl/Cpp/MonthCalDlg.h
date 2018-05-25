#pragma once


// CMonthCalDlg dialog

class CMonthCalDlg : public CDialog
{
	DECLARE_DYNAMIC(CMonthCalDlg)

public:
	CMonthCalDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMonthCalDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CMONTHCALCTRL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CMonthCalCtrl m_calCtrl1;
   CMonthCalCtrl m_calCtrl2;
   void ShowRange(CMonthCalCtrl* pCtrl);

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
public:
   afx_msg void OnBnClickedRangebutton();
public:
   afx_msg void OnBnClickedGettodaybutton();
public:
   afx_msg void OnBnClickedCurselbutton();
public:
   afx_msg void OnBnClickedDaystatebutton();
};
