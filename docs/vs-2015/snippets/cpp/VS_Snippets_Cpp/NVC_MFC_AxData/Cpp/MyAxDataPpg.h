#pragma once

// MyAxDataPpg.h : Declaration of the CMyAxDataPropPage property page class.


// CMyAxDataPropPage : See MyAxDataPpg.cpp for implementation.

class CMyAxDataPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyAxDataPropPage)
	DECLARE_OLECREATE_EX(CMyAxDataPropPage)

// Constructor
public:
	CMyAxDataPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_NVC_MFC_AXDATA };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

