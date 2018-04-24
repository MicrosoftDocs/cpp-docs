// NVC_MFCOleContainer.h : main header file for the NVC_MFCOleContainer application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// COleContainerApp:
// See NVC_MFCOleContainer.cpp for the implementation of this class
//

// <Snippet23>
class COleContainerApp : public CWinApp
{
protected:
   COleTemplateServer m_server;
   // remainder of class declaration ommitted
// </Snippet23>

public:
	COleContainerApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern COleContainerApp theApp;