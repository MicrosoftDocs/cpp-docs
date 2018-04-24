// CMFCAutomation.h : main header file for the CMFCAutomation application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CCMFCAutomationApp:
// See CMFCAutomation.cpp for the implementation of this class
//

class CCMFCAutomationApp : public CWinApp
{
public:
	CCMFCAutomationApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	COleTemplateServer m_server;
		// Server object for document creation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()

   afx_msg void OnAfxOleRegisterTypeLib();
};

extern CCMFCAutomationApp theApp;