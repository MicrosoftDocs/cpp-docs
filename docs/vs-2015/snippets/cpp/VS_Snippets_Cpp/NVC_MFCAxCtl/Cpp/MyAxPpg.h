#pragma once
#include "afxwin.h"

// MyAxPpg.h : Declaration of the CMyAxPropPage property page class.


// CMyAxPropPage : See MyAxPpg.cpp for implementation.

class CMyAxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyAxPropPage)
	DECLARE_OLECREATE_EX(CMyAxPropPage)

// Constructor
public:
	CMyAxPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_NVC_MFCAXCTL };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
public:
   int m_NeedlePosition;
};

