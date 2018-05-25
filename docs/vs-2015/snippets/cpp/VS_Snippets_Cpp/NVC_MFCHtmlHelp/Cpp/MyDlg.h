// MyDlg.h : header file
//

#pragma once


// CMyDlg dialog
class CMyDlg : public CDialog
{
// Construction
public:
   CMyDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
   enum { IDD = IDD_NVC_MFCHTMLHELP_DIALOG };

   protected:
   virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
   HICON m_hIcon;

   // Generated message map functions
   virtual BOOL OnInitDialog();
   afx_msg void OnPaint();
   afx_msg HCURSOR OnQueryDragIcon();
   DECLARE_MESSAGE_MAP()
public:
   afx_msg BOOL OnHelpInfo(HELPINFO* pHelpInfo);
public:
   afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
protected:
   virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
   void OnNavComplete(HHN_NOTIFY* phhn, LRESULT* pResult);
public:
   virtual void HtmlHelp(DWORD_PTR dwData, UINT nCmd = 0x000F);
};
