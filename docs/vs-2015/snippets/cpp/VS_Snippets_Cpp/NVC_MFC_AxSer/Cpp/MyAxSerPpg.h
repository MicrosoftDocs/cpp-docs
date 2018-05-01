#pragma once

// MyAxSerPpg.h : Declaration of the CMyAxSerPropPage property page class.


// CMyAxSerPropPage : See MyAxSerPpg.cpp for implementation.

class CMyAxSerPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyAxSerPropPage)
	DECLARE_OLECREATE_EX(CMyAxSerPropPage)

// Constructor
public:
	CMyAxSerPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_NVC_MFC_AXSER };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

