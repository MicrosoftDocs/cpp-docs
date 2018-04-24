#pragma once

class CMyButton : public CButton
{
public:
   CMyButton() {};

   void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
};

// CButtonDlg dialog

class CButtonDlg : public CDialog
{
   DECLARE_DYNAMIC(CButtonDlg)

public:
   CButtonDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CButtonDlg();

// Dialog Data
   enum { IDD = IDD_NVC_MFC_CBUTTON_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   CMyButton m_mybutton;

   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
