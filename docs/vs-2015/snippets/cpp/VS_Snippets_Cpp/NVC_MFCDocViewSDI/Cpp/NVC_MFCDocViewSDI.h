// NVC_MFCDocViewSDI.h : main header file for the NVC_MFCDocViewSDI application
//
#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyWinApp:
// See NVC_MFCDocViewSDI.cpp for the implementation of this class
//

class CMyWinApp : public CWinApp
{
public:
   CMyWinApp();


// Overrides
public:
   virtual BOOL InitInstance();

// Implementation
   afx_msg void OnAppAbout();
   DECLARE_MESSAGE_MAP()

// <Snippet1>
   CView* m_pOldView;
   CView* m_pNewView;
   CView* SwitchView( );
// </Snippet1>
public:
   afx_msg void OnFileSwitchview();
};

extern CMyWinApp theApp;