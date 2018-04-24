#pragma once

// MyAxPicPpg.h : Declaration of the CMyAxPicPropPage property page class.


// CMyAxPicPropPage : See MyAxPicPpg.cpp for implementation.

class CMyAxPicPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyAxPicPropPage)
	DECLARE_OLECREATE_EX(CMyAxPicPropPage)

// Constructor
public:
	CMyAxPicPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_NVC_MFC_AXPIC };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

