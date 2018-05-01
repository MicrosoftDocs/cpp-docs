
// Mandelbrot.h : main header file for the Mandelbrot application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMandelbrotApp:
// See Mandelbrot.cpp for the implementation of this class
//

class CMandelbrotApp : public CWinAppEx
{
public:
	CMandelbrotApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMandelbrotApp theApp;
