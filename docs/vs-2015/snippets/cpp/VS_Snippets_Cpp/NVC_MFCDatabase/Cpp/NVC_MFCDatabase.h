// NVC_MFCDatabase.h : main header file for the NVC_MFCDatabase application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyDatabaseApp:
// See NVC_MFCDatabase.cpp for the implementation of this class
//

class CMyDatabaseApp : public CWinApp
{
public:
	CMyDatabaseApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMyDatabaseApp theApp;