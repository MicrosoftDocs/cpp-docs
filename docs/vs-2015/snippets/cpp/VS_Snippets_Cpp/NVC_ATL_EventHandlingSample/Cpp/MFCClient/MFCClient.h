// This is a part of the Active Template Library. 
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Active Template Library Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Active Template Library product.

// MFCClient.h : main header file for the MFCCLIENT application
//

#if !defined(AFX_MFCCLIENT_H__BC76490C_B55E_11D2_BA67_00C04F8EC847__INCLUDED_)
#define AFX_MFCCLIENT_H__BC76490C_B55E_11D2_BA67_00C04F8EC847__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCClientApp:
// See MFCClient.cpp for the implementation of this class
//

class CMFCClientApp : public CWinApp
{
public:
	CMFCClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCClientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCClientApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCLIENT_H__BC76490C_B55E_11D2_BA67_00C04F8EC847__INCLUDED_)
