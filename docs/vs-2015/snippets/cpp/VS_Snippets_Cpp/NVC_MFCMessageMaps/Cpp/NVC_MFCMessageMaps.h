// NVC_MFCMessageMaps.h : main header file for the NVC_MFCMessageMaps application
//
#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyApp:
// See NVC_MFCMessageMaps.cpp for the implementation of this class
//

class CMyApp : public CWinApp
{
public:
   CMyApp();


// Overrides
public:
   virtual BOOL InitInstance();

// Implementation
   afx_msg void OnAppAbout();
   DECLARE_MESSAGE_MAP()
};

extern CMyApp theApp;