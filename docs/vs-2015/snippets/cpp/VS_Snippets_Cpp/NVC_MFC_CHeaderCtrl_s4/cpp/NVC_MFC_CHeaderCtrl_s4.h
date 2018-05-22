// NVC_MFC_CHeaderCtrl_s4.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CNVC_MFC_CHeaderCtrl_s4App:
// See NVC_MFC_CHeaderCtrl_s4.cpp for the implementation of this class
//

class CNVC_MFC_CHeaderCtrl_s4App : public CWinApp
{
public:
	CNVC_MFC_CHeaderCtrl_s4App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CNVC_MFC_CHeaderCtrl_s4App theApp;