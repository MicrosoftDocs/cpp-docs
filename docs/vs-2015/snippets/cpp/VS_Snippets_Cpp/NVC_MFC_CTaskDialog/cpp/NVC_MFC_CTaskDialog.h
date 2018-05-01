
// NVC_MFC_CTaskDialog.h : main header file for the NVC_MFC_CTaskDialog application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CNVC_MFC_CTaskDialogApp:
// See NVC_MFC_CTaskDialog.cpp for the implementation of this class
//

class CNVC_MFC_CTaskDialogApp : public CWinAppEx
{
public:
	CNVC_MFC_CTaskDialogApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()

private:
    void ShowDialogs();
};

extern CNVC_MFC_CTaskDialogApp theApp;
