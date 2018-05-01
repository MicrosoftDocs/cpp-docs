// MFCControlLadenDialogDlg.h : header file
//

#pragma once
#include "afxdtctl.h"
#include "afxcmn.h"
#include "afxwin.h"

#include "MyDlgBar.h"

// <Snippet44>
class CTestDialog;
// </Snippet44>

class CSimpleDlg;

class CMyDlgBar;

struct OwnerDrawItem
{
   CString m_strItemText;
   CString m_strSubItem1Text;
   CString m_strSubItem2Text;
   int m_iImage;
};

// CMyDialog dialog
class CMyDialog : public CDialog
{
// Construction
public:
   CMyDialog(CWnd* pParent = NULL);	// standard constructor
   ~CMyDialog();

// Dialog Data
   enum { IDD = IDD_MFCCONTROLLADENDIALOG_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
protected:
   HICON m_hIcon;

   CFont m_MonthCalFont;

   // Generated message map functions
   virtual BOOL OnInitDialog();
   afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
   afx_msg void OnPaint();
   afx_msg HCURSOR OnQueryDragIcon();
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnNMRclickTree1(NMHDR *pNMHDR, LRESULT *pResult);
public:
   afx_msg void OnDtnDropdownDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult);
public:
   afx_msg void OnDtnFormatDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult);
public:
   afx_msg void OnDtnFormatqueryDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult);
public:
   CDateTimeCtrl m_DateTimeCtrl;
public:
   CComboBoxEx m_ComboBoxEx;
   CImageList m_ComboImageList;
public:
   CListCtrl m_ListCtrl;
   CImageList m_ListImageList;
public:
   afx_msg void OnBnClickedHotkeyassign();
public:
   CHotKeyCtrl m_HotKeyCtrl;
public:
   CListCtrl m_WorkAreaListCtrl;
public:
   afx_msg void OnLvnGetdispinfoList3(NMHDR *pNMHDR, LRESULT *pResult);
public:
   CListCtrl m_OwnerDrawListCtrl;
   CImageList m_OwnerDrawImageList;
   CArray<OwnerDrawItem, OwnerDrawItem> m_Items;
public:
   afx_msg void OnLvnOdcachehintList3(NMHDR *pNMHDR, LRESULT *pResult);
public:
   afx_msg void OnMcnGetdaystateMonthcalendar1(NMHDR *pNMHDR, LRESULT *pResult);
public:
   CMonthCalCtrl m_MonthCalCtrl;
public:
   CReBar m_Rebar;
   CBitmap m_RebarBitmap;
   CToolBar m_Toolbar1;
   CToolBar m_Toolbar2;
   CImageList m_RebarImageList;
   CMyDlgBar m_MyDlgBar;
public:
   CStatusBarCtrl m_StatusBarCtrl;
   HICON m_StatusBarIcon;
public:
   CTabCtrl m_TabCtrl;
public:
   afx_msg void OnNMClickTab1(NMHDR *pNMHDR, LRESULT *pResult);
public:
   CToolBarCtrl m_ToolBarCtrl;
   CImageList m_ToolBarImages;
   CImageList m_ToolBarDisabledImages;
   afx_msg void OnTbnDropDownToolBar1(NMHDR *pNMHDR, LRESULT *pResult);
// <Snippet53>
   afx_msg BOOL OnTtnNeedText(UINT id, NMHDR *pNMHDR, LRESULT *pResult);
// </Snippet53>
public:
// <Snippet74>
   // Declare a CToolTipCtrl object.
   CToolTipCtrl m_ToolTipCtrl;
// </Snippet74>
public:
   virtual BOOL PreTranslateMessage(MSG* pMsg);
public:
   CTreeCtrl m_TreeCtrl;
public:
   afx_msg void OnMenuShowdialog();
public:
// <Snippet45>
   CTestDialog* m_pTestDlg;
// </Snippet45>
public:
   afx_msg void OnMenuShowmodelessdialog();
public:
   CButton m_Checkbox;
   inline CButton* GetMyCheckbox();
public:
   afx_msg void OnMenuShowanimdialog();
public:
   afx_msg void OnMenuShowextradialog();
public:
   afx_msg void OnMenuShowSimpleDialog();
   CSimpleDlg* m_pSimpleDlg;
public:
   afx_msg void OnMenuShowAboutDialog();
public:
   afx_msg void OnMenuShowSimpleModal();
};
