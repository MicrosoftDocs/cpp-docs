#pragma once


// CExtraDlg dialog

class CExtraDlg : public CDialog
{
   DECLARE_DYNAMIC(CExtraDlg)

public:
   CExtraDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CExtraDlg();

// Dialog Data
   enum { IDD = IDD_EXTRADIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CBitmapButton* m_pBitmapButton;

   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
