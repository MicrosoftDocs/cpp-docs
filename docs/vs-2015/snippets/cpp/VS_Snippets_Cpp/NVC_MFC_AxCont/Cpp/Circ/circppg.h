// circppg.h : Declaration of the CCircPropPage property page class.
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

////////////////////////////////////////////////////////////////////////////
// CCircPropPage : See circppg.cpp for implementation.

class CCircPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CCircPropPage)
	DECLARE_OLECREATE_EX(CCircPropPage)

// Constructor
public:
	CCircPropPage();

// Dialog Data
	//{{AFX_DATA(CCircPropPage)
	enum { IDD = IDD_PROPPAGE_CIRC };
	CString m_caption;
	int     m_circleOffset;
	BOOL    m_circleShape;
	CString m_note;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CCircPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};
