#pragma once

// MyAxSubPpg.h : Declaration of the CMyAxSubPropPage property page class.


// CMyAxSubPropPage : See MyAxSubPpg.cpp for implementation.

class CMyAxSubPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyAxSubPropPage)
	DECLARE_OLECREATE_EX(CMyAxSubPropPage)

// Constructor
public:
	CMyAxSubPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_NVC_MFC_AXSUB };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

