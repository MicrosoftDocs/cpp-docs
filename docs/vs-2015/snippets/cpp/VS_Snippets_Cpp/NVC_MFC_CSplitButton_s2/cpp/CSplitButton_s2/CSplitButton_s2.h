// CSplitButton_s2.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCSplitButton_s2App:
// See CSplitButton_s2.cpp for the implementation of this class
//

class CCSplitButton_s2App : public CWinApp
{
public:
	CCSplitButton_s2App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCSplitButton_s2App theApp;