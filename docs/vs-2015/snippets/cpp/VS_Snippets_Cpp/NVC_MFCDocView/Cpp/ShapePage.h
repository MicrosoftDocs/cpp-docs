#pragma once

#include "MyPropertyPage.h"

// CShapePage dialog

class CShapePage : public CMyPropertyPage
{
	DECLARE_DYNAMIC(CShapePage)

public:
	CShapePage();
	virtual ~CShapePage();

   int m_Selection;

   virtual void GetPageSelections(CString& str);

// Dialog Data
	enum { IDD = IDD_SHAPE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
public:
   afx_msg void OnBnClickedRectangle();
public:
   afx_msg void OnBnClickedRoundRectangle();
public:
   afx_msg void OnBnClickedEllipse();
public:
   virtual BOOL OnSetActive();
public:
   virtual BOOL OnWizardFinish();
public:
   virtual void OnOK();
};
