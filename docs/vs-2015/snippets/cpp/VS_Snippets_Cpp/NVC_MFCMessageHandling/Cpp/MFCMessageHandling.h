// MFCMessageHandling.h : main header file for the MFCMessageHandling application
//
#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCMessageHandlingApp:
// See MFCMessageHandling.cpp for the implementation of this class
//

class CMFCMessageHandlingApp : public CWinApp
{
public:
   CMFCMessageHandlingApp();


// Overrides
public:
   virtual BOOL InitInstance();

// Implementation
   afx_msg void OnAppAbout();
   DECLARE_MESSAGE_MAP()
};

extern CMFCMessageHandlingApp theApp;