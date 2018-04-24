#pragma once
#include "afxwin.h"

class CMyEdit : public CEdit
{
public:
   CMyEdit() {}
   ~CMyEdit() {}
public:
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

// CEditDlg dialog

class CEditDlg : public CDialog
{
   DECLARE_DYNAMIC(CEditDlg)

public:
   CEditDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CEditDlg();

// Dialog Data
   enum { IDD = IDD_NVC_MFC_CEDIT_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
public:
   CMyEdit m_myEdit;
};
