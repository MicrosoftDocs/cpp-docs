// NVC_MFCHtmlHelp.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CNVC_MFCHtmlHelpApp:
// See NVC_MFCHtmlHelp.cpp for the implementation of this class
//

class CNVC_MFCHtmlHelpApp : public CWinApp
{
public:
   CNVC_MFCHtmlHelpApp();

// Overrides
   public:
   virtual BOOL InitInstance();

// Implementation

   DECLARE_MESSAGE_MAP()
};

extern CNVC_MFCHtmlHelpApp theApp;