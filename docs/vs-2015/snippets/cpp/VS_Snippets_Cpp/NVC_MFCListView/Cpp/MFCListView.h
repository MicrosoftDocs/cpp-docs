// MFCListView.h : main header file for the MFCListView application
//
#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCListViewApp:
// See MFCListView.cpp for the implementation of this class
//

class CMFCListViewApp : public CWinApp
{
public:
   CMFCListViewApp();


// Overrides
public:
   virtual BOOL InitInstance();

// Implementation
   afx_msg void OnAppAbout();
   DECLARE_MESSAGE_MAP()
};

extern CMFCListViewApp theApp;