#pragma once
#include "afxwin.h"

// CSuperComboBox

class CSuperComboBox : public CComboBox
{
	DECLARE_DYNAMIC(CSuperComboBox)

public:
	CSuperComboBox();
	virtual ~CSuperComboBox();

   CEdit m_edit;
   CListBox m_listbox;

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
public:
   afx_msg void OnDestroy();
};



// CMyEdit

class CMyEdit : public CEdit
{
	DECLARE_DYNAMIC(CMyEdit)

public:
	CMyEdit();
	virtual ~CMyEdit();

protected:
	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};


// CMyDlg dialog

class CMyDlg : public CDialog
{
	DECLARE_DYNAMIC(CMyDlg)

public:
	CMyDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMyDlg();

   CWnd* m_pWndStatic;
   CWnd* m_pWndStaticEx;
   CBitmap* m_pBitmapCaret;

   CBrush m_RedBrush;
   CBrush m_BlueBrush;

   HICON m_hIcon;

   CFont m_font;

// Dialog Data
	enum { IDD = IDD_MYDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   CMyEdit m_MyEdit;
public:
   afx_msg void OnMarkButtons();
public:
   afx_msg void OnMarkRadio();
public:
   afx_msg void OnFindCenterChild();
public:
   afx_msg void OnSizeToClient();
public:
   afx_msg void OnCreateStatic();
public:
   afx_msg void OnChangeCaret();
public:
   afx_msg void OnCreateExtendedControl();
public:
   afx_msg void OnCreateGrayCaret();
public:
   afx_msg void OnCreateSolidCaret();
public:
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
   virtual BOOL OnInitDialog();
public:
   afx_msg BOOL OnToolTipNotify(UINT id, NMHDR* pNMHDR, LRESULT* pResult);
public:
   afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
public:
   afx_msg void OnBnClickedButton10();
public:
   afx_msg void SetSpinRange();
public:
   CListBox m_List;
public:
   afx_msg void OnBnClickedButton12();
public:
   afx_msg void OnSetName();
public:
   CButton m_MyButton;
public:
   CSuperComboBox m_SuperCombo;
};
