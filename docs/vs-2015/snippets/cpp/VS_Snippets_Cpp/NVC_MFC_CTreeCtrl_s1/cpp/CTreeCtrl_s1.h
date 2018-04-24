// CTreeCtrl_s1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCTreeCtrl_s1App:
// See CTreeCtrl_s1.cpp for the implementation of this class
//

class CCTreeCtrl_s1App : public CWinApp
{
public:
	CCTreeCtrl_s1App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCTreeCtrl_s1App theApp;