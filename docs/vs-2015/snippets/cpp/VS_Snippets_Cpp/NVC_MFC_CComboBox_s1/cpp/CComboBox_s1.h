// CComboBox_s1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCComboBox_s1App:
// See CComboBox_s1.cpp for the implementation of this class
//

class CCComboBox_s1App : public CWinApp
{
public:
	CCComboBox_s1App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCComboBox_s1App theApp;