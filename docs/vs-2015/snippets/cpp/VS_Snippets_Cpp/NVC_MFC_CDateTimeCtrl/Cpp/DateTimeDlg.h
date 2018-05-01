#pragma once


// CDateTimeDlg dialog

class CDateTimeDlg : public CDialog
{
   DECLARE_DYNAMIC(CDateTimeDlg)

public:
   CDateTimeDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CDateTimeDlg();

// Dialog Data
   enum { IDD = IDD_NVC_MFC_CDATETIMECTRL_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CDateTimeCtrl m_DateTimeCtrl;
   CFont m_MonthFont;

   void ShowRange(CDateTimeCtrl* pCtrl);

   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();

   void OnDropDownDateTimeCtrl(NMHDR* pNMHDR, LRESULT* pResult);
public:
   afx_msg void OnBnClickedRangesbutton();
public:
   afx_msg void OnBnClickedTimebutton();
};
