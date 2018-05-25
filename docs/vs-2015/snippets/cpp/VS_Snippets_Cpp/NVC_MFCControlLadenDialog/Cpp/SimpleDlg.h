#pragma once
#include "afxwin.h"


// CSimpleDlg dialog

class CSimpleDlg : public CDialog
{
   DECLARE_DYNAMIC(CSimpleDlg)

public:
   CSimpleDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CSimpleDlg();

// Dialog Data
   enum { IDD = IDD_SIMPLEDIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   int m_nMyValue;
   int m_nPrevValue;
   CString* m_pMyString;

   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
protected:
   virtual void OnCancel();
public:
   virtual BOOL OnInitDialog();
public:
   CEdit m_cMyEdit;
public:
   CListBox m_cMyList;
protected:
   virtual void OnOK();
public:
   afx_msg void OnEnChangeSimpleedit();
};
