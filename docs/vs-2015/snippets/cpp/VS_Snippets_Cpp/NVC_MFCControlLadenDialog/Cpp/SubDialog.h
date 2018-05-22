#pragma once


// CSubDialog dialog

class CSubDialog : public CDialog
{
   DECLARE_DYNAMIC(CSubDialog)

public:
   CSubDialog(CWnd* pParent = NULL);   // standard constructor
   virtual ~CSubDialog();

// Dialog Data
   enum { IDD = IDD_SUBDIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CButton m_wndMyBtn;

   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
