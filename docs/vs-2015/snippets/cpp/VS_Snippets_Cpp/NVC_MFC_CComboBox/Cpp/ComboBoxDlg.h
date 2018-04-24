#pragma once

class CMyComboBox : public CComboBox
{
public:
   CMyComboBox() {}
   virtual ~CMyComboBox() {}

public:
   virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
public:
   virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
public:
   virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
public:
   virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
};

// CComboBoxDlg dialog

class CComboBoxDlg : public CDialog
{
   DECLARE_DYNAMIC(CComboBoxDlg)

public:
   CComboBoxDlg(CWnd* pParent = NULL);   // standard constructor
   virtual ~CComboBoxDlg();

// Dialog Data
   enum { IDD = IDD_NVC_MFC_CCOMBOBOX_DIALOG };

protected:
   CComboBox* m_pComboBox;
   CMyComboBox m_MyComboBox;

   void SetCBDroppedWidth();
   void SetCBHorizontalExtent();
   void SetCBItemHeight();

   virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

   DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
