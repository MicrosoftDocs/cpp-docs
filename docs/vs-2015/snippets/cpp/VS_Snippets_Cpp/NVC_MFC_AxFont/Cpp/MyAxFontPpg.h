#pragma once

// MyAxFontPpg.h : Declaration of the CMyAxFontPropPage property page class.


// CMyAxFontPropPage : See MyAxFontPpg.cpp for implementation.

class CMyAxFontPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyAxFontPropPage)
	DECLARE_OLECREATE_EX(CMyAxFontPropPage)

// Constructor
public:
	CMyAxFontPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_NVC_MFC_AXFONT };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

