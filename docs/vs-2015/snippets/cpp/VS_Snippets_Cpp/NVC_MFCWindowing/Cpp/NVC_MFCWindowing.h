// NVC_MFCWindowing.h : main header file for the NVC_MFCWindowing application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyApp:
// See NVC_MFCWindowing.cpp for the implementation of this class
//

class CMyApp : public CWinApp
{
public:
	CMyApp();

   CMemFile* m_pMySampleMem;

// Overrides
public:
	virtual BOOL InitInstance();
   virtual int ExitInstance();
   virtual BOOL OnDDECommand(LPTSTR lpszCommand);
   virtual BOOL OnIdle(LONG lCount);

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()

public:
   afx_msg void SetLandscapeMode();
   afx_msg void Onm_hInstance();
   afx_msg void OnChangeStrings();
   afx_msg void OnAppName();
   afx_msg void OnFirstInstance();
   afx_msg void OnHideApplication();
   BOOL FirstInstance();
};

extern CMyApp theApp;