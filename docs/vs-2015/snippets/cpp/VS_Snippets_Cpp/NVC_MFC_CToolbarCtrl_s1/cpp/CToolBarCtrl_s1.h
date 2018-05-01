// CToolBarCtrl_s1.h : main header file for the CToolBarCtrl_s1 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CCToolBarCtrl_s1App:
// See CToolBarCtrl_s1.cpp for the implementation of this class
//

class CCToolBarCtrl_s1App : public CWinApp
{
public:
	CCToolBarCtrl_s1App();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCToolBarCtrl_s1App theApp;