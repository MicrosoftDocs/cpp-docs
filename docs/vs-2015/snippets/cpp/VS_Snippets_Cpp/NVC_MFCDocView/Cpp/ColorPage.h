#pragma once

#include "MyPropertyPage.h"

// CColorPage dialog

class CColorPage : public CMyPropertyPage
{
	DECLARE_DYNAMIC(CColorPage)

public:
   COLORREF m_InitialColor;
   COLORREF m_Color;

public:
	CColorPage();
	virtual ~CColorPage();

   virtual void GetPageSelections(CString& str);

// Dialog Data
	enum { IDD = IDD_COLOR };

protected:

   enum ColorRadio
   {
      crBlack = 0,
      crRed,
      crBlue,
      crGreen
   };

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   virtual void OnCancel();
public:
   virtual void OnReset();
public:
   virtual void OnOK();
public:
   virtual BOOL OnApply();
public:
   int m_iBlue;
public:
   int m_iGreen;
public:
   int m_iRed;
public:
   virtual BOOL OnQueryCancel();
public:
   int m_radioColor;
public:
   afx_msg void OnColorClicked(UINT nCmdID);
public:
   virtual LRESULT OnWizardBack();
public:
   afx_msg LRESULT OnQuerySiblings(WPARAM wParam, LPARAM lParam);
public:
   virtual BOOL OnSetActive();
public:
   virtual BOOL OnInitDialog();
};
