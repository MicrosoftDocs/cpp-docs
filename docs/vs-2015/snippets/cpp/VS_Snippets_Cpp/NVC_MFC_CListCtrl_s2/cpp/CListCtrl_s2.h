// CListCtrl_s2.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCListCtrl_s2App:
// See CListCtrl_s2.cpp for the implementation of this class
//

class CCListCtrl_s2App : public CWinApp
{
public:
	CCListCtrl_s2App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCListCtrl_s2App theApp;