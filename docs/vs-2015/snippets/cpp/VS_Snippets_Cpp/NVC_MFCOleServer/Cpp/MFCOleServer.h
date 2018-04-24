// MFCOleServer.h : main header file for the MFCOleServer application
//
#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCOleServerApp:
// See MFCOleServer.cpp for the implementation of this class
//

class CMFCOleServerApp : public CWinApp
{
public:
   CMFCOleServerApp();


// Overrides
public:
   virtual BOOL InitInstance();

// Implementation
   COleTemplateServer m_server;
      // Server object for document creation
   afx_msg void OnAppAbout();
   DECLARE_MESSAGE_MAP()
};

extern CMFCOleServerApp theApp;