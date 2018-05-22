#pragma once


// CCircDlg dialog

class CCircDlg : public CDialog
{
   DECLARE_DYNAMIC(CCircDlg)

public:
   CCircDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CCircDlg();

// Dialog Data
   enum { IDD = IDD_CIRCDLG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
   virtual void OnOK();
   CString m_strCaption;
};
