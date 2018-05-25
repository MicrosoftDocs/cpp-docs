#pragma once
#include "afxwin.h"

// CMyDlg dialog

class CMyDlg : public CDialog
{
	DECLARE_DYNAMIC(CMyDlg)

public:
	CMyDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMyDlg();

   CImage m_myImage;
   CMenu m_menu;
   CMenu* m_pmenuPop;

// Dialog Data
	enum { IDD = IDD_MYDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnPaint();
public:
   virtual BOOL OnInitDialog();
public:
   afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
public:
   afx_msg void OnBmpCommand();
   afx_msg void OnPopupSave();
public:
   afx_msg void OnPopupGetfilterstrings();
public:
   afx_msg void OnPopupTransparentblt();
};
