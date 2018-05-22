#pragma once

#include "MyPropertyPage.h"

// CStylePage dialog

class CStylePage : public CMyPropertyPage
{
	DECLARE_DYNAMIC(CStylePage)

public:
	CStylePage();
	virtual ~CStylePage();

   virtual void GetPageSelections(CString& str);

// Dialog Data
	enum { IDD = IDD_STYLE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnKillActive();
public:
   UINT m_NumObjects;
public:
   virtual LRESULT OnWizardNext();
public:
   virtual BOOL OnApply();
public:
   virtual BOOL OnSetActive();
public:
   virtual void OnOK();
};
