#pragma once

// MyBoundPropPage.h : Declaration of the CMyBoundPropPage property page class.


// CMyBoundPropPage : See MyBoundPropPage.cpp for implementation.

class CMyBoundPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyBoundPropPage)
	DECLARE_OLECREATE_EX(CMyBoundPropPage)

// Constructor
public:
	CMyBoundPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_MYBOUND };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

