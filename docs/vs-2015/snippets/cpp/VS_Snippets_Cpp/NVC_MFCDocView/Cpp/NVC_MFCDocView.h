// NVC_MFCDocView.h : main header file for the NVC_MFCDocView application
//
#pragma once

#ifndef __AFXWIN_H__
   #error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMyWinApp:
// See NVC_MFCDocView.cpp for the implementation of this class
//

class CMyWinApp : public CWinApp
{
public:
   CMyWinApp();
   ~CMyWinApp();

   void SetLandscapeMode();


// Overrides
public:
   virtual BOOL InitInstance();
   virtual BOOL OnIdle(LONG lCount);
   virtual BOOL IsIdleMessage(MSG* pMsg);

// Implementation
   afx_msg void OnAppAbout();
   DECLARE_MESSAGE_MAP()

   BOOL m_bClearAllAvailable;
public:
// <Snippet2>
   afx_msg void OnUpdateEditClearAll(CCmdUI *pCmdUI);
// </Snippet2>
public:
   virtual int Run();
};

extern CMyWinApp theApp;
