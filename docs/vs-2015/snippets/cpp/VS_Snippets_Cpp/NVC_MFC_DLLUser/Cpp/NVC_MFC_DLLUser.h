// NVC_MFC_DLLUser.h : main header file for the NVC_MFC_DLLUser application
//
#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CUserApp:
// See NVC_MFC_DLLUser.cpp for the implementation of this class
//

class CUserApp : public CWinApp
{
public:
   CUserApp();


// Overrides
public:
   virtual BOOL InitInstance();

// Implementation
   afx_msg void OnAppAbout();
   DECLARE_MESSAGE_MAP()

   HINSTANCE m_hViewDll;
public:
   virtual int ExitInstance();
public:
   afx_msg void OnTestRegistermynewclass();
};

extern CUserApp theApp;