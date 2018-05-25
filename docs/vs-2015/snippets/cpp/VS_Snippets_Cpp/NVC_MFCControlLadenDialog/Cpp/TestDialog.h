#pragma once
#include "afxwin.h"

class CYourDataExchange : public CDataExchange
{
public:
   CYourDataExchange(CWnd* pWnd, BOOL bSaveAndValidate) 
      : CDataExchange(pWnd, bSaveAndValidate) {}
};

// CTestDialog dialog

class CTestDialog : public CDialog
{
   DECLARE_DYNAMIC(CTestDialog)

public:
   CTestDialog(CWnd* pParent = NULL);   // standard constructor
   virtual ~CTestDialog();

// Dialog Data
   enum { IDD = IDD_TESTDIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
public:
   BOOL m_bVal;
public:
   CString m_strName;
public:
   virtual BOOL OnInitDialog();
};
