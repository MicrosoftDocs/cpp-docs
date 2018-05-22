#pragma once


// CListCtrlDlg dialog

class CListCtrlDlg : public CDialog
{
	DECLARE_DYNAMIC(CListCtrlDlg)

public:
	CListCtrlDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CListCtrlDlg();
	void Sort();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CLISTCTRL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CListCtrl m_myListCtrl;
   CImageList m_lcImageList;
   CListCtrl m_myVirtualListCtrl;
   

   static int CALLBACK MyCompareProc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();

   afx_msg void OnClick(NMHDR* pNMHDR, LRESULT* pResult);
   afx_msg void OnRClick(NMHDR* pNMHDR, LRESULT* pResult);
   afx_msg void OnDblClk(NMHDR* pNMHDR, LRESULT* pResult);
};