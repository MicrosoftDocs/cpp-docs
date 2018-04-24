#pragma once


// CAnimDlg dialog

class CAnimDlg : public CDialog
{
   DECLARE_DYNAMIC(CAnimDlg)

public:
   CAnimDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CAnimDlg();

// Dialog Data
   enum { IDD = IDD_ANIMDIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CString m_strAviFile;

   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
